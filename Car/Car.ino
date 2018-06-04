int RB = 2;
int RF = 3;
int LB = 4;
int LF = 5;
int receiver = 26;
int IRGround = 22;
int IRLive = 24;

#include "IRremote.h"

IRrecv irrecv(receiver);
decode_results results;

void setup() {
  irrecv.enableIRIn();
  pinMode(RF, OUTPUT);
  pinMode(RB, OUTPUT);
  pinMode(LF, OUTPUT);
  pinMode(LB, OUTPUT);
  Serial.begin(9600);
  //Autonomous();
}

void loop() {
  if (irrecv.decode(&results))

  {
    Drivetrain(); 
    irrecv.resume();
  }
}
