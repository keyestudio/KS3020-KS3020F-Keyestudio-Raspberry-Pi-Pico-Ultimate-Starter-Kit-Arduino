# Project 07: Flowing Light

**1. Introduction**

In our daily life, we can see many billboards made up of different colors of LED. They constantly change the light to attract the attention of customers. In this project, we will use Plus control board with 5 LEDs to achieve the effect of flowing water.



**2. Components**

| ![image-20230423112608666](media/image-20230423112608666.png) | ![image-20230423112613315](media/image-20230423112613315.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423112633667](media/image-20230423112633667.png) | ![image-20230423112636755](media/image-20230423112636755.png) |
|                          Red LED*10                          |                       220Ω Resistor*10                       |
| ![image-20230423112640436](media/image-20230423112640436.png) | ![image-20230423112643379](media/image-20230423112643379.png) |
|                         Breadboard*1                         |                         JumperWires                          |
| ![image-20230423112648675](media/image-20230423112648675.png) |                                                              |
|                         USB Cable*1                          |                                                              |



**3. Circuit Diagram and Wiring Diagram**

![](/media/e6f92039d131685369db2d1ac2c30267.png)

![](/media/fc6e73a6664012c9a33262b50d6e256f.png)

**Note:**

How to connect the LED

![](/media/42ff6f405dfa128593827de5aa03e94b.png)

How to identify the 220Ω 5-band resistor

<img src="/media/55c0199544e9819328f6d5778f10d7d0.png" style="zoom:67%;" />

**4. Test Code**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 07：Flowing Water Light\\Project\_07\_Flowing\_Water\_Light

```c
//**********************************************************************
/* 
 * Filename    : Flowing Water Light
 * Description : Using ten leds to demonstrate flowing lamp.
 * Auther      : http//www.keyestudio.com
*/
byte ledPins[] = {16, 17, 18, 19, 20, 21, 22, 26, 27, 28};
int ledCounts;

void setup() {
  ledCounts = sizeof(ledPins);
  for (int i = 0; i < ledCounts; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < ledCounts; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = ledCounts - 1; i > -1; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}
//**********************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/23c49983c355f1785cc22e197493f40d.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/1127ab32e3472f3aa31842f80c15750c.png)

![](/media/66f2ab42322fb7b16c0e5821352e94ca.png)

**5. Test Result：**

After burning the project code, connecting the wires and powering on, the 10 LEDs will gradually light up and then gradually go off.

![](/media/912e2c3f88b522b89b9935548bae3bd9.png)
