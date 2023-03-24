//Ikki chetdan markazga qarab yuruvchi
int t=500;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  

digitalWrite(2,1);
digitalWrite(10,1);
delay(t); 
digitalWrite(2,0);
digitalWrite(10,0);
digitalWrite(3,1);
digitalWrite(9,1);
delay(t);

digitalWrite(3,0);
digitalWrite(9,0);
digitalWrite(4,1);
digitalWrite(8,1);
delay(t); 
digitalWrite(4,0);
digitalWrite(8,0);
digitalWrite(5,1);
digitalWrite(7,1);
delay(t); 
digitalWrite(5,0);
digitalWrite(7,0);
digitalWrite(6,1);
delay(t); 
digitalWrite(6,0);
delay(t); 
}
