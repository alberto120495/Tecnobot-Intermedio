#include <Servo.h>
Servo myServo; //Nombrar nuestro servo

int pinServo = 2; //Pin de conexion

void setup() {
  myServo.attach(pinServo);
}

void loop() {
  myServo.write(0);
  delay(2000);
}
