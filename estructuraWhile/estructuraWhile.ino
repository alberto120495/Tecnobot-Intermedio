void setup() {
  Serial.begin(9600);
}

void loop() {
  /*
    //Sintaxis
    //Mientras
    while (condicion ) {
    //Instrucciones
    }
  */

  /*
    for(int i = 1; i <= 10; i++){
    Serial.println(i);
    delay(1000);
    }
  */

  Serial.println("Incremento While");
  int i = 1; // Variable con valor 1
  while ( i <= 10 ) {
    Serial.println(i);
    delay(500);
    i++; //!Importante no olvidar incrementar o decrementar
  }


  Serial.println("Decremento While");
  int j = 10;
  while (j >= 1) {
    Serial.println(j);
    delay(1000);
    j--;
  }


  //Do - While
  Serial.println("Incremento Do While");
  int k = 1;
  do {
    Serial.println(k);
    delay(1000);
    k++;
  } while (k <= 10);


}
