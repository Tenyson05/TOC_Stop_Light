#include "Timer.h" 

const int rpin = 3;
const int ampin = 4;
const int gpin = 5;
const int wbutton = 10;
//may have to change pin nums later
void setup() {
  // put your setup code here, to run once:
  pinMode(rpin, OUTPUT);
  pinMode(ampin, OUTPUT);
  pinMode(gpin, OUTPUT);    
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(gpin, HIGH);
  digitalWrite(ampin, LOW);
  digitalWrite(rpin, LOW);
  delay(30000);
  digitalWrite(gpin, LOW);
  digitalWrite(ampin, HIGH);
  digitalWrite(rpin, LOW);
  delay(5000);
  digitalWrite(gpin, LOW);
  digitalWrite(ampin, LOW);
  digitalWrite(rpin, HIGH);
  delay(20000); 

}
