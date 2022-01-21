void setup() {
  configurarLed(4);
  configurarLed(5);
  configurarLed(6);
}

void loop() {
  encender(4);
  encender(5);
  encender(6);
  delay(2000);
  apagar(4);
  apagar(5);
  apagar(6);
}


//Crear Funcion
void encender(int led) {
  digitalWrite(led, HIGH);
}

void apagar(int led) {
  digitalWrite(led, LOW);
  delay(2000);
}

void configurarLed(int led) {
  pinMode(led, OUTPUT);
}
