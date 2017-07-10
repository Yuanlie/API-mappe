int photocellPin = A2; 
int photocellVal = 0; 
int minLight = 200;   
int ledPin = 4;
int ledState = 0; 
 
void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);
}
 
void loop() {
  photocellVal = analogRead(photocellPin);
  Serial.println(photocellVal);   
   
 
  if (photocellVal < minLight && ledState == 0) {
    digitalWrite(ledPin, HIGH);
    ledState = 1;
  }
   
  
  if (photocellVal > minLight && ledState == 1) {
    digitalWrite(ledPin, LOW); 
    ledState = 0;
  }  
   
  delay(100);       
}
