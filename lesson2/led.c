void setup()
{
  for (int i=0;i<5;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for (int i=0;i<5;i++)
  {
    digitalWrite(i, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(i, LOW);
  	delay(500); // Wait for 1000 millisecond(s)
  }
}
