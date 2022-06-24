/*
  CONEXIONES
  V -> 5v
  R -> 11
  B -> 10
  G -> 9
*/
int red = 11;
int green = 9;
int blue = 10;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  //Encender led Rojo
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(2000);

  //Encender led verde
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  delay(2000);

  //Encender led verde
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(2000);
}
