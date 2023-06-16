# Project 12 Active Buzzer

### **1. Introduction**

Active buzzer is a sound making element, widely used on computers, printers, alarms, electronic toys, telephones, timers, etc. It has an inner vibration source. 

In this project, we will use a PLUS control board to control the active buzzer to buzz.



### **2. Components Required**

| ![image-20230423120859266](media/image-20230423120859266.png) | ![image-20230423120903249](media/image-20230423120903249.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423121034144](media/image-20230423121034144.png) | ![image-20230423121036992](media/image-20230423121036992.png) |
|                       Active Buzzer*1                        |                        Breadboard *1                         |
| ![image-20230423121044464](media/image-20230423121044464.png) | ![image-20230423121047681](media/image-20230423121047681.png) |
|                         Jumper Wires                         |                         USB Cable*1                          |



### **3. Component Knowledge**

![](/media/11ec5ddc982db9928341e858aab94652.png)

The active buzzer inside has a simple oscillator circuit which can convert constant direct current into a certain frequency pulse signal. Once active buzzer receives a high level, it will sound. 

The passive buzzer is an integrated electronic buzzer with no internal vibration source. It must be driven by 2K to 5K square wave instead of a DC signal. 

The appearance of the two buzzers is very similar, but passive buzzers come with a green circuit board, and active buzzers come with a black tape. Passive buzzers don't have positive pole, but active buzzers have.

![](/media/0f9825969867ac2d65bb1a19ed0ad2ab.png)

### **4. Circuit Diagram and Wiring Diagram**

   ![image-20230423121131474](media/image-20230423121131474.png)

![](/media/56df73f7ac711e510b30164c5759615f.png)

**Note**:

1.  The power supply of the buzzer is 5V. With a 3.3V supply, the buzzer will work, but it will beep weakly.
2.  VUSB should be connected to the positive side of the USB cable, if it is connected to GND, it may burn out the computer or Raspberry Pi Pico. Also, be careful when wiring the Raspberry Pi Pico pins 36-40 to avoid short circuits. 
3.  The positive pole (“+”/long pin) of the active buzzer is connected to pin 16, and the negative pole (short pin) is connected to GND.

### **5. Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 12：Active Buzzer\Project_12_Active_Buzzer

```c
//**********************************************************************
/* 
 * Filename    : Active Buzzer
 * Description : Active buzzer beeps.
 * Auther      : http//www.keyestudio.com
*/
#define buzzerPin  16   //define buzzer pins

void setup ()
{
  pinMode (buzzerPin, OUTPUT);
}
void loop ()
{
  digitalWrite (buzzerPin, HIGH);
  delay (500);
  digitalWrite (buzzerPin, LOW);
  delay (500);
}
//*************************************************************************
```

Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/1a73b75f48a39e224d112b33f4435e16.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/162bc2c5347709d616911b69bb5211ac.png)

![](/media/15450f19c2d0649b0f9def0cf8649c30.png)

### **6. Result**

Upload the project code, wire up and power up, then the active buzzer buzzes.
