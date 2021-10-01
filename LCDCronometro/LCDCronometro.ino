#include <LiquidCrystal_I2C.h> //Libreria del Display
LiquidCrystal_I2C lcd(0x27,16,2); //Nombrando al display 16 columnas y 2 filas

void setup() {
  lcd.init(); //Inicializar el LCD
  lcd.backlight(); //Encendemos la luz de fondo.
  lcd.setCursor(0,0); //COL,FIL
  lcd.print("Cronometro");
}

void loop() {
  lcd.setCursor(5,1); //Posicionar cursor en 2da fila
  lcd.print(millis() / 1000); //Dividir los milisegundos entre 1000 para obtener los segundos
  lcd.setCursor(9,1); 
  lcd.print("seg."); //Escribir la palabra seg a un lado del tiempo

}
