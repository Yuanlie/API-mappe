float temp;
float vol;
int v;
void setup() 
{
  Serial.begin(9600);
  // put your setup code here, to run once:

}


void loop() 
{
  v = analogRead(A0);
  vol = v*(5.0 / 1023.0);
  if (vol == temp)
  {
    temp = vol;
    
  }
  else
  {
    Serial.print(vol);
    Serial.println("V");
    temp = vol ;
    delay(1000); 
  }
}
