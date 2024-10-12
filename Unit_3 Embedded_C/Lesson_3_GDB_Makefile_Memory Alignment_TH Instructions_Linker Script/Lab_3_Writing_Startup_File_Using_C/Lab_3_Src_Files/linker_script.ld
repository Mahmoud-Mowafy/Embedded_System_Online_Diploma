/*
@auther: Mahmoud Mowafey
Date: 09_Oct_2024
File: linker_script.ld 
*/


/* Memory Layout Description */
MEMORY {
    flash(RX) : ORIGIN = 0X08000000, LENGTH = 128k
    sram(RWX) : ORIGIN = 0X20000000, LENGTH = 28K
}


SECTIONS{
    .text : {
            *(.vectors*)
            *(.text*)
            *(.rodata)
            _E_TEXT = .;
    }>flash

    .data : {
            _S_DATA = .;
            *(.data)
            _E_DATA = .;
    }>sram AT> flash

    .bss : {
            _S_BSS = .;
             *(.bss)
             . = ALIGN(4);
             _E_BSS = .;
    }>sram

}