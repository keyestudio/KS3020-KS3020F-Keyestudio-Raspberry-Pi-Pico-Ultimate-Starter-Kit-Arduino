# Project 19：Servo Sweep

1.**Introduction**

Servo is a kind of motor that can rotate very precisely. It has been widely used in toy cars, RC helicopters, airplanes, robots, etc. In this project, we will use the pico board to control the rotation of the servo.



2.**Components Required**

| ![image-20230423135617636](media/image-20230423135617636.png) | ![image-20230423135623688](media/image-20230423135623688.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423135629572](media/image-20230423135629572.png) | ![image-20230423135633157](media/image-20230423135633157.png) |
|                           Servo*1                            |                         Jumper Wires                         |
| ![image-20230423135638149](media/image-20230423135638149.png) |                                                              |
|                         USB Cable*1                          |                                                              |



3.**Component Knowledge**

**Servo:**

![image-20230423135403320](media/image-20230423135403320.png)

The servo is a kind of position servo driver, which is mainly composed of a housing, a circuit board, a coreless motor as well as a gear and position detector. 

The working principle is that the receiver or microcontroller sends a signal to the servo, which has an internal reference circuit that generates a reference signal with a period of 20ms and a width of 1.5ms, and compares the DC bias voltage with the voltage of the potentiometer to output voltage difference. 

The IC on the circuit board determines the direction of rotation, and then drives the coreless motor to start rotation and transmits the power to the swing arm through the reduction gear, while the position detector sends back a signal to determine whether it has reached the positioning. 

It is suitable for those control systems that require constant change of angle and can be maintained. When the motor rotates at a certain speed, the potentiometer is driven by the cascade reduction gear to rotate so that the voltage difference is 0 and the motor stops rotating. The angle range of general servo rotation is 0 to 180 degrees.

The pulse period for controlling the servo is 20ms, the pulse width is 0.5ms to 2.5ms, and the corresponding position is -90° to +90°. 

The following is an example of a 180 degree servo.

![](/media/708316fde05c62113a3024e0efb0c237.jpeg)

Servo motors have many specifications, but they all have three connecting wires, which are brown, red, and orange (different brands may have different colors). 

The brown is GND, the red is the positive power supply, and the orange is the signal line.

![](/media/35084ae289a08e35bdb8c89ceb134ba4.png)



4.**Wiring Diagram**

The supply voltage should be 3.3V-5V. Make sure you don't get any errors when connecting the servos to the power supply

![](/media/64a80947d0cd45b50d4bd1d125509bbe.png)

5.**Adding the Servo library：**

If you added the **Servo library,** just skip this step.

**Method 1**：

Search Servo, select Servo and click Update.

![](/media/8f126fb4b3d1607827dc402a2bc81586.png)

![](/media/7c8465d1b05e02add0178c67a7c2d349.png)

**Method 2**：

Open Arduino IDE，click“Sketch”→“Include Library”→“Add .zip Library...”.

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\3. Libraries\\Servo.Zip. Click“Servo.Zip”and“Open”.

![](/media/c2f8296dc71b80455b5a2bbe34ba70fd.png)

![](/media/434892e57944ad4104863d97eb614690.png)

6.**Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 19：Servo Sweep\\Project\_19\_Servo\_Sweep.

```c
//**********************************************************************
/*
 * Filename    : Servo Sweep
 * Description : Control the servo motor for sweeping
 * Auther      : http//www.keyestudio.com
*/
#include <Servo.h>
#define servoPin 16

Servo myServo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position

void setup() {
  myServo.attach(servoPin);  // attaches the servo on pin 16 to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
//***********************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/e3c88fba045d87fcfb4982ff3b807a11.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/cf16cc3c8fbde83667706d2ae27080fe.png)

![](/media/bfcb7b427f0bccfad426e9bb0307fe67.png)

7.**Test Result：**

Upload the code and power up with a USB cable. The servo will rotate from 0° to 180°, then from 180° to 0° .

![](/media/c5250405a4290ecb2d758ff1097310c7.png)
