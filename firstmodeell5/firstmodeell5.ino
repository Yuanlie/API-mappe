#include <LiquidCrystal.h>

int  LED_1=  44; 
int LED_2= 45;  
const int buttonPin = 6; 


LiquidCrystal lcd(53, 51, 47, 43, 39, 35);
// LED connected to digital pin 13


int count = 0;       // Our blink counter
int buttonState = 0;  

unsigned long minutes = 60000;
long randomNumber;



// The setup() method runs once, when the sketch starts

void setup()   {                
 // initialize the digital pin as an output:
pinMode(LED_1,OUTPUT);
pinMode(LED_2,OUTPUT);
pinMode(buttonPin, INPUT);
lcd.begin(16, 2);
}






 
void loop() {
  

  if (millis() < minutes * 1) {
 
 randomNumber = random(5,8);
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

  
