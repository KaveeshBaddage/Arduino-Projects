#include <Wire.h>

int LED=13;
int x=0;

void setup(){
  pinMode(LED,OUTPUT);
  Wire.begin(9);
  Wire.onReceive(receiveEvent);
}

void receiveEvent(int bytes){
  x=Wire.read();
}

void loop(){
  if(x==0){
    digitalWrite(LED,HIGH);
    delay(200);
    digitalWrite(LED,LOW);
    delay(200);
  }
  if(x==3){
    digitalWrite(LED,HIGH);
    delay(400);
    digitalWrite(LED,LOW);
    delay(400);
  }
  
}
