#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(2, 0);
  lcd.print("BIENVENIDO A");
  lcd.setCursor(3, 1);
  lcd.print("LAKE");
}

void loop() {
  //Funciones para desplazar el mensaje
  //scrollDisplayRight() -> Mueve texto a la derecha
  //scrollDisplayLeft()  -> Mueve texto a la izquierda

  //Movimiento SIN FOR
  /*
    lcd.scrollDisplayRight();
    delay(1000);

    lcd.scrollDisplayLeft();
    delay(1000);
  */


  //Moviento CON FOR
  for (int i = 1; i <= 2; i++) {
    lcd.scrollDisplayRight();
    delay(1000);
  }

  for (int i = 1; i <= 2; i++) {
    lcd.scrollDisplayLeft();
    delay(1000);
  }

  
}
