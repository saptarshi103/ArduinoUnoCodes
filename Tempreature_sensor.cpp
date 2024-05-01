// C++ code
//
int sensorpin=A0;
void setup()
{
Serial.begin(9600);
}

void loop()
{
  float reading = analogRead(sensorpin);
  float temp=reading/1024;
  temp=temp*5.0;
  temp=temp-0.5;
  temp=temp*100;
  Serial.print(temp);
  Serial.println("degree cal");
}
