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
  
  
  //so as things are nnow the green light shall turn on for 30 seconds then move on to amber for 5 seconds then red light for 20 seconds, I would like to adjust it
//  so that when the light is on green and the walk button is press the green light is shorten by 5 seconds if the current time of the green light is less than 20 seconds
//if the walk button is press while the light is on amber or red the time of the red light shall be extended by 5 second, if it is not press nothing shall happen
// 

}
