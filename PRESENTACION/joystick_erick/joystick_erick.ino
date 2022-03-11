/*
****************CONEXIONES JOYSTICK - ARDUINO****************
Cable VERDE: A0
Cable AZUL: A1
Cable NEGRO: GND
Cable ROJO: 5V

*************** MODO DE VER EL JOYSTICK ************************
En la clase les mencione que se ve con los cables viendo a la izquierda,
cometi un ERROR, los cables tiene que estar viendo hacia ustedes.

EL CODIGO YA ESTA PROBADO Y FUNCIONANDO BIEN,
Pruebenlo completo y usando sus motores.
*/


//Joystick
int x;
int y;

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

  Serial.begin(9600);
  //Entradas analogicas no requieren inicializacion.
}

void loop() {
  x = analogRead(A0);
  y = analogRead(A1);

  Serial.println("");
  Serial.print("x: ");
  Serial.print(x);
  
  Serial.println("");
  Serial.print("y: ");
  Serial.print(y);


  //Detener motores
  if (y > 480 && y < 520 && x > 480 && x < 520) {
    digitalWrite(izquierdoDelante, LOW);
    digitalWrite(derechoDelante, LOW);
    digitalWrite(izquierdoAtras, LOW);
    digitalWrite(derechoAtras, LOW);
  }

  //Avanzar Delante
  if (y > 520 && y <= 1023) {
    digitalWrite(izquierdoDelante, HIGH);
    digitalWrite(derechoDelante, HIGH);
    Serial.println("DELANTE");
  } else {
    digitalWrite(izquierdoDelante, LOW);
    digitalWrite(derechoDelante, LOW);
  }

  //Avanzar Atras
  if (y >= 0 && y < 480) {
    digitalWrite(izquierdoAtras, HIGH);
    digitalWrite(derechoAtras, HIGH);
    Serial.println("ATRAS");
  } else {
    digitalWrite(izquierdoAtras, LOW);
    digitalWrite(derechoAtras, LOW);
  }

  //Izquierda
  if (x >= 0 && x < 480 ) {
    digitalWrite(derechoDelante, HIGH);

    Serial.println("IZQUIERDA");
  } else {
    digitalWrite(izquierdoDelante, LOW);
  }


  //Derecha
  if (x > 520  && x <= 1023) {
    digitalWrite(izquierdoDelante, HIGH);
    Serial.println("DERECHA");
  } else {
    digitalWrite(derechoDelante, LOW);
  }



}
