/*
  CONEXION:
  + -> 5v
  - -> GND
  S -> 6
*/
#include <IRremote.hpp>
#define value IrReceiver.decodedIRData.decodedRawData
#define Boton_1 0xBA45FF00
#define Boton_2 0xB946FF00
#define Boton_3 0xB847FF00

int sensor = 6;
int red =  11;
int green = 9;
int blue = 10;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(sensor, DISABLE_LED_FEEDBACK);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  if (IrReceiver.decode()) {
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
    if (value == Boton_1) {
      Serial.print("BOTON 1");
      rojo();
    }
    if (value == Boton_2) {
      Serial.print("BOTON 2");
      verde();
    }
    if (value == Boton_3) {
      Serial.print("BOTON 3");
      azul();
    }
    IrReceiver.resume();
  }
  delay(100);
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
