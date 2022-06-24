
int red =  11;
int green = 9;
int blue = 10;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  //rojo();
  //verde();
  //azul();
  //amarillo();
  //rosa();
  //naranja();

}


void rojo() {
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  delay(2000);
}

void verde() {
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  delay(2000);
}

void azul() {
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(2000);
}


void amarillo() {
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  delay(2000);
}

void rosa() {
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(2000);
}

void naranja(){
   analogWrite(red, 3);
  analogWrite(green, 181);
  analogWrite(blue, 241);
  delay(2000);
}
