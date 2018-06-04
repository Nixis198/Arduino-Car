void EDA(int dir, long time1){
  if (dir == 1){
    digitalWrite(RF, HIGH);
    digitalWrite(RB, LOW);
    digitalWrite(LF, HIGH);
    digitalWrite(LB, LOW);
    delay(time1);
    digitalWrite(RF, LOW);
    digitalWrite(RB, LOW);
    digitalWrite(LF, LOW);
    digitalWrite(LB, LOW);
  }
  if (dir == 2){
    digitalWrite(RF, HIGH);
    digitalWrite(RB, LOW);
    digitalWrite(LF, LOW);
    digitalWrite(LB, HIGH);
    delay(time1);
    digitalWrite(RF, LOW);
    digitalWrite(RB, LOW);
    digitalWrite(LF, LOW);
    digitalWrite(LB, LOW);
  }
  if (dir == 3){
    digitalWrite(RF, LOW);
    digitalWrite(RB, HIGH);
    digitalWrite(LF, HIGH);
    digitalWrite(LB, LOW);
    delay(time1);
    digitalWrite(RF, LOW);
    digitalWrite(RB, LOW);
    digitalWrite(LF, LOW);
    digitalWrite(LB, LOW);
  }
  if (dir == 4){
    digitalWrite(RF, LOW);
    digitalWrite(RB, HIGH);
    digitalWrite(LF, LOW);
    digitalWrite(LB, HIGH);
    delay(time1);
    digitalWrite(RF, LOW);
    digitalWrite(RB, LOW);
    digitalWrite(LF, LOW);
    digitalWrite(LB, LOW);
  }
}

