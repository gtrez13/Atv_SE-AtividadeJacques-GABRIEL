// C++ code
//
void setup() {
  pinMode(2, OUTPUT); // LED VERMELHO
  pinMode(3, OUTPUT); // LED AMARELO
  pinMode(4, OUTPUT); // LED AZUL
}

void loop() {
  digitalWrite(2, HIGH);
  delay(400);
  digitalWrite(2, LOW);


  digitalWrite(3, HIGH);
  delay(400);
  digitalWrite(3, LOW);


  digitalWrite(4, HIGH);
  delay(400);
  digitalWrite(4, LOW);
}
