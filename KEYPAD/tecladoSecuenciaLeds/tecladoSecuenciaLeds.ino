#include <LiquidCrystal_I2C.h>  //Librería Display 
LiquidCrystal_I2C lcd(0x27, 16, 2); //Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas

#include <Keypad.h> //Incluir la libreria
const byte FILAS = 4; //Declarar una variable llamada FILAS de tipo byte con valor de 4
const byte COLS = 4; //Declarar una variable llamada COLS de tipo byte con valor de 4

int leds[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

//Colocar los valores correspondientes del teclado
char teclas[FILAS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

//Declarar variables para los pines de las filas y columas
byte pinesFilas[FILAS] = {46, 47, 48, 49}; //Pines de las filas
byte pinesColumnas[COLS] = {50, 51, 52, 53}; //Pines de las columnas

//Almacenar la sincronizacion de las teclas
Keypad keypad = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, FILAS, COLS); //Mapear pinesFilas con FILAS y pinesCol...

void setup() {
  Serial.begin(9600); //Para poder ver en el monitor serial
  lcd.init();   // Inicializar el LCD
  lcd.backlight();    //Encender la luz de fondo.

  for (int i = 0; i < 12; i++) {
    pinMode(leds[i], OUTPUT);
  }

}

void loop() {
  char tecla = keypad.getKey(); //Vamos a almacenar el tecla el valor que se presiono usando getKey();
  if (tecla == 'A') {
    lcd.setCursor(0, 0);
    lcd.print("Secuencia 1");

    for (int i = 0; i < 3; i++) {
      digitalWrite(leds[0], HIGH); //PIN 2
      digitalWrite(leds[2], 1); //PIN 4
      digitalWrite(leds[4], 1); //PIN 6
      digitalWrite(leds[6], 1); //PIN 8
      delay(1000);
      digitalWrite(leds[0], LOW); //PIN 2
      digitalWrite(leds[2], 0); //PIN 4
      digitalWrite(leds[4], 0); //PIN 6
      digitalWrite(leds[6], 0); //PIN 8
      delay(1000);
    }
  }

  if (tecla == 'B') {
    lcd.setCursor(0, 0);
    lcd.print("Secuencia 2");
  }
}
