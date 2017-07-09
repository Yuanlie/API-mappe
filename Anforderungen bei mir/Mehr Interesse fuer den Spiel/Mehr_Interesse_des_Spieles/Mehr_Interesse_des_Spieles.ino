#include <LiquidCrystal.h>

unsigned long time;
LiquidCrystal lcd(12, 11, 5, 4, 2, 1);

void setup()
{
  lcd.begin(16.2);
  Serial.begin(9600);
  lcd.setCursor(0, 0);
  lcd.print("Dance! xwyz!");
  delay(1000);  
  lcd.setCursor(6, 1);
  lcd.print("3!");
  delay(1000);  
  lcd.setCursor(6, 1);
  lcd.print("2!");
  delay(1000);  
  lcd.setCursor(6, 1);
  lcd.print("1!");
  delay(1000);  
  lcd.setCursor(6, 1);
  lcd.print("Go!");
  delay(1000);  
  lcd.clear();
}


void loop()
{
  time = millis();
  lcd.setCursor(0,1);
  lcd.print(time/1000);
}
