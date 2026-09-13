int ldrPin = A0;
int ledPin = 9;
int ldrValue = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  ldrValue = analogRead(ldrPin);

  Serial.println(ldrValue);

  if (ldrValue < 500)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}