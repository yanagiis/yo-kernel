#include <error.h>
#include <arch/port.h>
#include <arch/cortex_m/reg.h>
#include <arch/cortex_m/tm4c129e/sysctl.h>
#include <arch/cortex_m/tm4c129e/sysclock.h>

#define PLL_LOCKED_TIMEOUT 32768

void init_sys_clock(void)
{
    uint32_t regval;
    int32_t timeout;

    // setup MOSC
    //   - enable MOSC power, crystal
    //   - set OSCRNG ( >= 10MHz)
    regval = getreg32(TM4C129X_SYSCTL_MOSCCTL);
    regval &= ~(TM4C129X_SYSCTL_MOSCCTL_PWRDN | TM4C129X_SYSCTL_MOSCCTL_NOXTAL);
    regval |= TM4C129X_SYSCTL_MOSCCTL_OSCRNG;
    putreg32(regval, TM4C129X_SYSCTL_MOSCCTL);

    // Set the memory timings for the maximum external frequency since
    // this could be a switch to PIOSC or possibly to MOSC which can be
    // up to 25MHz.
    regval = TM4C129X_SYSCTL_MEMTIM0_FBCHT(2) |
             TM4C129X_SYSCTL_MEMTIM0_EBCHT(2) | TM4C129X_SYSCTL_MEMTIM0_FWS(1) |
             TM4C129X_SYSCTL_MEMTIM0_EWS(1) | TM4C129X_SYSCTL_MUST_BE_1;
    putreg32(regval, TM4C129X_SYSCTL_MEMTIM0);

    // Clear the old PLL divider and source in case it was set.
    regval = getreg32(TM4C129X_SYSCTL_RSCLKCFG);
    regval &= ~(
        TM4C129X_SYSCTL_RSCLKCFG_PLLSRC_M | TM4C129X_SYSCTL_RSCLKCFG_OSCSRC_M |
        TM4C129X_SYSCTL_RSCLKCFG_PSYSDIV_M | TM4C129X_SYSCTL_RSCLKCFG_USEPLL);

    // Update mem timing
    regval |= TM4C129X_SYSCTL_RSCLKCFG_MEMTIMU;
    putreg32(regval, TM4C129X_SYSCTL_RSCLKCFG);

    putreg32(PLL_FREQ0, TM4C129X_SYSCTL_PLLFREQ0);
    putreg32(PLL_FREQ1, TM4C129X_SYSCTL_PLLFREQ1);

    // setup Memory timing for CPU freq 120MHz
    regval = TM4C129X_SYSCTL_MEMTIM0_FBCHT(6) |
             TM4C129X_SYSCTL_MEMTIM0_EBCHT(6) | TM4C129X_SYSCTL_MEMTIM0_FWS(5) |
             TM4C129X_SYSCTL_MEMTIM0_EWS(5) | TM4C129X_SYSCTL_MUST_BE_1;
    putreg32(regval, TM4C129X_SYSCTL_MEMTIM0);

    // Enable PLL or Power on PLL
    if ((getreg32(TM4C129X_SYSCTL_PLLFREQ0) &
         TM4C129X_SYSCTL_PLLFREQ0_PLLPWR) == 0) {
        regval = getreg32(TM4C129X_SYSCTL_PLLFREQ0);
        regval |= TM4C129X_SYSCTL_PLLFREQ0_PLLPWR;
        putreg32(regval, TM4C129X_SYSCTL_PLLFREQ0);
    } else {
        regval = getreg32(TM4C129X_SYSCTL_RSCLKCFG);
        regval |= TM4C129X_SYSCTL_RSCLKCFG_NEWFREQ;
        putreg32(regval, TM4C129X_SYSCTL_RSCLKCFG);
    }

    // Wait until the PLL has locked
    for (timeout = PLL_LOCKED_TIMEOUT; timeout > 0; --timeout) {
        if ((getreg32(TM4C129X_SYSCTL_PLLSTAT) &
             TM4C129X_SYSCTL_PLLSTAT_LOCK) != 0) {
            break;
        }
    }

    if (timeout > 0) {
        regval = getreg32(TM4C129X_SYSCTL_RSCLKCFG);
        regval |= (TM4C129X_SYSCTL_RSCLKCFG_PSYSDIV(PSYSDIV - 1) |
                   TM4C129X_SYSCTL_RSCLKCFG_OSCSRC(0x3) |
                   TM4C129X_SYSCTL_RSCLKCFG_PLLSRC(0x3) |
                   TM4C129X_SYSCTL_RSCLKCFG_USEPLL |
                   TM4C129X_SYSCTL_RSCLKCFG_MEMTIMU);
        putreg32(regval, TM4C129X_SYSCTL_RSCLKCFG);
    } else {
        // panic("tm4c129e PLL set failed");
    }
}
