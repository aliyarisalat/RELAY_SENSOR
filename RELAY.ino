
#define RELAY 7

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode (RELAY,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RELAY,0);
Serial.println("light OFF");
delay(2000);

digitalWrite(RELAY,1);
Serial.println("light ON");
delay(2000);
}
