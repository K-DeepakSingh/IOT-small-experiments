#define LED 2

void setup() {
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
  
  }

void loop() {
  if(Serial.available())
  {
    while(Serial.available())
    {
      char c= Serial.read();
//       Serial.print("%c",c);
      if(c=='1')
      {
        digitalWrite(LED,HIGH);
        Serial.println("led on");
      }
      else if(c=='0')
      {
        digitalWrite(LED,LOW);
         Serial.println("led off");
      }
    }
  }
  
}
