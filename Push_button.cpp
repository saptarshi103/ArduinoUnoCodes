#define LED 10 
#define btn 2  
int btn_state = 0;  

void setup()
{
   pinMode(LED, OUTPUT);  
   pinMode(btn, INPUT);  
 }

 void loop()
 {
    btn_state = digitalRead(btn); 
    if(btn_state == HIGH)  
    {
        digitalWrite(LED, HIGH); 
    }
     else
    {
        digitalWrite(LED, LOW); 
    }
 }
