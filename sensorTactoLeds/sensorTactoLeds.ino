int sensores = 26; //Variable de conexion del sensor
void setup() {
  Serial.begin(9600); //Iniciar el puerto serie 
  //Sensor
  pinMode(sensores, INPUT);
  //LEDS
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  int estadoSensor = digitalRead(sensor);
  
  if(estadoSensor == HIGH){
    Serial.println("Deteccion");
    delay(200);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    
  }else{
    Serial.println("NO Deteccion");
    delay(200);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
  }
  
}
