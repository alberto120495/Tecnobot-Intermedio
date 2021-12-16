//Variables
int trigger = 22;
int echo = 23;
int tiempo;
int distancia;

void setup() {
  //Salida de los Leds
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  //Configuracion de sensor
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigger, HIGH);
  delay(1);
  digitalWrite(trigger, LOW);

  tiempo = pulseIn(echo, HIGH);
  distancia = tiempo / 58.2; //Distancia en CM

  //Visualizar distancia en monitor serial
  Serial.print(distancia);
  Serial.println("cm");
  delay(200);


  switch (distancia) {
    case 10:
      digitalWrite(3, 1);
      digitalWrite(4, HIGH);
      digitalWrite(5, 1);
      break;

    default:
      digitalWrite(3, 0);
      digitalWrite(4, LOW);
      digitalWrite(5, 0);
      break;
  }

}
