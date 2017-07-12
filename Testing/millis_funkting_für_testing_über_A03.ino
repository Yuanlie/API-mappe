
#include <testing for API.h>

#include <registration.h>
#include <testDefinition.h>


#define TEST
int ledPin = 4;

void setup(){
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(millis()< 60000 ){
    digitalWrite(ledPin,HIGH);
    delay(500);
    digitalWrite(ledPin,LOW);
    delay(500);
    }

  
  
  delay(100);
}
