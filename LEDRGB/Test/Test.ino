//CONEXIONES
/*
RGB = RED GREEN BLUE
V -> 5v
R -> 11
B -> 10
G -> 9
*/
int red =  9;
int green = 10;
int blue = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  delay(2000);
  
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(2000);

  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  delay(2000);
  
}
