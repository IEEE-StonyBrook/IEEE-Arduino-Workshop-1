/*
int ledPin = 13; // Onboard LED;

void setup(){ // Setup runs first, but once, then loop loops until operation ends.
  //initialize output pin
  pinMode(ledPin,OUTPUT); 
}

void loop(){
  digitalWrite(ledPin,HIGH); 
  delay(1000); 
  digitalWrite(ledPin,LOW);
  delay(1000); 
}
*/

int ledPin = 12;  // Discrete LED;
int switchPin = 8; // Switch connected to here and to gnd.
void setup(){
 pinMode (ledPin, OUTPUT); 
 pinMode (switchPin, INPUT);
}

void loop(){
  delay(10);
  digitalWrite(digitalRead(switchPin);
}







