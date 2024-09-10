#include<Servo.h> // importar biblioteca servo
int pot = A1;

Servo motor1; //criando objeto
Servo motor;

void setup() {
  motor1.attach(2); // prendendo o motor na porta 2 
  motor1.write(0); // para motor começar 
  Serial.begin(9600); // Iniciando a com Serial
  
}

void loop() {
  pot = analogRead(A0); // escuttando porta analogica
  motor.write(pot); // definindo posição do motor
  Serial.println(pot); // imprimindo valores potenciometro
 
}
