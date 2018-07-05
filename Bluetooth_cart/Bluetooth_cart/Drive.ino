void forward_drive(){
  digitalWrite(2,1);
  digitalWrite(4,0);
  digitalWrite(6,1);
  digitalWrite(7,0);
}

void backward_drive(){
  digitalWrite(2,0);
  digitalWrite(4,1);
  digitalWrite(6,0);
  digitalWrite(7,1);
}

void leftward_drive(){
  digitalWrite(2,1);
  digitalWrite(4,0);
  digitalWrite(6,0);
  digitalWrite(7,1);
}

void rightward_drive(){
  digitalWrite(2,0);
  digitalWrite(4,1);
  digitalWrite(6,1);
  digitalWrite(7,0);
}

