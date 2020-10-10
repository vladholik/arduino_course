#define PHOTO_PIN 1
#define LED_PIN 11

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  while ("TRUE"){
    int photo = analogRead(PHOTO_PIN);
    int led = map(photo, 0, 1023, 255, 0);
    Serial.println(led);
    analogWrite(LED_PIN, led);
  }

}
