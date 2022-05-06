#define LED 2

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
//  digitalWrite(LED,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,LOW);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(500);
}
