int inPin = 5;
int val = 0;

void setup() {
  pinMode(7, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  val = digitalRead(inPin);
  if (val == HIGH)
  {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
}
