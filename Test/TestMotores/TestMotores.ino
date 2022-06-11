//Motores
int izquierdoDelante = 40;
int izquierdoAtras = 41;
int derechoDelante = 39;
int derechoAtras = 38;

void setup() {
  pinMode(izquierdoAtras, OUTPUT);
  pinMode(izquierdoDelante, OUTPUT);
  pinMode(derechoAtras, OUTPUT);
  pinMode(derechoDelante, OUTPUT);
}


void loop() {
  //Avanzar Delante
  digitalWrite(izquierdoDelante, HIGH);
  digitalWrite(derechoDelante, HIGH);
  delay(2000);

  //Detener motores
  digitalWrite(izquierdoDelante, LOW);
  digitalWrite(derechoDelante, LOW);
  digitalWrite(izquierdoAtras, LOW);
  digitalWrite(derechoAtras, LOW);
  delay(2000);

  //Avanzar Atras
  digitalWrite(izquierdoAtras, HIGH);
  digitalWrite(derechoAtras, HIGH);
  delay(2000);


  //Izquierda
  digitalWrite(derechoDelante, HIGH);
  delay(2000);

  //Derecha
  digitalWrite(izquierdoDelante, HIGH);
  delay(2000);
}
