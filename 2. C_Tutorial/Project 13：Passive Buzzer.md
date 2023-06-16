# Project 13：Passive Buzzer

### **1. Introduction**

In this project, we will learn the passive buzzer and use the Plus control board to control the passive buzzer to play a song. Unlike an active buzzer, a passive buzzer can emit sounds of different frequencies. 



### **2. Components Required**

| ![image-20230423131440081](media/image-20230423131440081.png) | ![image-20230423131445482](media/image-20230423131445482.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423131533707](media/image-20230423131533707.png) | ![image-20230423131538219](media/image-20230423131538219.png) |
|                       Passive Buzzer*1                       |                         Breadboard*1                         |
| ![image-20230423131546922](media/image-20230423131546922.png) | ![image-20230423131550716](media/image-20230423131550716.png) |
|                         Jumper Wires                         |                         USB Cable*1                          |



### **3. Component Knowledge**

![](/media/8d0020e53824072cbe9d4f7d2f8acb4f.png)

A passive buzzer is an integrated electronic buzzer with no internal vibration source. It must be driven by 2K to 5K square wave, not a DC signal. 

The two buzzers are very similar in appearance, but one buzzer with a green circuit board is a passive buzzer, while the other with black tape is an active buzzer. 

Passive buzzers cannot distinguish between positive polarity while active buzzers can.

![image-20230423131752637](media/image-20230423131752637.png)

### **4. Circuit Diagram and Wiring Diagram**

 ![image-20230423131810733](media/image-20230423131810733.png)

![](/media/e601e48f8deddb3e9e7734d0022106b3.png)

### **5. Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 13：Passive Buzzer\Project_13_Passive_Buzzer.

```c
//**********************************************************************
/*
 * Filename    : Passive Buzzer
 * Description : Passive Buzzer sounds the alarm.
 * Auther      : http//www.keyestudio.com
*/
#define PIN_BUZZER 16   //define buzzer pins

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop() {
    alert();
}

void alert() {
  float sinVal;         // Define a variable to save sine value
  int toneVal;          // Define a variable to save sound frequency
  for (int x = 0; x < 360; x += 10) {     // X from 0 degree->360 degree
    sinVal = sin(x * (PI / 180));       // Calculate the sine of x
    toneVal = 2000 + sinVal * 500;      // Calculate sound frequency according to the sine of x
    freq(PIN_BUZZER, toneVal, 10);
  }
}

void freq(int PIN, int freqs, int times) {
  if (freqs == 0) {
    digitalWrite(PIN, LOW);
  }
  else {
    for (int i = 0; i < times * freqs / 1000; i ++) {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(1000000 / freqs / 2);
      digitalWrite(PIN, LOW);
      delayMicroseconds(1000000 / freqs / 2);
    }
  }
}
//********************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/5bcaec752cf360d1258a04ebf04171d7.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/d75f2d7c73ed2b31b33c81d1634149f6.png)

![](/media/ddfea52b611785f1ed44767d6b36419a.png)

### **6. Result**

Upload the project code, wire up and power on, then the passive buzzer will alarm.
