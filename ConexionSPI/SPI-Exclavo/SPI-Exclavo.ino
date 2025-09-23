//CODIGO PERIFERICO (slave)
#include <SPI.h>

void setup(){
  Serial.begin(9600);
  pinMode(MISO, OUTPUT);
  SPCR = (1<<SPE);

}

void loop(){
  if(SPSR & (1<<SPIF)) {
    byte Dato = SPDR;
    Serial.print("Dato Recibido: ");
    Serial.println(Dato);
  }

}