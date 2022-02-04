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
  lcd.clear();
  if (tecla == '*') {
    Number = 0;
    Num1 = 0;
    Num2 = 0;
    resultado = false;
  }

  if (tecla == '1') {
    if (Number == 0) {
      Number = 1;
    } else {
      Number = (Number * 10) + 1;
    }
  }

  if (tecla == '2') {
    if (Number == 0) {
      Number = 2;
    } else {
      Number = (Number * 10) + 2;
    }
  }

  if (tecla == '3') {
    if (Number == 0) {
      Number = 3;
    } else {
      Number = (Number * 10) + 3;
    }
  }

  if (tecla == '4') {
    if (Number == 0) {
      Number = 4;
    } else {
      Number = (Number * 10) + 4;
    }
  }

  if (tecla == '5') {
    if (Number == 0) {
      Number = 5;
    } else {
      Number = (Number * 10) + 5;
    }
  }

  if (tecla == '6') {
    if (Number == 0) {
      Number = 6;
    } else {
      Number = (Number * 10) + 6;
    }
  }

  if (tecla == '7') {
    if (Number == 0) {
      Number = 7;
    } else {
      Number = (Number * 10) + 7;
    }
  }

  if (tecla == '8') {
    if (Number == 0) {
      Number = 8;
    } else {
      Number = (Number * 10) + 8;
    }
  }

  if (tecla == '9') {
    if (Number == 0) {
      Number = 9;
    } else {
      Number = (Number * 10) + 9;
    }
  }

  if (tecla == '0') {
    if (Number == 0) {
      Number = 0;
    } else {
      Number = (Number * 10) + 0;
    }
  }
  
}

void calcularResultado() {
}

void mostrarResultado() {
  lcd.setCursor(0, 0);
  lcd.print(Num1);
  lcd.print(operacion);
  lcd.print(Num2);

  if (resultado == true) {
    lcd.print(" =");
    lcd.print(Number);
  }
  lcd.setCursor(0, 1);
  lcd.print(Number);

}
