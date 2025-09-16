void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
    // reply only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    char incomingByte = Serial.read();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte);
  }
}
