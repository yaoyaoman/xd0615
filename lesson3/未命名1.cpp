char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}
  void loop()
{
    if (Serial.available()>0)
    {
      ch=Serial.read();
      Serial.println("GET!");
      if(ch=='o')
      {
        digitalWrite(13, HIGH);
        digitalWrite(11, HIGH);
      }
        if(ch=='i')
      {
        digitalWrite(13, HIGH);
        digitalWrite(11, LOW);
      }
       if(ch=='s')
      {
        digitalWrite(13, LOW);
        digitalWrite(11, LOW);
      }
    }
}
