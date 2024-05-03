// C++ code
//
const int segA=2;
const int segB=3;
const int segC=4;
const int segD=5;
const int segE=6;
const int segF=7;
const int segG=8;
void displayDigits(int digit){
  const int digits[10][7]={
    {1,1,1,1,1,1,0},
    {0,1,1,0,0,0,0},
    {1,1,0,1,1,0,1},
    {1,1,1,1,0,0,1},
    {0,1,1,0,0,1,1},
    {1,0,1,1,0,1,1},
    {1,0,1,1,1,1,1},
    {1,1,1,0,0,0,0},
    {1,1,1,1,1,1,1},
    {1,1,1,1,0,1,1}
  };
  digitalWrite(segA,digits[digit][0]);
  digitalWrite(segB,digits[digit][1]);
  digitalWrite(segC,digits[digit][2]);
  digitalWrite(segD,digits[digit][3]);
  digitalWrite(segE,digits[digit][4]);
  digitalWrite(segF,digits[digit][5]);
  digitalWrite(segG,digits[digit][6]);
}
      
void setup()
{
  pinMode(segA,OUTPUT);
  pinMode(segB,OUTPUT);
  pinMode(segC,OUTPUT);
  pinMode(segD,OUTPUT);
  pinMode(segE,OUTPUT);
  pinMode(segF,OUTPUT);
  pinMode(segG,OUTPUT);

}

void loop()
{
  for(int i=0;i<=9;i++){
    displayDigits(i);
    delay(1000);
  }
}

