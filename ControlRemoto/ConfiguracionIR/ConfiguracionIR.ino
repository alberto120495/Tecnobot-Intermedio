/*
  CONEXION:
  + -> 5v
  - -> GND
  S -> 6
*/
#include <IRremote.hpp>

int sensor = 6;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(sensor, DISABLE_LED_FEEDBACK);
}

void loop() {
  if (IrReceiver.decode()) {
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
    IrReceiver.resume();
  }
  delay(100);
}
