 int LED = 4;
void setup() 
{
  Serial.begin(9600);
  pinMode(LED,INPUT);
  
}
 
void loop() 
{
 
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(500);
 
}
