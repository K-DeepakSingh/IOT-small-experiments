// ESP32 Touch Test
// Just test touch pin - Touch0 is T0 which is on GPIO 4.
//#define LED 2
void setup() {
  Serial.begin(115200);
  pinMode(15,OUTPUT);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop() {
  Serial.println(touchRead(4));  // get value of Touch 0 pin = GPIO 4
  delay(1000);
  if(touchRead(4)<20)
  {
    digitalWrite(15,HIGH);
      Serial.println("led on");
  }
  else
  {
    digitalWrite(15,LOW);
      Serial.println("led off");
  }
}
