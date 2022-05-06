#define LED 2

void setup() {
  pinMode(15,OUTPUT);
  digitalWrite(15,HIGH);
  }

void loop() {
  digitalWrite(15,HIGH);
  delay(10000);
  digitalWrite(15,LOW);
  delay(5000);
  
}
