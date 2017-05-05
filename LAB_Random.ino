#define led_pin1 7
#define led_pin2 8
#define led_pin3 9
#define led_pin4 6
#define led_pin5 3
#define led_pin6 4
#define led_pin7 5

#define sw_1 2
int num;
void setup() {
  pinMode(led_pin1,OUTPUT);
  pinMode(led_pin2,OUTPUT);  
  pinMode(led_pin3,OUTPUT);
  pinMode(led_pin4,OUTPUT);
  pinMode(led_pin5,OUTPUT);
  pinMode(led_pin6,OUTPUT);  
  pinMode(led_pin7,OUTPUT);

  pinMode(sw_1,INPUT);
}

void loop() {
  int sw_status = digitalRead(sw_1);
  if(sw_status == LOW){
    num = random(1,7);
    switch(num){
   case 1 :
          digitalWrite(led_pin1,LOW);
          digitalWrite(led_pin2,LOW);
          digitalWrite(led_pin3,LOW);
          digitalWrite(led_pin4,HIGH);
          digitalWrite(led_pin5,LOW);
          digitalWrite(led_pin6,LOW);
          digitalWrite(led_pin7,LOW);
      break; 
   case 2  :
          digitalWrite(led_pin1,HIGH);
          digitalWrite(led_pin2,LOW);
          digitalWrite(led_pin3,LOW);
          digitalWrite(led_pin4,LOW);
          digitalWrite(led_pin5,LOW);
          digitalWrite(led_pin6,LOW);
          digitalWrite(led_pin7,HIGH);
      break; 
   case 3  :
          digitalWrite(led_pin1,HIGH);
          digitalWrite(led_pin2,LOW);
          digitalWrite(led_pin3,LOW);
          digitalWrite(led_pin4,HIGH);
          digitalWrite(led_pin5,LOW);
          digitalWrite(led_pin6,LOW);
          digitalWrite(led_pin7,HIGH);
      break; 
   case 4  :
          digitalWrite(led_pin1,HIGH);
          digitalWrite(led_pin2,LOW);
          digitalWrite(led_pin3,HIGH);
          digitalWrite(led_pin4,LOW);
          digitalWrite(led_pin5,HIGH);
          digitalWrite(led_pin6,LOW);
          digitalWrite(led_pin7,HIGH);
      break; 
   case 5  :
          digitalWrite(led_pin1,HIGH);
          digitalWrite(led_pin2,LOW);
          digitalWrite(led_pin3,HIGH);
          digitalWrite(led_pin4,HIGH);
          digitalWrite(led_pin5,HIGH);
          digitalWrite(led_pin6,LOW);
          digitalWrite(led_pin7,HIGH);
      break;    
   case 6  :
          digitalWrite(led_pin1,HIGH);
          digitalWrite(led_pin2,HIGH);
          digitalWrite(led_pin3,HIGH);
          digitalWrite(led_pin4,LOW);
          digitalWrite(led_pin5,HIGH);
          digitalWrite(led_pin6,HIGH);
          digitalWrite(led_pin7,HIGH);
      break; 
    }
        delay(200);
  }  
}
