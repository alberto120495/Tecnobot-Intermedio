void setup() {
  Serial.begin(9600);
}

void loop() {
  sumaDosNumeros(5,8);
  delay(1000);
  sumaDosNumeros(500,78);
  delay(1000);
}

void sumaDosNumeros(int numeroUno, int numeroDos){
  int resultado = numeroUno + numeroDos;
  Serial.println(resultado);
}
