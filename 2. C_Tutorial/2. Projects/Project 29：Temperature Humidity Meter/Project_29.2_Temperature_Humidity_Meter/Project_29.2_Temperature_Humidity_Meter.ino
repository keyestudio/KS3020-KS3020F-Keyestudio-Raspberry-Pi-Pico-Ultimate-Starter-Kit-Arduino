//**********************************************************************
/*
 * Filename    : Temperature Humidity Meter
 * Description : LCD displays the value of temperature and humidity.
 * Auther      : http//www.keyestudio.com
*/
//Before using dht11, we need to include a header file. 
//Apply for a DHT object and define the pin controlling DHT as GPIO22.
#include <dht.h>
dht DHT;
#define DHT11_PIN 22
//the Library of LCD128_32 and lCD128 *32 pin
#include "lcd128_32_io.h"
lcd lcd(20, 21); //Create lCD128*32 pin，sda->20， scl->21

void setup(){
  lcd.Init(); //initialize
  lcd.Clear();  //clear
}
char string[10];

//lcd displays humidity and temperature values
void loop(){
  int chk = DHT.read11(DHT11_PIN);//Read11() is used to read DHT11 data and assign the return value to variable chk.
  lcd.Cursor(0,0); //Set display position
  lcd.Display("Temper:"); //Setting the display
  lcd.Cursor(0,8);
  lcd.DisplayNum(DHT.temperature);
  lcd.Cursor(0,11);
  lcd.Display("C");
  lcd.Cursor(2,0); 
  lcd.Display("humid:");
  lcd.Cursor(2,8);
  lcd.DisplayNum(DHT.humidity);
  lcd.Cursor(2,11);
  lcd.Display("%");
  delay(200);
}
//********************************************************************************
