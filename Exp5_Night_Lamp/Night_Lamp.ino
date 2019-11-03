void setup() {

  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  // put your main code here, to run repeatedly:
  int d = analogRead(A0);
  Serial.println(d);
  delay(200);
  if (d > 600)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
}
