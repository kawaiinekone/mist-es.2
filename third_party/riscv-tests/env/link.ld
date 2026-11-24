/* link.ld -- riscv-tests on the MIST-ES SoC (Harvard memory map):
   code at 0x0000_0000 (IMEM, loaded from the .imem.hex image),
   data at 0x8000_0000 (DRAM, loaded from the .dram.hex image),
   tohost is the SoC exit register at 0x2000_0000. */
OUTPUT_ARCH(riscv)
ENTRY(_start)
tohost = 0x20000000;
PHDRS {
  text_hdr PT_LOAD ;
  data_hdr PT_LOAD ;
}
SECTIONS {
  . = 0x00000000;
  .text.init : { *(.text.init) } :text_hdr
  .text      : { *(.text) *(.text.*) } :text_hdr
  . = 0x80000000;
  .data      : { *(.data) *(.data.*) *(.sdata) *(.sdata.*)
                 *(.rodata) *(.rodata.*) *(.srodata) *(.srodata.*) } :data_hdr
  .bss       : { *(.bss) *(.bss.*) *(.sbss) *(.sbss.*) *(COMMON) } :data_hdr
  _end = .;
}
