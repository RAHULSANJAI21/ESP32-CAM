void setup() {
  pinMode(33,OUTPUT);//set GPIO 33 as output which is connected to inbuilt LED
}

void loop() {
  digitalWrite(33, LOW);//write low in LED PIN which turns on LED as this pin has pull up resistor
  delay(1000);//delay for one second
  digitalWrite(33,HIGH); //write high in LED PIN which turns of LED
  delay(1000);//delay foe one second
}
