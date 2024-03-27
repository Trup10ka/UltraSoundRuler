#pragma once

/* Varies from users device; scan for the address is needed; you can find the scanner script in this project in the 'lcd_addr_scan' folder */
#define LCD_MEM_ADDRESS 0x3F

/* This might vary based on your LCD, but for most of the cases this is valid */
#define LCD_ROWS 2
#define LCD_COLUMNS 16

void init_lcd();

void print_distance(float distance, const char type[]);