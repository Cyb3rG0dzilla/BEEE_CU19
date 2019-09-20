void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  digitalWrite(4,LOW);
  delay(500);
  digitalWrite(2, HIGH);
  digitalWrite(1,LOW);
  delay(500);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  delay(500);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(500);
}
