const int left_red_led = A0;
const int left_yellow_led = A1;
const int left_green_led = A2;

const int right_red_led = 13;
const int right_yellow_led = 12;
const int right_green_led = 11;
void setup() {
  pinMode(right_red_led,OUTPUT);
  pinMode(right_yellow_led,OUTPUT);
  pinMode(right_green_led,OUTPUT);

  digitalWrite(right_red_led,LOW);
  digitalWrite(right_yellow_led,LOW);
  digitalWrite(right_green_led,LOW);

  pinMode(left_red_led,OUTPUT);
  pinMode(left_yellow_led,OUTPUT);
  pinMode(left_green_led,OUTPUT);

  analogWrite(right_red_led,LOW);
  analogWrite(right_yellow_led,LOW);
  analogWrite(right_green_led,LOW);
  

}

void loop() {
  digitalWrite(right_red_led,HIGH);
  digitalWrite(right_yellow_led,LOW);
  digitalWrite(right_green_led,LOW);
  digitalWrite(left_red_led,LOW);
  digitalWrite(left_yellow_led,LOW);
  digitalWrite(left_green_led,HIGH);
  delay(1000);

  digitalWrite(right_red_led,LOW);
  digitalWrite(right_yellow_led,HIGH);
  digitalWrite(right_green_led,LOW);
  digitalWrite(left_red_led,LOW);
  digitalWrite(left_yellow_led,HIGH);
  digitalWrite(left_green_led,LOW);
  delay(1000);

  digitalWrite(right_red_led,LOW);
  digitalWrite(right_yellow_led,LOW);
  digitalWrite(right_green_led,HIGH);
  digitalWrite(left_red_led,HIGH);
  digitalWrite(left_yellow_led,LOW);
  digitalWrite(left_green_led,LOW);
  delay(1000);


  

}
