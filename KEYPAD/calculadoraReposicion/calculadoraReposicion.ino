#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

const byte FILAS = 4;
const byte COLS = 4;

char teclas[FILAS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'},
};

byte pinesFilas[FILAS] = {46, 47, 48, 49};
byte pinesColumnas[COLS] = {50, 51, 52, 53};

Keypad keypad = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, FILAS, COLS);

//Variables para almacenar los valores
long Num1, Num2, Number;
char tecla, operacion;
boolean resultado = false;


void setup() {
  lcd.init();
  lcd.backlight();
  lcd.print("SUPER CALCULADORA");
  lcd.setCursor(0, 1);
  lcd.print("TECNOBOTICS");
  delay(2000);
  lcd.clear();
}

void loop() {
  tecla = keypad.getKey();

  //Usaremos funciones: detectarBotones, calcularResultado, mostrarResultado

  if (tecla != NO_KEY) {
    detectarBotones();
  }

  if (resultado == true) {
    calcularResultado();
  }

  mostrarResultado();

}

void detectarBotones() {

}

void calcularResultado() {

}

void mostrarResultado() {

}
