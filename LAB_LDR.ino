const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
int   sensorValue=0;
float volt = 0;
int LED_pin = 2;
void setup() {
  Serial.begin(9600);
  pinMode(LED_pin,OUTPUT);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  volt = 0.0048828125 * sensorValue;
  if(volt>= 1.00) digitalWrite(LED_pin,HIGH);
  else digitalWrite(LED_pin,LOW);
  delay(2);
}
