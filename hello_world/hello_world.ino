#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
unsigned time;
void setup() 
{
  
  lcd.begin(16, 2);
 
  lcd.print("hello, world!");

  time = millis();
  
}

void loop() 
{

  lcd.setCursor(0, 1);
 
  lcd.print(time / 1000);
  
}
