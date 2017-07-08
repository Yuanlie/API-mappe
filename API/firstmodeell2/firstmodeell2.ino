int ledPin =  3;   
const int buttonPin = 6; 
int ledPin2 = 13;// LED connected to digital pin 13

 // Blink the LED
int count = 0;       // Our blink counter
int buttonState = 0;   

// The setup() method runs once, when the sketch starts

void setup()   {                
 // initialize the digital pin as an output:
 Serial.begin(9600);
 pinMode(ledPin2, OUTPUT);
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT);
}

// the loop() method runs over and over again,
// as long as the Arduino has power
void loop() {
 buttonState = digitalRead(buttonPin);
   if (count > 3)
 {
   digitalWrite(ledPin2, HIGH);
    delay(300);
   digitalWrite(ledPin2, LOW);
   delay(50);
   count=0;
 }
 if (count < 4) {
  if(buttonState == HIGH
  )
   {
    
    count++;
 
 buttonState ==LOW;
    delay(300);
    }
    else{count=count;}
  }}

  
