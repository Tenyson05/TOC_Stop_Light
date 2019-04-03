//#include "Timer.h" 
//may have to change pin nums later
const int rpin = 3;
const int ampin = 4;
const int gpin = 5;
const int wButton = 10;

int timer = 1000;
int button;

void setup() {
  // put your setup code here, to run once:
  pinMode(rpin, OUTPUT);
  pinMode(ampin, OUTPUT);
  pinMode(gpin, OUTPUT);   
  pinMode(wButton, INPUT_PULLUP); 
}

void loop() {
//  if(digitalRead(wButton) == HIGH){
//    timer = 30000;
//  }

  green();
  greenButton();
  amber();
  amberButton();
  red();
  redButton();  
}

void red() {
  digitalWrite(ampin, LOW);
  digitalWrite(rpin, HIGH);  
}

void green() {
  digitalWrite(rpin, LOW);
  digitalWrite(gpin, HIGH);   
}

void amber() {
  digitalWrite(gpin, LOW);
  digitalWrite(ampin, HIGH); 
}

//The amberButton and red button hanges the delay of the red lights if
//the buttoms are press if the button is not press the lights go through
//it's normal light cycle

int amberButton() {
  delay(1000);
  int buttonState = digitalRead(wButton);
  if(buttonState == HIGH) {
    timer = 10000;
    
  }
  else {
    delay(1000);
  }
}

void redButton() {
 int buttonState = digitalRead(wButton);
 delay(1000);
 if(buttonState == HIGH ){
  delay(timer);
 }else {
  delay(1000);
 }
  

    
}

void greenButton() {
  int buttonState = digitalRead(wButton);
  if(buttonState == HIGH) {
    timer = 10000;
    delay(1000);
  }
  else {
    delay(1000);
  }

  
}

//void off() {
//  digitalWrite(gpin, LOW);
//  digitalWrite(ampin, LOW);
//  digitalWrite(gpin, LOW);
//}
