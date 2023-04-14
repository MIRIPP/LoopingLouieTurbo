//Motor 1
const int motorPin1 = 6;

int speed_1 = 130;
int speed_2 = 150;
int speed_3 = 160;
int speed_4 = 180;
int speed_5 = 200;

int speed = 180;

int rando = 0;

void setup(){
    //Set pins as outputs
    pinMode(motorPin1, OUTPUT);
    Serial.begin(9600);

}

void loop() {

  rando = random(1,11);

  //Serial.println(rando);
  if ( (1 == rando) || (2 == rando)){
    analogWrite(motorPin1, speed_1);
    Serial.println("0");
  }
  else if ( (3 == rando) || (4 == rando)){
    analogWrite(motorPin1, speed_2);
    Serial.println("1");
  }
  else if ( (5 == rando) || (6 == rando)){
    analogWrite(motorPin1, speed_3);
    Serial.println("2");
  }
  else if ( (7 == rando) || (8 == rando)){
    analogWrite(motorPin1, speed_4);
    Serial.println("3");
  }
  else if ( (9 == rando) || (10 == rando)){
    analogWrite(motorPin1, speed_5);
    Serial.println("4");
  }
  else{
    analogWrite(motorPin1, 0);
    analogWrite(motorPin2, speed_3);
  }
  delay(5000);

}
