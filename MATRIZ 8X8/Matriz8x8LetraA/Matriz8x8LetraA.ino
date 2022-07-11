#include <LedControl.h> //Libreria

LedControl lc = LedControl(11, 13, 10, 1);//(DIN, CLK, CS, Nro. de dispositivos)

void setup() {
  lc.shutdown(0, false); //(Nro de dispositivo, estado) -> Encendemos la matriz
  lc.setIntensity(0, 4);//(Nro de dispositivo, intensidad) -> Nivel de intensidad del led 0-15
  lc.clearDisplay(0); //(Nro de dispositivo) -> Limpiar matriz
}

void loop() {
 lc.setLed(0,7,0,true);
 lc.setLed(0,6,1,true);
 lc.setLed(0,5,2,true);
 lc.setLed(0,4,3,true);
 lc.setLed(0,5,4,true);
 lc.setLed(0,6,5,true);
 lc.setLed(0,7,6,true);
}
