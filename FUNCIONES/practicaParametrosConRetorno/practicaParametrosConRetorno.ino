int led = 5;
void setup() {
  pinMode(5, OUTPUT);
}

void loop() {
  int resultado = divide4(40);
  parpadeaCiclo(resultado);
  delay(1000);
}

int divide4(int numero) {
  return  numero / 4;
}

void parpadeaCiclo(int n) {
  for (int i = 1; i <= n; i++) {
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
  }
}
