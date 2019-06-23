const int rpin = 3;
const int ampin = 4;
const int gpin = 5;
const int wButton = 10;

int timer = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(rpin, OUTPUT);
  pinMode(ampin, OUTPUT);
  pinMode(gpin, OUTPUT);   
  pinMode(wButton, INPUT_PULLUP); 
}

void loop() {
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
int amberButton() {
 // delay(5000);
  int buttonState = digitalRead(wButton);
  if(buttonState == HIGH) {
    timer = 10000;
    
  }
  else {
    delay(5000);
  }
}

void redButton() {
 int buttonState = digitalRead(wButton);
 //delay(10000);
 if(buttonState == HIGH ){
  delay(timer);
 }else {
  delay(10000);
 }
      
}

void greenButton() {
 // delay(10000);
  int buttonState = digitalRead(wButton);
  if(buttonState == HIGH) {
    timer = 10000;
  }
  else {
    delay(15000);
  }  
}
