#include <Servo.h>
Servo myServo; //Nombrar nuestro servo

int pinServo = 2; // Pin donde esta conectado el servo
int pulsoMin = 1000; //Pulso Minimo 1 Microsegundos   1 Milis -> 1000 Micros
int pulsoMax = 2000; //Pulso Maximo 2 Microsegundos

void setup() {
  //attach sirve para inicializar al servo
  //(PinDeConexion, ValorPulsoMinino, ValorPulsoMaximo) pulsos en Microsegundos
  myServo.attach(pinServo, pulsoMin, pulsoMax);
}

void loop() {
  //Se genera la señal con la duracion del pulso adecuado
  myServo.write(0); //Envia el ángulo en el cual debe posicionarse el servo (0 grados)
  delay(5000);
  myServo.write(180);
  delay(5000);
}
