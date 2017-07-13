int photoResistor = A2; 
int value = 0; 
int minLight = 200;   
int ledPin = 4; 
 
void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);
}
 
void loop() {
  if (millis()<60000)
{
  vlaue = analogRead(photoResistor);
  Serial.println(value);   
   
 
  if (photocellVal < minLight ) {
    digitalWrite(ledPin, HIGH);

  }
   
  
  else  {
    digitalWrite(ledPin, LOW); 
 
  }  
   
  delay(100);       
}
}
