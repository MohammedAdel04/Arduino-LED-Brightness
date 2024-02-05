int amount =0;
const int led = 9;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{

  if(amount<255)
  {;
    amount =amount+5;
    analogWrite(led,amount);
    delay(50);
  }
  else if(amount>=255)
  {
    amount = 0;
    while(amount<255)
    {
    amount =amount+5;
    analogWrite(led,255-amount);
    delay(50);
    }
    amount =0;
  }
}