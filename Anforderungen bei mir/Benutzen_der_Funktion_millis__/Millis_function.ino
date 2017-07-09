#include <LiquidCrystal.h>

unsigned long time;
LiquidCrystal lcd(12, 11, 5, 4, 2, 1);

void setup()
{
  lcd.begin(16.2);
  Serial.begin(9600);
}


void loop()
{
  time = millis();
  lcd.setCursor(0,1);
  lcd.print(time/1000);
}
