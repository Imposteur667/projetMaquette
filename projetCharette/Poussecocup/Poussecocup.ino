
#include <Thread.h>
#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;

int pinServL = 3;
int pinServR = 5;
int pinServC = 11;

int anglescan=10;
int a;
Servo servoLeft;
Servo servoRight;
Servo servoCapt;

void jeScan(){
    a=anglescan+1;
  }

void setup() {
  Serial.begin(9600);

  servoCapt.attach(pinServC);
  servoRight.attach(pinServR);
  servoLeft.attach(pinServL);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Thread ScanUltra = Thread();


  

}

void loop() {
 

}
