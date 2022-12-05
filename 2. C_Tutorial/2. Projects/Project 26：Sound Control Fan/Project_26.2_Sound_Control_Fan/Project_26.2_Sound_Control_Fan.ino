//**********************************************************************************
/*  
 * Filename    : Sound Control Fan
 * Description : Controlling the fan by Sound sensor.
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ADC2   28  //the pin of the Sound sensor
#define PIN_Motorla    17  // the Motor_IN+ pin of the motor
#define PIN_Motorlb    16  // the Motor_IN- pin of the motor
#define PIN_LED    25  // // the pin of the built-in LED on the Pico board

void setup() {
  pinMode(PIN_LED, OUTPUT);//set PIN_LED to OUTPUT
  pinMode(PIN_Motorla, OUTPUT);//set Motorla to OUTPUT
  pinMode(PIN_Motorlb, OUTPUT);//set Motorlb to OUTPUT
  pinMode(PIN_ADC2, INPUT);//set PIN_ADC2 to INPUT
}

void loop() {
  int adcVal = analogRead(PIN_ADC2); //read the ADC value of Sound sensor
  if (adcVal > 600) {
    digitalWrite(PIN_LED,HIGH); //turn on the built-in LED on the Pico board
    digitalWrite(PIN_Motorla,HIGH); //rotate
    digitalWrite(PIN_Motorlb,LOW);
    delay(5000); //delay 5S
  }
  else
  {
    digitalWrite(PIN_LED,LOW); //turn off the built-in LED on the Pico board
    digitalWrite(PIN_Motorla,LOW); //stop rotating
    digitalWrite(PIN_Motorlb,LOW); 
  }
}
//**********************************************************************************
