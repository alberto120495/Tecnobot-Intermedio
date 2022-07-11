#include <LedControl.h> //Libreria

LedControl lc = LedControl(11, 13, 10, 1);//(DIN, CLK, CS, Nro. de dispositivos)

#define demora 1000
byte corazon[8] = {
  B00000000,
  B00000000,
  B00110110,
  B01001001,
  B01000001,
  B00100010,
  B00010100,
  B00001000
};

void setup() {
  lc.shutdown(0, false); //(Nro de dispositivo, estado) -> Encendemos la matriz
  lc.setIntensity(0, 4);//(Nro de dispositivo, intensidad) -> Nivel de intensidad del led 0-15
  lc.clearDisplay(0); //(Nro de dispositivo) -> Limpiar matriz
}

void loop() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, corazon[i]);
  }
  delay(demora);
}
