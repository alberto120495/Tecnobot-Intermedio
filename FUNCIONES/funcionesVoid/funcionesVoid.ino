int led4 = 4;
int led5 = 5;
void setup() {
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  encenderLeds();
  delay(500);
  apagarLeds();
  delay(500);
  encenderLeds();
  delay(2000);
  apagarLeds();
  delay(1000);
}

void encenderLeds() {
  digitalWrite(led4, 1);
  digitalWrite(led5, 1);
}

void apagarLeds() {
  digitalWrite(led4, 0);
  digitalWrite(led5, 0);
}
