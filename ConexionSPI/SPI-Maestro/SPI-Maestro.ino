//CODIGO MAESTRO
#include <SPI.h>

const int ss = 10; //pin Exclavo

void setup() {

  pinMode(ss, OUTPUT);
  digitalWrite(ss, HIGH);
  SPI.begin();
  
}

void loop() {

  digitalWrite(ss, LOW);
  SPI.transfer(1);//Encender LED
  digitalWrite(ss, HIGH);
  delay(1000);

  digitalWrite(ss, LOW);
  SPI.transfer(0); //Apagar LED
  digitalWrite(ss, HIGH);
  delay(2000);

}
