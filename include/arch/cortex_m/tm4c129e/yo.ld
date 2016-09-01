MEMORY
{
    Flash (rx) : ORIGIN = 0x00000000, LENGTH = 1M
    SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 512K
}

ENTRY(start_yo)

KERNEL_BASE = 0x1000;
KERNEL_STACK_SIZE = 0x300;

SECTIONS {

    .text 0x0:
    {
        KEEP(*(.kernel_stack));
        KEEP(*(.isr_vector));
        . = KERNEL_BASE;
        kernel_text_start = .;
        *(.text*);
        *(.rodata*);
        *(.mempool*);
        . = ALIGN(4);
        init_fn_start = .;
        KEEP(*(.yo_init));
        init_fn_end = .;
        kernel_text_end = .;
    } > Flash

    .stack :
    ALIGN (256)
    {
        kernel_stack_start = .;
        . += KERNEL_STACK_SIZE;
        kernel_stack_end = .;
    } > SRAM

	.data :
	ALIGN (256)
	{
		kernel_data_start = .;
		*(.data*);
		kernel_data_end = .;
	} > SRAM

	/* zero initialized data */
	.bss (NOLOAD) :
	ALIGN (256)
	{
		bss_start = .;
		kernel_bss_start = .;
		*(.bss*)
		kernel_bss_end = .;
		bss_end = .;

        . = ALIGN(256);
        mem_start = .;
        mem_end = ORIGIN(SRAM) + LENGTH(SRAM);
	} > SRAM
}
