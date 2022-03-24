#include <SoftwareSerial.h>
SoftwareSerial miBT(63, 62);
//Leds
int leds[11] = {2, 3, 7, 8, 4, 5, 6, 9, 10, 11, 12};

//Motores
int izquierdoDelante = 40;
int izquierdoAtras = 41;
int derechoDelante = 39;
int derechoAtras = 38;

void setup() {
  pinMode(izquierdoAtras, OUTPUT);
  pinMode(izquierdoDelante, OUTPUT);
  pinMode(derechoAtras, OUTPUT);
  pinMode(derechoDelante, OUTPUT);

  for (int a = 0; a <= 10; a++) {
    pinMode(leds[a], OUTPUT);
  }
  Serial.begin(9600);
  Serial.println("Listo");
  miBT.begin(9600);
}


int lectura;
void loop() {
  if (miBT.available()) {
    lectura = miBT.read();
    Serial.write(miBT.read());

    if (lectura == 'e') {
      Serial.println("led on");
      encender();
    }
    
    if (lectura == 'a') {
      Serial.println("led off");
      apagar();
    }

    //Avanzar Delante
    if (lectura == '8') {
      digitalWrite(izquierdoDelante, HIGH);
      digitalWrite(derechoDelante, HIGH);
      Serial.println("DELANTE");
    } 

    
    //Detener motores
    if (lectura == '5') {
      digitalWrite(izquierdoDelante, LOW);
      digitalWrite(derechoDelante, LOW);
      digitalWrite(izquierdoAtras, LOW);
      digitalWrite(derechoAtras, LOW);
      Serial.println("ALTO");
    }


    //Avanzar Atras
    if (lectura == '2') {
      digitalWrite(izquierdoAtras, HIGH);
      digitalWrite(derechoAtras, HIGH);
      Serial.println("ATRAS");
    } 

    //Izquierda
    if (lectura == '4' ) {
      digitalWrite(derechoDelante, HIGH);

      Serial.println("IZQUIERDA");
    } 

    //Derecha
    if (lectura == '6') {
      digitalWrite(izquierdoDelante, HIGH);
      Serial.println("DERECHA");
    } 

  }
}

void encender () {
  for (int b = 0; b <= 10; b++) {
    digitalWrite(leds[b], HIGH);
  }
}

void apagar() {
  for (int d = 0; d <= 10; d++) {
    digitalWrite(leds[d], LOW);
  }
}
