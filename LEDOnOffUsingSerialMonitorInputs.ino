void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  digitalWrite(3,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char letter = Serial.read();//get inputs from serial monitor
      if(letter == '1'){
          digitalWrite(3,HIGH); //LED will be on when enter 1
          Serial.println("THe LED is On");
      } else if (letter == '0'){
          digitalWrite(3,LOW); //LED will be off when enter 0
           Serial.println("THe LED is Off");
      }
    }

}

//Open Serial monitor and then enter 1 or 0 
// LED's negative poll is connected to the ground pin of Arduino board
// LED's positive poll is connected to the 3rd digital pin in Arduino board
