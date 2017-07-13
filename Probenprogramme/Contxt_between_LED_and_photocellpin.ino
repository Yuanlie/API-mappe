 int ledpin = 4;
 int photocellPin = 8;
 int val = 0;
void setup() 
{
  Serial.begin(9600);
  pinMode(ledpin,INPUT);
  
}
 
void loop() 
{
    val = analogRead(photocellPin);
    Serial.println(val);
    if (val<112)
    {
        digitalWrite(ledpin,HIGH);
        delay(500); 
     }
    else
    {
        digitalWrite(ledpin,LOW); 
     }
 
}
