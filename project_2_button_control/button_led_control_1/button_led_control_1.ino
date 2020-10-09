void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
  
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
}

void loop() {
  int pinState4 = digitalRead(4);
  int pinState3 = digitalRead(3);
  Serial.println(pinState3);
  
  if (pinState3 == 0){
    digitalWrite(7, HIGH);}
  delay(50);
  
  if (pinState4 == 0){
    digitalWrite(7, LOW);}
  
  
  

}
