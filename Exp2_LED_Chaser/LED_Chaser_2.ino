int i;
void setup()
{
  for(i=1;i<=4;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  for (i=1;i<4;i++)
  {
  digitalWrite(i, HIGH);
  delay(500);
  digitalWrite(i,LOW);
  }
  for (i=4;i>1;i--)
  {
  digitalWrite(i, HIGH);
  delay(500);
  digitalWrite(i,LOW);
  }
}
