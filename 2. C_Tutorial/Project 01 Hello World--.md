# Project 01: Hello World

**1.Introduction**

For Raspberry Pi Pico beginners, we will start with some simple things. In this project, you only need a Raspberry Pi Pico and a USB cable to complete the "Hello World!" project, which is a test of communication between Raspberry Pi Pico and the PC as well as a primary project.



**2.Components**

| ![image-20230423104134494](media/image-20230423104134494.png) | ![image-20230423104142968](media/image-20230423104142968.png) |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| Raspberry Pi Pico*1                                          | USB Cable*1                                                  |



**3.Wiring Up**

In this project, we use a USB cable to connect the Raspberry Pi Pico to the computer.
![image-20230423104205479](media/image-20230423104205479.png)



**4.Test Code**

You can open the code we provide:

The code used in this project is saved in (path :) KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2.C\_Tutorial\\2. Projects\\Project 01：Hello World\\Project\_01\_Hello\_World.

```c
//*************************************************************************************
/*
 * Filename    : Hello World
 * Description : Enter the letter R,and the serial port displays"Hello World".
 * Auther      :http//www.keyestudio.com
*/
char val;// defines variable "val"
void setup()
{
Serial.begin(115200);// sets baudrate to 115200
}
void loop()
{
  if (Serial.available() > 0) {
    val=Serial.read();// reads symbols assigns to "val"
    if(val=='R')// checks input for the letter "R"
    {  // if so,    
     Serial.println("Hello World!");// shows “Hello World !”.
    }
  }
}
//*************************************************************************************
```

Before uploading the code to the Raspberry Pi Pico, please check the configuration of the Arduino IDE.

Click“**Tools**”，confirm the board type and port as follows:

![](/media/ca4f1e99c12f82ef6e79afeaa2d895a4.png)

Click![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the text code to the Raspberry Pi Pico.

![](/media/177c38cfb651d6ec1ddf7e8c71b7df0a.png)

The code is uploaded successfully!

![](/media/3fab055b4d5672d06db938ddbfbf4dd6.png)

**5.Test Result**

After uploading successfully, click the icon![](/media/2f6bca56f724e45a855335cb53ae9b4e.png) to enter the serial display.

Set baud rate to 115200 and type "R" in the text box. Click "Send", the serial monitor will display "Hello World!”.

![](/media/41f9f3168413965361dd4fa3da54f0ce.png)
