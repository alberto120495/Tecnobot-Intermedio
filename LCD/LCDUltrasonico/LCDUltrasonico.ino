#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); //Pantalla con direccion 0x27
//Variables
int Trigger = 22;
int Echo = 23;

int tiempo;
int distancia;
int led = 5;

void setup() {
  pinMode(Trigger, OUTPUT); //Emitir el pulso
  pinMode(Echo, INPUT);
  pinMode(led, OUTPUT);
  lcd.init(); //Inicializar el LCD
  lcd.backlight(); //Encender la luz de fondo.
}

void loop() {
  digitalWrite(Trigger, HIGH); //Disparar la señal
  delay(1);
  digitalWrite(Trigger, LOW);//Apagar señal

  tiempo = pulseIn(Echo, HIGH);
  distancia = tiempo / 58.2;

  lcd.setCursor(0, 0);
  lcd.print("Distancia:");
  lcd.setCursor(0, 1);
  lcd.print(distancia); //Mostrar distancia en la pantalla
  delay(200);
  lcd.clear(); //Limpiar pantalla de cualquier texto

  //Encender Led con una distancia menor a 20
  if (distancia <= 20) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }


}
