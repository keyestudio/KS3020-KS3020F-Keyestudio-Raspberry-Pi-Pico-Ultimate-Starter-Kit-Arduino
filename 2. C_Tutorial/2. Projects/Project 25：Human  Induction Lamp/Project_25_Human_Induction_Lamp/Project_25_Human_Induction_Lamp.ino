//**********************************************************************************
/*  
 * Filename    : Human Induction Lamp
 * Description : Controlling the LED by photosensitive sensor and PIR motion sensor.
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ADC0  26   //the pin of the photosensitive sensor
#define PIN_LED1   16  // the pin of the External LED
#define PIN_LED2   25  // the pin of the built-in LED on the Pico board
#define pirPin   2     // the pin of the PIR motion sensor
byte pirStat = 0;   // the state of the PIR motion sensor
void setup() {
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_ADC0, INPUT);
  pinMode(pirPin, INPUT);
}

void loop() {
  int adcVal = analogRead(PIN_ADC0); //read the ADC value of photosensitive sensor
  pirStat = digitalRead(pirPin); //read the value of PIR motion sensor
  if (adcVal >= 500) {
      digitalWrite(PIN_LED2, HIGH); //turn on the built-in LED on the Pico board 
      if (pirStat == HIGH){
         digitalWrite(PIN_LED1, HIGH);//turn on the External LED
         } 
      else{
         digitalWrite(PIN_LED1, LOW);//turn off the External LED   
        }
  }
   else{
      digitalWrite(PIN_LED1, LOW);//turn off the External LED
      digitalWrite(PIN_LED2, LOW);//turn off the built-in LED on the Pico board
      }
}
//**********************************************************************************
