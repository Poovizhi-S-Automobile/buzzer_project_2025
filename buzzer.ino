  const int buzzerPin=8;
  const int switchPin=2;
  void setup()
  {
    pinMode(switchPin,INPUT_PULLUP);
    pinMode(buzzerPin,OUTPUT);
  }
  void loop()
  {
    if(switchState==LOW){
      tone(buzzerPin,1500);
    }
    else
    {
      noTone(buzzerPin);
    }
    delay(50);

  }
 


