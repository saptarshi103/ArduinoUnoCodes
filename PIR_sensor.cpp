// C++ code
//
const int sigpin=2;
const int led=3;
void setup()
{
  pinMode(sigpin, INPUT);
  pinMode(led, OUTPUT);

  
}

void loop()
{
 int val=digitalRead(sigpin);
  if(val==HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  delay(10);
}
