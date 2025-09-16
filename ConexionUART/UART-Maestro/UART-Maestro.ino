void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.write('A'); //caracter A enviado;
  delay(2000); // esperamos 2 segundos
}
