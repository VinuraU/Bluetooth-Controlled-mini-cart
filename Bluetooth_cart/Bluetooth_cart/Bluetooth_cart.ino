void setup() {
pinMode( 2,OUTPUT);    // High right forward
pinMode( 4,OUTPUT);
pinMode( 3,OUTPUT);   //PWM pin for right

pinMode( 6,OUTPUT);    // High left forward
pinMode( 7,OUTPUT);
pinMode( 5,OUTPUT);   //PWM pin for left

Serial.begin(38400);

}

void loop() {
  if (Serial.available()){
    char txt = Serial.read();
    if(txt=='u'){        //Read commands from Serial input
      Serial.println("Forward");
      forward_drive();
    }
    if(txt=='d'){
      Serial.println("Backward");
      backward_drive();
    }
    if(txt=='l'){
      Serial.println("Turn Left");
      leftward_drive();
    }
    if(txt=='r'){
      Serial.println("Turn Right");
      rightward_drive();
    }


    if(txt=='t'){
      int spd=Serial.parseInt();
      Serial.println("Speed changed");
      analogWrite(3,spd);
      analogWrite(5,spd);
    }

    if(txt=='s'){
      Serial.println("Stop");
      analogWrite(3,0);
      analogWrite(5,0);
    }
      
    
    
  }
  
}
//Created by Vinura Udaraka
