#include <AFMotor.h>

//seleciona o motor
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

void setup() {
  // put your setup code here, to run once:
  
 //define a velocidade maxima
 motor1.setSpeed(255);
 motor2.setSpeed(255);
}

void loop() {
 //gira o motor no sentido horario
 //motor1.run(FORWARD);
//gira o motor no sentido anti-horario
 //motor2.run(BACKWARD);

motor1.run(FORWARD);
motor2.run(FORWARD);
 
uint8_t i;
for (i=0; i<255; i++)   {     // Acelera de 0 até a velocidade máxima
motor1.setSpeed(i);
motor2.setSpeed(i);
delay(10);
}

//diminui a velocidade maxima ate 0
for(i=255; i!=0; i--){
  motor1.setSpeed(i);
  motor2.setSpeed(i);
  delay(10);
}
 


 
 

}
