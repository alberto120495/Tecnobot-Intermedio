#include <SoftwareSerial.h> //Libreria para usar el Bluetooth
//Pines que se usaran como RX y TX
//A8 = 62 ->TX
//A9 = 63 ->RX
SoftwareSerial miBT(63, 62); // (RX, TX)   RX=63, TX=62
void setup() {
  Serial.begin(9600); //Abrimos la comunicacion Serial
  Serial.println("Listo");
  //INICIALIZAR comunicacion serie del modulo Bluetooth
  miBT.begin(9600);
}

void loop() {
  //Bluetooth a la computadora
  if (miBT.available()) {
    Serial.write(miBT.read()); //Si hay datos los muestro en el monitor serial (read())
    //Serial.write escribo en el monitor
  }

  //Proceso inverso
  //Mandar informacion de la computadora al Bluetooth
  if (Serial.available()) {
    miBT.write(Serial.read());
  }
}
