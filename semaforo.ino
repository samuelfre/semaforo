void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT); // LED verde pedestres
  pinMode(10, OUTPUT); // LED vermelho pedestres
  pinMode(11, OUTPUT); //LED verde
  pinMode(12, OUTPUT); //LED amarelo
  pinMode(13, OUTPUT); //LED vermelho
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Sinal aberto: apaga LED vermelho, acende LED verde
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  // Sinal fechado Pedestres: apaga LED verde, acende LED vermelho
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(3000);
  // Sinal fechado: apaga LED verde, acende LED amarelo
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  // Alerta pedestres
  for(int i = 0; i < 15; i++){
    digitalWrite(10, LOW);
    delay(150);
    digitalWrite(10, HIGH);
    delay(150);
    }
  delay(750);
  // Sinal fechado: apaga LED amarelo, acende LED vermelho
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
   // Sinal aberto Pedestres: apaga LED verde, acende LED vermelho
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(3000);
}
