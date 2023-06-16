# Project 02: Onboard LED Flashing

### **1. Description：**

There is an onboard LED in Raspberry Pi Pico,which is a GP25 pin attached to the Raspberry Pi Pico. In this project, we will learn the effect of making the onboard LED blink.



### **2. Components**

| ![image-20230423104602049](media/image-20230423104602049.png) | ![image-20230423104605129](media/image-20230423104605129.png) |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| Raspberry Pi Pico*1                                          | USB Cable*1                                                  |



### **3. Wiring up**

In this project, Raspberry Pi Pico is connected to a computer using a USB cable. 

![](/media/8ea81d60b8e2132c358041235490b7d5.jpeg)

### **4. Test Code：**

The onboard LED of Raspberry Pi Pico is controlled by GP25. When the GP25 outputs high, the LED will be on; when outputting LOW, the LED will be off.

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 02: Onboard LED flashing\\Project\_02\_Onboard\_LED\_Flashing.

```c
//**********************************************************************
/*
 * Filename    : Onboard LED flashing
 * Description : Make an led blinking.
 * Auther      : http//www.keyestudio.com
*/
#define LED_BUILTIN 25

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
//*************************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports..

![](/media/2fdcbda97a25faff38c97fe9e9eaa912.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board.

![](/media/6b969a7dcb03845a0a1ba591c00efcac.png)

![](/media/655fba85319a8194349ba1bdfee97fac.png)

### **5. Test Result**

After the project code was uploaded successfully, the LED of Raspberry Pi Pico started flashing.

![](/media/529c3be102eb7414ac1e5e66fb203b6e.png)
