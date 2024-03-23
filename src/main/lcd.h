#ifndef LCD_SCAN_H

/* This condition is needed for the compiler to know that any source code that includes this header, is a C code, thus adjusting the compilation process */
#ifdef __cplusplus
extern "C" {
#endif

/* Varies from users device; scan for the address is needed; you can find the scanner script in this project in the 'lcd_addr_scan' folder */
#define LCD_MEM_ADDRESS 0x3F

#ifdef __cplusplus
}
#endif

#endif