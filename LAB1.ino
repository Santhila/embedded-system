#define led_pin 13
#define dot_delay 200
#define dash_delay 600
#define stop_time 1400
void dot();
void dash();
void setup() {
  pinMode(led_pin, OUTPUT);
}


void loop() {
   dot();     dot();    dot();
   dash();    dash();   dash();    
   dot();     dot();    dot();

   delay(stop_time);
}

void dot(){
  digitalWrite(led_pin, HIGH);   
  delay(dot_delay);                       
  digitalWrite(led_pin, LOW);    
  delay(dot_delay);     
}

void dash(){
  digitalWrite(led_pin, HIGH);   
  delay(dash_delay);                       
  digitalWrite(led_pin, LOW);    
  delay(dash_delay);    
}
