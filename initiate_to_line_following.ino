void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  Serial.println(analogRead(A1));

if(analogRead(A0)<100){
  digitalWrite(2,HIGH);
  digitalWrite(10,1);
  digitalWrite(11,0);
  }
else{
  digitalWrite(2,LOW);
  digitalWrite(10,0);
  digitalWrite(11,1);
  }
  
  if(analogRead(A1)<100){
  digitalWrite(3,HIGH);
  }
else{
  digitalWrite(3,LOW);
  }
  }
