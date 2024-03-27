#include "lcd.hpp"
#include <LiquidCrystal_I2C.h>
#include <Arduino.h>

#define CURSOR_COLUMN 0
#define CURSOR_ROW 0

LiquidCrystal_I2C lcd(LCD_MEM_ADDRESS, LCD_COLUMNS, LCD_ROWS);

void init_lcd()
{
    lcd.init();
    lcd.backlight();
    lcd.begin(LCD_COLUMNS, LCD_ROWS);
}

void print_distance(float distance, const char type[])
{
    lcd.clear();
    lcd.setCursor(CURSOR_COLUMN, CURSOR_ROW);
    
    double distanceInDouble = (double) distance;
    
    lcd.print(distanceInDouble);
    lcd.print(type);
}