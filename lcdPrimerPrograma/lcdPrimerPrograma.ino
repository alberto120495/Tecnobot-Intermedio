#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); //0x3F
void setup() {
  lcd.init(); //Inicializar el LCD
  lcd.backlight(); //Encender la luz de fondo
  lcd.setCursor(2, 0); //(COL, FIL) Colocar el inicio de la letra en la posicion 2 de la primer fila
  lcd.print("BIENVENIDO A");//Escribir mensaje en el display
  lcd.setCursor(3, 1); //(COL, FIL)
  lcd.print("Tecnobotics");
}

void loop() {


}
