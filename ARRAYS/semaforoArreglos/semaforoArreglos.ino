int leds[3] = {4, 5, 6};
int tiempos[3] = {3000, 1000, 3000};

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(leds[i], HIGH);
    delay(tiempos[i]);
    digitalWrite(leds[i], LOW);
  }
}
