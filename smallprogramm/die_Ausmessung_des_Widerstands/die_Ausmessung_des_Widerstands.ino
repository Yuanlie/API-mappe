int Potpin = A4;
float r = 200.0 ;
float Value,R;

void setup()   
{                
   Serial.begin(9600);
 
}

void loop() 
{
   Value = analogRead(Potpin);
   R = (1023.0 - Value) / (Value/r);  
   Serial.println( R );
   delay( 1000 );
}


  
