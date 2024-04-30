#include <Wire.h>
#include <Keypad.h>
#include <LiquidCrystal_I2C.h>

const byte rows = 4;
const byte cols = 4;
char hex[rows][cols] =
{
  {'1','2','3','A'},
  {'4', '5', '6', 'B'},
  {'7','8','9', 'C'},
  {'*','0','#','D'}
};
byte rowpins[rows] = {2,3,4,5};
byte colpins[cols] = {6,7,8,9};
Keypad kpd = Keypad(makeKeymap(hex), rowpins, colpins, rows, cols);

LiquidCrystal_I2C lcd(0x27, 16, 2); 


void setup() {
  Serial.begin(9600);
  lcd.init(); 
  lcd.backlight(); 
}

void loop() {
  char keypressed = kpd.getKey();
  if (keypressed) {
    lcd.clear(); 
    lcd.setCursor(0, 0); 
    lcd.print("Key pressed: "); 
    lcd.setCursor(0, 1); 
    lcd.print(keypressed); 
    Serial.print("Key pressed: ");
    Serial.println(keypressed);
    delay(300);
  }
}

