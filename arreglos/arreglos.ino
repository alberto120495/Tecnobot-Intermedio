//Declarar arreglo
int leds[3] = {4,5,6};
              
void setup() {
  Serial.begin(9600);
}

void loop() {
 
  for( int index = 0; index < 3; index++){
    Serial.println(leds[index]);
    delay(1000);
  }
  

}
