#define PHOTO_PIN A1
#define LED_PIN 11

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
    int photo = analogRead(PHOTO_PIN);
    int led = abs(map(photo, 0, 1023, 0, 255)-255);
    Serial.println(led);
    analogWrite(LED_PIN, led);
}
