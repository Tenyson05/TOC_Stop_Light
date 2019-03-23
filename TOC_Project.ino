//#include "Timer.h" 
//may have to change pin nums later
const int rpin = 3;
const int ampin = 4;
const int gpin = 5;
const int wButton = 10;
int button;

void setup() {
  // put your setup code here, to run once:
  pinMode(rpin, OUTPUT);
  pinMode(ampin, OUTPUT);
  pinMode(gpin, OUTPUT);   
  pinMode(wButton, INPUT); 
}

void loop() {
  button = digitalRead(wButton);
  green();
  greenLightButton();
  amber();
  delay(3000);
  red();
  delay(3000);  
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

void off() {
  digitalWrite(gpin, LOW);
  digitalWrite(ampin, LOW);
  digitalWrite(rpin, LOW);  
}

void greenLightButton() {
  for (int i = 1; i < 10; i++) {
    int buttonState = digitalRead(wButton);

    if(buttonState == LOW) {
      delay(1000);
    }
    else if(buttonState == HIGH) {
      delay(5000);
      return;
    }
  }
}
