#include <LiquidCrystal.h>
int ledPin =  6;   
const int buttonPin = 7; 
LiquidCrystal lcd(53, 51, 47, 43, 39, 35);
// LED connected to digital pin 13


int count = 0;       // Our blink counter
int buttonState = 0;  

unsigned long minutes = 60000;




// The setup() method runs once, when the sketch starts

void setup()   {                
 // initialize the digital pin as an output:
 Serial.begin(9600);
  lcd.begin(16, 2);
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT);
 
}






 
void loop() {

buttonState = digitalRead(buttonPin);
    
digitalWrite(ledPin , HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPin , LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 

  if (digitalRead(ledPin) == HIGH)
  {
  if(buttonState == HIGH)
   {
    
  count++;
lcd.setCursor(7, 0);
 lcd.print(count);
 buttonState ==LOW;
    delay(300);
    }  else{count=count;
    lcd.setCursor(7, 0);
 lcd.print(count);
   
    }
    
  }
 }

void loop() {
 lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);}
  
