//CONEXIONES
/*
  RGB = RED GREEN BLUE
  V -> 5v
  R -> 11
  B -> 10
  G -> 9

  int red =  11;
  int green = 9;
  int blue = 10;
*/
int red =  11;
int green = 9;
int blue = 10;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  naranja();
  delay(500);

  rojo();
  delay(500);

  blanco();
  delay(500);

  rosa();
  delay(500);

  verde();
  delay(500);

  amarillo();
  delay(500);

  azul();
  delay(500);
}

void rojo() {
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 255);
}

void verde() {
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 255);
}

void azul() {
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 0);
}

//BLANCO
void blanco() {
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 0);
}

//AMARILLO
void amarillo() {
  analogWrite(red, 0);
  analogWrite(green, 8);
  analogWrite(blue, 255);
}

//NARANJA
void naranja() {
  analogWrite(red, 0);
  analogWrite(green, 168);
  analogWrite(blue, 255);
}

//ROSA
void rosa() {
  analogWrite(red, 3);
  analogWrite(green, 255);
  analogWrite(blue, 160);
}
