# Project 15：Tilt And LED

### **1.Introduction**

In this lesson, we will use a PLUS mainboard , a tilt switch and 4 LEDs to make an electronic hourglass.

### **2.Components Required**

| ![image-20230423132900038](media/image-20230423132900038.png) | ![image-20230423132909731](media/image-20230423132909731.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423132919859](media/image-20230423132919859.png) | ![image-20230423132926227](media/image-20230423132926227.png) |
|                        Tilt Switch*1                         |                          Red LED*4                           |
| ![image-20230423132934099](media/image-20230423132934099.png) | ![image-20230423132939219](media/image-20230423132939219.png) |
|                       10KΩ Resistor*1                        |                       220Ω Resistor*4                        |
| ![image-20230423132955027](media/image-20230423132955027.png) | ![image-20230423133002196](media/image-20230423133002196.png) |
|                         Breadboard*1                         |                         USB Cable*1                          |
| ![image-20230423133006195](media/image-20230423133006195.png) |                                                              |
|                         Jumper Wires                         |                                                              |



### 3.**Component Knowledge**

![](/media/8c40739f8e05f753f145420b421a0f47.png)

Tilt switch is also called digital switch. Inside is a metal ball that can roll. The principle of rolling the metal ball to contact with the conductive plate at the bottom, which is used to control the on and off of the circuit. 

When it is a rolling ball tilt sensing switch with single directional trigger, the tilt sensor is tilted toward the trigger end (two gold-plated pin ends), the tilt switch is in a closed circuit and the voltage at the analog port is about 5V (binary number is 1023).

In this way, the LED will light up. When the tilt switch is in a horizontal position or tilted to the other end, it is open and the voltage of the analog port is about 0V (binary number is 0), the LED will turn off. 

In the program, we judge the state of the switch based on whether the voltage value of the analog port is greater than 2.5V (binary number is 512).

As shown in the figure, use the internal structure of the tilt switch to illustrate how it works.

![](/media/bf8b10ad248ac939ac4ef96d02ed87c7.png)

### 4.**Circuit Diagram and Wiring Diagram**

![](/media/8735f9531646b77c35932404a681b76d.png)

![](/media/9127e65ff0d7b3d5e579263fd06ec674.png)

Note:

How to connect the LED

![](/media/f70404aa49540fd7aecae944c7c01f83.jpeg)

How to identify the 220Ω 5-band resistor and 10KΩ 5-band resistor

<img src="/media/55c0199544e9819328f6d5778f10d7d0.png" style="zoom:50%;" />

<img src="/media/246cf3885dc837c458a28123885c9f7b.png" style="zoom:50%;" />

### 5.**Test Code**

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 15：Tilt And LED\\Project\_15\_Tilt\_And\_LED

```c
//**********************************************************************
/* 
 * Filename    : Tilt And LED
 * Description : Tilt switches and four leds to simulate an hourglass.
 * Auther      : http//www.keyestudio.com
*/
#define SWITCH_PIN  22  // the tilt switch is connected to Pin22
byte switch_state = 0;
void setup()
{
     for(int i=16;i<20;i++)
  {
        pinMode(i, OUTPUT);
  } 
    pinMode(SWITCH_PIN, INPUT);
 for(int i=16;i<20;i++)
  {
    digitalWrite(i,0);
  } 
  Serial.begin(9600);
}
void loop()
{
switch_state = digitalRead(SWITCH_PIN); 
Serial.println(switch_state);
 if (switch_state == 0) 
 {
 for(int i=16;i<20;i++)
  {
    digitalWrite(i,1);
    delay(500);
  } 
  }
   if (switch_state == 1) 
 {
   for(int i=19;i>15;i--)
   {
    digitalWrite(i,0);
    delay(500);
   }
  }
}
//**********************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/112591b3a177555f6c383122451e3c8b.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/6ed841aceade0d23e2d7356be9e36f2f.png)

![](/media/f8c6f1cf9c06c1b819803356ed8ae417.png)

### 6.**Result**

Upload project code, wire up and power up, hold the breadboard. 

When you tilt the breadboard to any angle, the LEDs will light up one by one. 

When you turn the breadboard to the original angle, the LEDs will turn off one by one.
