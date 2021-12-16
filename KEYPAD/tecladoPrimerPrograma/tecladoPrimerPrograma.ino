#include <Keypad.h> //Incluir libreria

const byte FILAS = 4; //Declarar variable llamada FILAS de tipo byte con valor de 4
const byte COLS = 4; //Declarar variable llamada COLS de tipo byte con valor de 4

char teclas[FILAS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

//Variables para los pienes de filñas y columnas
byte pinesFilas[FILAS] = {46, 47, 48, 49}; // Pines de las filas
byte pinesColumnas[COLS] = {50, 51, 52, 53}; //Pines de las columnas

//Almacenar la sincronizacion de las teclas
Keypad keypad = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, FILAS, COLS);
//Mapear pinesFilas con FILAS y pinesColumnas con COLS


void setup() {
  Serial.begin(9600); //Para poder ver en el monitor serial

}

void loop() {
  char tecla = keypad.getKey(); //Almacenar en tecla en valor que se presiono usando getKey()

  if (tecla) { //Comparar si se presiono algo
    Serial.println(tecla);
  }
}
