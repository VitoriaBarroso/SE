//Declaração das variáveis PontH:

int IN1 = 2; //Roda 1, DUAS DA ESQUERDA PARA FRENTE
int IN2 = 3; //Roda 2 DUAS DA ESQUERDA PARA TRÁS
int IN3 = 4; //Roda 3, DUAS DA DIREITA PARA TRÁS
int IN4 = 5; //Roda 4, DUAS DA DIREITA PARA FRENTE


//n1 e n4 roda para frente
//n3 n2 roda para trás
void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  //FAZER A RODA GIRAR OU DAR RÉ
  
  rodarFrente();
  delay(4000);
  re();
  delay(4000);
  virarDireita();
  delay(4000);
  virarEsquerda();
}


//fUNÇÃO

void rodarFrente(){
  digitalWrite(IN1, 1);
  digitalWrite(IN3, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN4, 1);
}

void re(){
   digitalWrite(IN1, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN4, LOW);
}

void para(){
  digitalWrite(IN1, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN4, 0);
}

void virarDireita(){
  digitalWrite(IN1, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN4, 1);
}

void virarEsquerda(){
  digitalWrite(IN1, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN2, 1);
  digitalWrite(IN4, 0);
}
