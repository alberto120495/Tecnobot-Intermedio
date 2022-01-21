void setup() {
  Serial.begin(9600);
}

void loop() {
  float numerito = sumaDosNumeros(5.1,6.3) + 200;
  Serial.println(numerito);
  delay(2000);
}

float sumaDosNumeros(float numeroUno, float numeroDos) {
  float resultado = numeroUno + numeroDos;
  return resultado; 
}
