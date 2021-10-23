
 
int led_pin= 2;
int relay_pin=3;
int output;

void setup() {

  Serial.begin(9600);
  pinMode(relay_pin,INPUT);
  pinMode(led_pin,OUTPUT);

}

void loop() {
  output=digitalRead(relay_pin);
  // IF OUTPUT IS HIGH

  if (output==1){
    digitalWrite(led_pin,HIGH);
    delay(100);
   }

   // IF OUTPUT IS LOW

   else if(output==0){
    digitalWrite(led_pin,LOW);
    delay(100);
   }

   Serial.println(output);
   delay(100);
   

}
