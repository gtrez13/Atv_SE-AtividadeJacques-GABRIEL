// C++ code
//
	int botao = 4;
	int led = 2;
	int led2 = 3;
	int estadoBotao = 0;


void setup() {
  pinMode(2, OUTPUT); // LED vermelho

  pinMode(4, INPUT);// LED amarelo
}
 
void loop() {
	estadoBotao = digitalRead(botao);
  if (estadoBotao == HIGH) {
    digitalWrite(led, HIGH);
  } else {
  	digitalWrite(led, LOW);
  }
  if (estadoBotao == HIGH) {
    digitalWrite(led2, HIGH);
  } else {
  	digitalWrite(led2, LOW);
  }
}
