void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);
  digitalWrite(4, HIGH);

}

void loop() {
  int pinState = digitalRead(4);
  Serial.println(abs(pinState-1));
  delay(100);

}
