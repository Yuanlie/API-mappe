#include <LiquidCrystal.h>

int ledPin =  9;   
const int buttonPin = 6; 


LiquidCrystal lcd(12, 11, 7, 5, 3, 2);
// LED connected to digital pin 13


int count = 0;       // Our blink counter
int buttonState = 0;  
int LED = 0;
unsigned long minutes = 60000;




// The setup() method runs once, when the sketch starts

void setup()   {                
 // initialize the digital pin as an output:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
  lcd.begin(16, 2);
}






 
void loop() {
  

  if (millis() < minutes * 1) {
 

      buttonState = digitalRead(buttonPin);
    
digitalWrite(ledPin , HIGH);   // turn the LED on (HIGH is the voltage level)
            delay(1000);         // wait for a second
 digitalWrite(ledPin , LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 

 
  if(buttonState == HIGH)
   {
    count++;
lcd.setCursor(0, 0);
 lcd.print(count);
     

 buttonState ==LOW;
    delay(300);
    }  else{count=count;
   
    }
     
    
  }

 
 
else { lcd.setCursor(0, 0);
 lcd.print(count);}

}

  
