#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

//Libreria del display
LiquidCrystal_I2C lcd(0x27, 16, 2);

//Libreria de Keypad
const byte FILAS = 4; //Variable de Filas
const byte COLS = 4; //Variable de Columnas

//Matriz del teclado
char teclas[FILAS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte pinesFilas[FILAS] = {46, 47, 48, 49}; //Pines de las filas
byte pinesColumnas[COLS] = {50, 51, 52, 53}; //Pines de las columnas

Keypad keypad = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, FILAS, COLS);


void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  char tecla = keypad.getKey(); //almacenar el valor de tecla en tecla
  if(tecla){
    lcd.setCursor(0,0);
    lcd.print("Presionaste:");
    lcd.setCursor(7,1);
    lcd.print(tecla);
  }
}
