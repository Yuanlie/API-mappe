 int photocellPin = 8;
 int val = 0;
void setup() 
{
  Serial.begin(9600);

  
}
 
void loop() 
{
    val = analogRead(photocellPin);
    Serial.println(val);
 
}
