#define LEDPin 2
void setup() {
  // put your setup code here, to run once:
pinMode(LEDPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(uint16_t j=0; j<20000; j=j+100)
  {
    digitalWrite(LEDPin, HIGH);
    delayMicroseconds(j);
    digitalWrite(LEDPin, LOW);
    delayMicroseconds(20000-j);    
  }
 for(uint16_t j=0; j<20000; j=j+100)
  {
    digitalWrite(LEDPin, HIGH);
    delayMicroseconds(j);
    digitalWrite(LEDPin, LOW);
    delayMicroseconds(20000-j);    
  }
}
