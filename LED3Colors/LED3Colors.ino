//풀 다운 저항으로 LED 점등하기. 3색 LED와 스위치3개,10K저항 3개를 를 사용함
#define RED 11
#define GREEN 10
#define BLUE 9
#define RED_BUTTON 4
#define GREEN_BUTTON 3
#define BLUE_BUTTON 2

int r=0, g=0, b=0;

 void setup()
 { 
  pinMode(RED_BUTTON, INPUT);
  pinMode(GREEN_BUTTON, INPUT);
  pinMode(BLUE_BUTTON, INPUT);
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
 } 
 
 void loop()
 { 
  
  if(digitalRead(RED_BUTTON) == HIGH){
    digitalWrite(RED,HIGH);
  }
  else{
    digitalWrite(RED,LOW);
  }
  
  if(digitalRead(GREEN_BUTTON) == HIGH){
    digitalWrite(GREEN,HIGH);
  }
  else{
    digitalWrite(GREEN,LOW);
  }
  if(digitalRead(BLUE_BUTTON) == HIGH){
    digitalWrite(BLUE,HIGH);
  }
  else{
    digitalWrite(BLUE,LOW);
  }
 }
