#include <LedControl.h> //Libreria

LedControl lc = LedControl(11, 13, 10, 1);//(DIN, CLK, CS, Nro. de dispositivos)

void setup() {
  lc.shutdown(0, false); //(Nro de dispositivo, estado) -> Encendemos la matriz
  lc.setIntensity(0, 4);//(Nro de dispositivo, intensidad) -> Nivel de intensidad del led 0-15
  lc.clearDisplay(0); //(Nro de dispositivo) -> Limpiar matriz
}

void loop() {
  for (int fila = 0; fila < 8; fila++) {
    for (int columna = 0; columna < 8; columna++) {
      lc.setLed(0, fila, columna, true);//(Nro de dispositivo, fila, columna, estado)
      delay(100);
     /* lc.setLed(0, fila, columna, false);
      delay(100);*/
    }
  }
  lc.clearDisplay(0);
}
