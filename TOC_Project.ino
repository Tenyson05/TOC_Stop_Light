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
  delay(6000);
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

void amberButton() {
  for(int i = 1; i <10; i++) {
    int buttonState = digitalRead(wButton);

    if(buttonState == LOW) {
      delay(5000);
    }

    else if (buttonState == HIGH) {
      delay(2000);
    }
  }
}

void redButton() {
  for(int i=1; i < 10; i++){
    int buttonState = digitalRead(wButton);
    
    if(buttonState == LOW) {
      delay(5000);
    }
    else if(buttonState == HIGH) {
      delay(3000);
  }
 }
    
}
