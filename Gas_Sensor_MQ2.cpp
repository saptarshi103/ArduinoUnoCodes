#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define GAS_SENSOR_PIN A3
#define RED_LED_PIN 1
#define GREEN_LED_PIN 4
#define BUZZER_PIN 12

#define I2C_ADDRESS 0x27

LiquidCrystal_I2C lcd(I2C_ADDRESS, 16, 2); 

void setup() {
  Serial.begin(9600);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  lcd.init();
  lcd.backlight();
}

void loop() {
  int gasLevel = analogRead(GAS_SENSOR_PIN);
  Serial.print("Gas Level: ");
  Serial.println(gasLevel);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Gas Level:");
  lcd.setCursor(0, 1);
  lcd.print(gasLevel);

  if (gasLevel > 500) { 
    digitalWrite(RED_LED_PIN, HIGH); 
    digitalWrite(GREEN_LED_PIN, LOW); 
    tone(BUZZER_PIN, 1000); 
  } else {
    digitalWrite(RED_LED_PIN, LOW); 
    digitalWrite(GREEN_LED_PIN, HIGH); 
    noTone(BUZZER_PIN); 
  }

  delay(1000); 
}

