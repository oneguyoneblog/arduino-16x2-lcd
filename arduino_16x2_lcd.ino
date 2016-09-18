/*
      Hello World! voor 16x2 LCD display op Geekcreit Uno
 */
 
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR    0x3F // Het adres van het display
#define BACKLIGHT_PIN     3

#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7

LiquidCrystal_I2C	lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

void setup()
{
  lcd.begin (16,2); // 16x2 display
  
  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE); // Backlight aan
  lcd.setBacklight(HIGH);
}

void loop()
{
  lcd.clear ();
  lcd.print("Hello World!");  
  delay(3000);
  
  lcd.clear ();
  lcd.print("1234567890ABCDEF");
  lcd.setCursor (0,1);
  lcd.print("GHIJKLMNOPQRSTUV"); 
  delay(3000);
}
