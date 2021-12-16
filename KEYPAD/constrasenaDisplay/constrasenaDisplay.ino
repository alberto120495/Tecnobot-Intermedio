#include <LiquidCrystal_I2C.h>  //Librería Display 
LiquidCrystal_I2C lcd(0x27, 16, 2); //Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas

#include <Keypad.h> //Incluir la libreria
const byte FILAS = 4; //Declarar una variable llamada FILAS de tipo byte con valor de 4
const byte COLS = 4; //Declarar una variable llamada COLS de tipo byte con valor de 4

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

char clave[5]; //Clave que ingresara la persona de 4 digito, ponemos uno de mas que sera utilizado, NULL -> NULO,
//Cuando tienes un arreglo de caracteres con el ultimo digito vacio, se convierte en string -> cadena de caracteres

char claveMaestra[5] = "1234"; //Clave asiganda - Correcta
byte indice = 0; //Para ver cada digito de manera individual desde el teclado.
int indiceDisplay = 0;

void setup() {
  Serial.begin(9600); //Para poder ver en el monitor serial
  lcd.init();   // Inicializar el LCD
  lcd.backlight();    //Encender la luz de fondo.
}

void loop() {
  char tecla = keypad.getKey(); //Vamos a almacenar el tecla el valor que se presiono usando getKey();
  
  if (tecla) { //Comparacion de si se presiono una tecla
    clave[indice] = tecla; //Almacenamos en posicion [n] la tecla que presionamos
    indice++;
    lcd.setCursor(indiceDisplay,0);
    lcd.print(tecla);
    indiceDisplay++;
  }
  if (indice == 4) { // Cuando ya termianmos de emter los 4 digitos hacemos la comparacion
    if (!strcmp(clave, claveMaestra)) { //strcmp (string compare) - Evalua la comparacion si es exitoso regresa 0 si no regresa 1
      lcd.setCursor(0,1);
      lcd.print("CORRECTO");
      delay(2000);
    } else {
      lcd.setCursor(0,1);
      lcd.print("INCORRECTA");
      delay(2000);
    }
    indice = 0;
    indiceDisplay = 0;
    lcd.clear();
  }
}
