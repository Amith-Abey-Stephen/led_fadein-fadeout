void setup() {
  for (int i=2;i<=7;i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop() {
  for (int i=2;i<=7;i++)
  {
    for (int j=0;j<= 250;j+=5)
    {
      analogWrite(i,j);
      analogWrite(i+3,j);
      delay(100);
    }
    for (int j=250;j>=0;j-=5)
    {
      analogWrite(i,j);
      analogWrite(i+3,j);
      delay(100);
    }
    
  }

}
