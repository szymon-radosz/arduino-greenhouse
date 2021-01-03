/*
  TODO:
    1. get current temperature and humidity
    2. Install wifi shield and POST info to greenhouse API(create external API)
    3. Install water level detection in water tank - if low water level is detected then send info to API
    4. Invent greenhouse window opener and open windows when humidity is too high
    5. Replace daily water pump switch with arduino 
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void initLCD()
{
  //Init with pin default ARDUINO
  lcd.begin(); 

  // Turn on the blacklight and print a message.
  lcd.backlight();
}

void printWelcomeMessage() 
{
  //arduino screen - matrix 16x2
  lcd.setCursor(0, 0);
  lcd.print("Welcom1 in Simon"); 
  lcd.setCursor(0,1);
  lcd.print("Greenhouse"); 
}

//run once on init
void setup()
{
  initLCD();
  
  printWelcomeMessage();
}

//run repeatly
void loop()
{

}
