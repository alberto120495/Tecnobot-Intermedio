#include <Keypad.h> //Incluir la libreria 
#include <LiquidCrystal_I2C.h>  //Librería Display 
LiquidCrystal_I2C lcd(0x27, 16, 2); //Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
const byte FILAS = 4; //Declarar variable llamada FILAS de tipo byte con valor de 4
const byte COLUMNAS = 4;//Declarar variable llamada COLUMNAS de tipo byte con valor de 4

int leds[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

//Colocar los valores correspondientes del teclado
char teclas[FILAS][COLUMNAS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

//Declarar variables para los PINES de las filas y columnas
byte pinesFilas[FILAS] = {46, 47, 48, 49}; //Pines de las filas
byte pinesColumnas[COLUMNAS] = {50, 51, 52, 53}; //Pines de las columnas

//Almacenar la sincronizacion de las teclas
Keypad keypad = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, FILAS, COLUMNAS);


void setup() {
  for (int i = 0; i < 12; i++) {
    pinMode(leds[i], OUTPUT);
  }
  Serial.begin(9600); //Para poder ver en el monitor serial
  lcd.init();   // Inicializar el LCD
  lcd.backlight();    //Encender la luz de fondo.

}

void loop() {
  char tecla = keypad.getKey();
  if (tecla == 'A') {
    lcd.setCursor(0, 0);
    lcd.print("Secuencia 1");
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 7; j++) {
        digitalWrite(leds[j], HIGH);
        delay(100);
        digitalWrite(leds[j], LOW);
      }
    }
  }

  if (tecla == 'B') {
    lcd.setCursor(0, 0);
    lcd.print("Secuencia 2");
    for (int i = 0; i < 3; i++) {

      digitalWrite(leds[7], HIGH);
      delay(100);
      digitalWrite(leds[7], LOW);


      digitalWrite(leds[8], HIGH);
      delay(100);
      digitalWrite(leds[8], LOW);

      digitalWrite(leds[2], HIGH);
      delay(100);
      digitalWrite(leds[2], LOW);


      digitalWrite(leds[3], HIGH);
      delay(100);
      digitalWrite(leds[3], LOW);

      digitalWrite(leds[4], HIGH);
      delay(100);
      digitalWrite(leds[4], LOW);

      digitalWrite(leds[9], HIGH);
      delay(100);
      digitalWrite(leds[9], LOW);


      digitalWrite(leds[10], HIGH);
      delay(100);
      digitalWrite(leds[10], LOW);

    }
  }

  if (tecla == 'C') {
    lcd.setCursor(0, 0);
    lcd.print("Secuencia 3");

    for (int i = 0; i < 3; i++) {
      digitalWrite(leds[7], HIGH);
      digitalWrite(leds[8], HIGH);
      digitalWrite(leds[2], HIGH);

      digitalWrite(leds[4], HIGH);
      digitalWrite(leds[9], HIGH);
      digitalWrite(leds[10], HIGH);
      delay(200);

      digitalWrite(leds[7], LOW);
      digitalWrite(leds[8], LOW);
      digitalWrite(leds[2], LOW);

      digitalWrite(leds[4], LOW);
      digitalWrite(leds[9], LOW);
      digitalWrite(leds[10], LOW);

      delay(200);

    }


  }

  if (tecla == 'D') {
    lcd.setCursor(0, 0);
    lcd.print("Secuencia 4");
  }
}
