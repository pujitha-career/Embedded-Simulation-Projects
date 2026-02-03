const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;
const int LED5 = 9;
const int LED6 = 8;
const int LED7 = 7;
const int LED8 = 6;
const int SWITCH1 = A0;
const int SWITCH2 = A1;
void setup() {
  pinMode(SWITCH1,INPUT);
  pinMode(SWITCH2,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
}

void loop() {
  if(digitalRead(SWITCH1)==HIGH)
  {
    switch_on_ase();
  }
  if(digitalRead(SWITCH1)==LOW)
  {
    switch_off();
  }
  if(digitalRead(SWITCH2)==HIGH)
  {
    switch_on_des();
  }
  if(digitalRead(SWITCH2)==LOW)
  {
    switch_off();
  }

}
void switch_on_ase()
{
  digitalWrite(LED1,HIGH);
  delay(500);
  digitalWrite(LED2,HIGH);
  delay(500);
  digitalWrite(LED3,HIGH);
  delay(500);
  digitalWrite(LED4,HIGH);
  delay(500);
  digitalWrite(LED5,HIGH);
  delay(500);
  digitalWrite(LED6,HIGH);
  delay(500);
  digitalWrite(LED7,HIGH);
  delay(500);
  digitalWrite(LED8,HIGH);
  delay(500);
  
}
void switch_off()
{
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
}
void switch_on_des()
{
  digitalWrite(LED8,HIGH);
  delay(500);
  digitalWrite(LED7,HIGH);
  delay(500);
  digitalWrite(LED6,HIGH);
  delay(500);
  digitalWrite(LED5,HIGH);
  delay(500);
  digitalWrite(LED4,HIGH);
  delay(500);
  digitalWrite(LED3,HIGH);
  delay(500);
  digitalWrite(LED2,HIGH);
  delay(500);
  digitalWrite(LED1,HIGH);
  delay(500);
}
