SECTIONS {
    . = 0x30000000;
    __text_start = .;
    .text          :   { *(.text) }
    __text_end = .;
    .rodata ALIGN(4) : {*(.rodata)} 
    .data ALIGN(4) : { *(.data) }
    .bss ALIGN(4)  : { *(.bss)  *(COMMON) }
}
