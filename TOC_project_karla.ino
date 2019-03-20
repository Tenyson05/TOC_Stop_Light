//#include "Timer.h" 

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
setPin(HIGH);
setPin(LOW);
}

void setPin(int state){
  if(state == HIGH){
    digitalWrite(gpin, state);
    digitalWrite(ampin, LOW);
    digitalWrite(rpin, LOW);
    delay(30000);
    digitalWrite(gpin, LOW);
    digitalWrite(ampin, state);
    digitalWrite(rpin, LOW);
    delay(5000);
  }else{
  digitalWrite(gpin, state);
  digitalWrite(ampin, state);
  digitalWrite(rpin, HIGH);
  delay(20000); 
  }
}
