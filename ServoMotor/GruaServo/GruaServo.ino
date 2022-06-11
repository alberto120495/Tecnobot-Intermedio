#include <SoftwareSerial.h>
#include <Servo.h>

Servo myServo; //Nombrar nuestro servo

int pinServo = 2; //Pin de conexion
int eje1 = 90;
int eje2 = 90;
int x;
int y;


void setup() {
  myServo.attach(pinServo);
  myServo.write(90);
  Serial.begin(9600);
}

void loop() {
  x = analogRead(A0);
  y = analogRead(A1);

  Serial.println("");
  Serial.print("x: ");
  Serial.print(x);
  Serial.println("");
  Serial.print("y: ");
  Serial.print(y);
  Serial.println("");


  //Eje en Y - Servo de Arr - Aba

  if (y < 200 && eje1 < 180) {
    eje1++;
    myServo.write(eje1);
  }
  if (y > 700 && eje1 > 0) {
    eje1--;
    myServo.write(eje1);
  }


/*
  //Eje en X - Servo de Izq - Der
  if (x < 200 && eje2 < 180) {
    eje2++;
    myServo.write(eje2);
  }
  if (x > 700 && eje2 > 0) {
    eje2--;
    myServo.write(eje2);
  }

  delay(15);
  */

}
