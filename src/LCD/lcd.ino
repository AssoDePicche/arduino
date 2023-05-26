#include <LiquidCrystal.h>

#define LCD_COLUMNS     16
#define LCD_LINES        2
#define REGISTER_SELECT 12
#define ENABLE          11
#define DB4 5
#define DB5 4
#define DB6 3
#define DB7 2

LiquidCrystal display(REGISTER_SELECT, ENABLE, DB4, DB5, DB6, DB7);

void setup()
{
  display.begin(LCD_COLUMNS, LCD_LINES);

  display.clear();
}

void loop()
{
  display.setCursor(0, 0);

  display.print("Hello, World!");
}
