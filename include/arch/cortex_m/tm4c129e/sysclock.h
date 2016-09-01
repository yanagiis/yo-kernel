#ifndef ARCH_CORTEX_M_TM4C129E_SYSCLOCK_H
#define ARCH_CORTEX_M_TM4C129E_SYSCLOCK_H

#define PLL_Q (0)
#define PLL_N (4)
#define PLL_MINT (96)
#define PLL_MFRAC (0)

#define XTAL_FREQ (25000000)
#define SYSCLK_FREQ (120000000)
#define PLL_FVCO (480000000)

#define PLL_MDIV (PLL_MINT + (PLL_MFRAC / 1024))
#define PLL_FIN (25 / ((PLL_Q + 1) * (PLL_N + 1)))
#define PSYSDIV (4)

#define PLL_FREQ0_MINT_SHIFT (0)
#define PLL_FREQ0_MFRAC_SHIFT (10)
#define PLL_FREQ0 \
	((uint32_t)((PLL_MINT) << PLL_FREQ0_MINT_SHIFT) | \
	 (uint32_t)((PLL_MFRAC) << PLL_FREQ0_MFRAC_SHIFT))

#define PLL_FREQ1_N_SHIFT (0)
#define PLL_FREQ1_Q_SHIFT (8)
#define PLL_FREQ1 \
	((uint32_t)((PLL_Q) << PLL_FREQ1_Q_SHIFT) | \
	 (uint32_t)((PLL_N) << PLL_FREQ1_N_SHIFT))

#endif // ARCH_CORTEX_M_TM4C129E_SYSCLOCK_H
