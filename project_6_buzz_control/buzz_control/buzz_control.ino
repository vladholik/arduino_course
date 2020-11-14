#define BUZZ_PIN 5

void setup() {
  pinMode(BUZZ_PIN, OUTPUT);
}

void loop() {
  digitalWrite(BUZZ_PIN, HIGH);
  delay(500);
  digitalWrite(BUZZ_PIN, LOW);
  delay(500);
}
