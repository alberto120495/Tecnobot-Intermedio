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

//Mapeo de teclas
Keypad keypad = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, FILAS, COLS);

int col = 0;
int fil = 0;

int col2 = 0;
int fil2 = 1;
void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  char tecla = keypad.getKey();
  if (tecla) {
    lcd.setCursor(col, fil);
    lcd.print(tecla);
    col++;

    if (col > 16) {
      lcd.setCursor(col2, fil2);
      lcd.print(tecla);
      col2++;
    }

    if (col2 > 16) {
      lcd.clear();
      col = 0;
      col2 = 0;
    }


  }

}
