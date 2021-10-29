#include <LiquidCrystal_I2C.h>  //Librería Display 
LiquidCrystal_I2C lcd(0x27, 16, 2); //Crear el objeto lcd  dirección  0

void setup() {

  Serial.begin(9600);
  lcd.init();   // Inicializar el LCD
  lcd.backlight();    //Encender la luz de fondo.

}
void loop() {

  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      lcd.clear();
      int resultado = i * j;
      lcd.setCursor(0, 0);
      lcd.print(i);
      lcd.setCursor(1, 0);
      lcd.print("x");
      lcd.setCursor(2, 0);
      lcd.print(j);
      lcd.setCursor(3, 0);
      lcd.print("=");
      lcd.setCursor(4, 0);
      lcd.print(resultado);
      Serial.println("");
      delay(1000);
    }
  }
}
