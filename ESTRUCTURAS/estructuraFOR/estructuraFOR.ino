int total = 10;
void setup() {

  Serial.begin(9600);
}

void loop() {
  Serial.println("Antes del for");

  //For con incremento
 for (int i = 1; i <= total; i++) {
    Serial.println(i);
    delay(500);
 }
 

  //For con decremento
  for(int i = 10; i >= 1; i--){  
    Serial.println(i); 
    delay(500);
  }
  

//Icremento en una unidad cualquiera
  for(int i = 0; i <= 100; i+=2){
     Serial.println(i); 
    delay(500);
  }

  
//Decremento en una unidad cualquiera
  for(int i = 100; i >= 1; i-=2){
     Serial.println(i); 
    delay(500);
  }
  

  


  Serial.println("Despues del for");
  delay(1000);

}
