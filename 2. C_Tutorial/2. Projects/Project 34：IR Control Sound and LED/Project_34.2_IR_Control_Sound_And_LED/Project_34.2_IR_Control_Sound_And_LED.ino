//**********************************************************************************
/*  
 * Filename    : IR Control Sound And LED
 * Description : Remote control RGB and Passive buzzer with infrared remote control.
 * Auther      : http//www.keyestudio.com
*/
#include "IR.h"

#define irPin 16
#define R_Pin 19
#define G_Pin 18
#define B_Pin 17
#define buzzerPin 15

void setup() {
  Serial.begin(115200);
  IR_Init(irPin);
  pinMode(R_Pin, OUTPUT);
  pinMode(G_Pin, OUTPUT);
  pinMode(B_Pin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  if(flagCode){
    int irValue = IR_Decode(flagCode);
    Serial.println(irValue, HEX);
    handleControl(irValue);
    IR_Release();
  }
}

void handleControl(unsigned long value) {

  // Handle the commands
  if (value == 0xFF6897) // Receive the number '1'
  { 
      analogWrite(R_Pin, 255); //Common cathode LED, high level to turn on the led.
      analogWrite(G_Pin, 0);
      analogWrite(B_Pin, 0);
      tone(buzzerPin, 262);//DO play 1000ms
      delay(1000);
  }
   else if (value == 0xFF9867) // Receive the number '2'
   { 
      analogWrite(R_Pin, 0); 
      analogWrite(G_Pin, 255); //Common cathode LED, high level to turn on the led.
      analogWrite(B_Pin, 0);
      tone(buzzerPin, 294);//Re play 750ms
      delay(750);
   }
    else if (value == 0xFFB04F) // Receive the number '3'
   { 
      analogWrite(R_Pin, 0); 
      analogWrite(G_Pin, 0);
      analogWrite(B_Pin, 255); //Common cathode LED, high level to turn on the led.
      tone(buzzerPin, 330);//Mi play 625ms
      delay(625);
    }
    else if (value == 0xFF30CF) // Receive the number '4'
   {  
      analogWrite(R_Pin, 255); 
      analogWrite(G_Pin, 255);
      analogWrite(B_Pin, 0);
      tone(buzzerPin, 349);//Fa play 500ms
      delay(500);
    }
    else if (value == 0xFF18E7) // Receive the number '5'
   {  
      analogWrite(R_Pin, 255); 
      analogWrite(G_Pin, 0);
      analogWrite(B_Pin, 255);
      tone(buzzerPin, 392);//So play 375ms
      delay(375);
    }
    else if (value == 0xFF7A85)  // Receive the number '6'
   {  
      analogWrite(R_Pin, 0); 
      analogWrite(G_Pin, 255);
      analogWrite(B_Pin, 255);
      tone(buzzerPin, 440);//La play 250ms
      delay(250);
    }
    else if (value == 0xFF10EF)  // Receive the number '7'
   {   
      analogWrite(R_Pin, 255); 
      analogWrite(G_Pin, 255);
      analogWrite(B_Pin, 255);
      tone(buzzerPin, 494);//Si play 125ms
      delay(125);
    }
    else{
      analogWrite(R_Pin, 0); 
      analogWrite(G_Pin, 0);
      analogWrite(B_Pin, 0);
      noTone(buzzerPin);//Si play 125ms
      delay(1000);
      }
  }
//**********************************************************************************
