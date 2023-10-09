# Project 06: RGB LED

**1. Introduction**

![](/media/94bdff69e438989d8e0934e57f2e5c00.png)

In this project, we will introduce the RGB LED and show you how to use the Plus control board to control the RGB LED. Even though RGB LED is very basic, it is also a great way to learn the fundamentals of electronics and coding.



**2. Components Required**

| ![image-20230423111712068](media/image-20230423111712068.png) | ![image-20230423111717373](media/image-20230423111717373.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423111728733](media/image-20230423111728733.png) | ![image-20230423111733326](media/image-20230423111733326.png) |
|                          RGB LED*1                           |                       220Ω Resistor*3                        |
| ![image-20230423111748382](media/image-20230423111748382.png) | ![image-20230423111751233](media/image-20230423111751233.png) |
|                         Breadboard*1                         |                         Jumper Wires                         |
| ![image-20230423111759903](media/image-20230423111759903.png) |                                                              |
|                         USB Cable*1                          |                                                              |



**3. Component Knowledge**

**RGB LED：**

![](/media/03a7f4cce9c57f7e38465eed7bb18688.jpeg)

The monitors mostly adopt the RGB color standard, and all the colors on the computer screen are composed of the three colors of red, green and blue mixed in different proportions.

![](/media/8bf1339719a922f2fbc1e01a4347b4ab.png)

This RGB LED has pin R, G and B and a common cathode. To change its brightness, we can use the PWM pins which can give different duty cycle signals to the RGB LED to produce different colors.



**4. Circuit Diagram and Wiring Diagram**

![](/media/f6950bc8498e6139cbb67db84cdd5a9a.png)

![](/media/fdab8c2fd2dfdd1670c09962e7b458ce.png)

**Note:**

RGB LED longest pin (common cathode) connected to GND.

![](/media/1584356c63bf99934ae0810ee02dced3.png)

How to identify the 220Ω 5-band resistor

![](/media/55c0199544e9819328f6d5778f10d7d0.png)

**5. Test Code：**

We need to create three PWM channels and use random duty cycles to light up the RGB LEDs randomly.

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 06：RGB LED\\Project\_06\_RGB\_LED.

```c
//**********************************************************************
/*
 * Filename    : RGB LED
 * Description : Use RGBLED to show random color.
 * Auther      : http//www.keyestudio.com
*/
int ledPins[] = {18, 17, 16};    //define red, green, blue led pins
int red, green, blue;
void setup() {
  for (int i = 0; i < 3; i++) {   //setup the pwm channels,1KHz,8bit
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  red = random(0, 255);
  green = random(0, 255);
  blue = random(0, 255);
  setColor(red, green, blue);
  delay(1000);
}

void setColor(byte r, byte g, byte b) {
  analogWrite(ledPins[0], 255-r); //Common cathode LED, high level to turn on the led.
  analogWrite(ledPins[1], 255-g);
  analogWrite(ledPins[2], 255-b);
}
//*****************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/b8e65116c90af0ec395a3139da218d03.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/684e56d3d0ce44b23b201d57e7083880.png)

![](/media/5a19f7d07f6093f14a1acfbc4e3604ef.png)

**6. Result**

Upload the project code, wire up, power up and wait a few seconds, the RGB will show random colors.
