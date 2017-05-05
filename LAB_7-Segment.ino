#define A 12
#define B 11
#define C 10
#define D  9
#define E  8
#define F  7
#define G  6
#define dot 13

#define DIGI1 2
#define DIGI2 3
#define DIGI3 4
#define DIGI4 5

int num[] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };
void display_(int number,int digi);
void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(dot,OUTPUT);
  pinMode(DIGI1,OUTPUT);
  pinMode(DIGI2,OUTPUT);
  pinMode(DIGI3,OUTPUT);
  pinMode(DIGI4,OUTPUT);
}

void loop() {

  display_(4,1);
}

void display_(int number,int digi){
  int status_A = num[number] & 0B00000001;
  int status_B = num[number] & 0B00000010;
  int status_C = num[number] & 0B00000100;
  int status_D = num[number] & 0B00001000;
  int status_E = num[number] & 0B00010000;
  int status_F = num[number] & 0B00100000;
  int status_G = num[number] & 0B01000000;
  int status_dot = num[number] & 0B10000000;
  
  digitalWrite(DIGI1,LOW);digitalWrite(DIGI2,LOW);digitalWrite(DIGI3,LOW);digitalWrite(DIGI4,LOW); //clear digi
  
  if(status_A > 0 )digitalWrite(A,HIGH);
  else digitalWrite(A,LOW);
  if(status_B > 0 )digitalWrite(B,HIGH);
  else digitalWrite(B,LOW);
  if(status_C > 0 )digitalWrite(C,HIGH);
  else digitalWrite(C,LOW);
  if(status_D > 0 )digitalWrite(D,HIGH);
  else digitalWrite(D,LOW);
  if(status_E > 0 )digitalWrite(E,HIGH);
  else digitalWrite(E,LOW);
  if(status_F > 0 )digitalWrite(F,HIGH);
  else digitalWrite(F,LOW);
  if(status_G > 0 )digitalWrite(G,HIGH);
  else digitalWrite(G,LOW);
  if(status_dot > 0 )digitalWrite(dot,HIGH);
  else digitalWrite(dot,LOW);

  switch(digi){
   case 1 :
          digitalWrite(DIGI1,HIGH);digitalWrite(DIGI2,LOW);digitalWrite(DIGI3,LOW);digitalWrite(DIGI4,LOW);
    break;
   case 2 :
          digitalWrite(DIGI1,LOW);digitalWrite(DIGI2,HIGH);digitalWrite(DIGI3,LOW);digitalWrite(DIGI4,LOW);
    break;
   case 3 :
          digitalWrite(DIGI1,LOW);digitalWrite(DIGI2,LOW);digitalWrite(DIGI3,HIGH);digitalWrite(DIGI4,LOW);
    break;
   case 4 :
          digitalWrite(DIGI1,LOW);digitalWrite(DIGI2,LOW);digitalWrite(DIGI3,LOW);digitalWrite(DIGI4,HIGH);
   break;    
  }
}
