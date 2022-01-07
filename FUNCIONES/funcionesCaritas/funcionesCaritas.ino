int leds[11] = {2, 3, 7, 8, 4, 5, 6, 9, 10, 11, 12} ;

void setup() {
  for (int i = 0; i <= 10; i++) {
    pinMode(leds[i], OUTPUT);
  }

}

void loop() {
  sonrisa();
  delay(1000);
  apagarLeds();
  delay(1000);
  triste();
  delay(1000);
  apagarLeds();
  delay(2000);
}

void sonrisa() {
  for (int s = 0; s <= 6; s++) {
    digitalWrite(leds[s], HIGH);
  }
}

void triste() {
  for (int t = 4; t <= 10; t++) {
    digitalWrite(leds[t], HIGH);
  }
}

void apagarLeds() {
  for (int i = 0; i <= 10; i++) {
    digitalWrite(leds[i], LOW);
  }
}
