/* ============================================================================
 * link_hw.ld — Linker script for FPGA Hardware Benchmarking
 * 
 * Target: Unified 128 KB Block RAM at 0x00000000 (MIST-ES & 3-SIPP-ESR FPGA SoC)
 * ============================================================================ */

OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY {
    RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 32K
}

PHDRS {
    ram_hdr PT_LOAD ;
}

SECTIONS {
    . = 0x00000000;

    .text : {
        KEEP(*(.text.init))
        *(.text*)
        . = ALIGN(4);
    } > RAM :ram_hdr

    .rodata : {
        *(.rodata*)
        *(.srodata*)
        . = ALIGN(4);
    } > RAM :ram_hdr

    .data : {
        _data_start = .;
        *(.data*)
        *(.sdata*)
        . = ALIGN(4);
        _data_end = .;
    } > RAM :ram_hdr

    .bss (NOLOAD) : {
        _bss_start = .;
        *(.sbss*)
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        _bss_end = .;
    } > RAM :ram_hdr

    _end = _bss_end;
    _stack_top = ORIGIN(RAM) + LENGTH(RAM) - 16;

    /DISCARD/ : {
        *(.riscv.attributes)
        *(.comment)
        *(.eh_frame)
        *(.note*)
    }
}
