# Project 28：Rocker control light

1.**Introduction**

The joystick module is a component with two analog inputs and one digital input. It is widely used in game operation, robot control, drone control and other fields. 

In this project, we will use a Raspberry Pi Pico and a joystick module to control RGB. You can have a deeper understanding of the principle and operation of the joystick module in practice.



2.**Components Required**

| ![image-20230423152353142](media/image-20230423152353142.png) | ![image-20230423152357841](media/image-20230423152357841.png) | ![image-20230423152401698](media/image-20230423152401698.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |                      Joystick Module*1                       |
| ![image-20230423152414385](media/image-20230423152414385.png) | ![image-20230423152417265](media/image-20230423152417265.png) | ![image-20230423152420097](media/image-20230423152420097.png) |
|                          RGB LED*1                           |                        220ΩResistor*3                        |                         Jumper Wires                         |
| ![image-20230423152425617](media/image-20230423152425617.png) | ![image-20230423152428625](media/image-20230423152428625.png) | ![image-20230423152431681](media/image-20230423152431681.png) |
|                         USB Cable*1                          |                       M-F Dupont Wires                       |                         Breadboard*1                         |



3.**Component Knowledge**

![image-20230423152454737](media/image-20230423152454737.png)

**Joystick module**: 

It mainly uses PS2 joystick components. In fact, the joystick module has 3 signal terminal pins, which simulate a three-dimensional space. The pins of the joystick module are GND, VCC, and signal terminals (B, X, Y). 

The signal terminals X and Y simulate the X-axis and Y-axis of the space. When controlling, the X and Y signal terminals of the module are connected to the analog port of the microcontroller. The signal terminal B simulates the Z axis of the space, it is generally connected to the digital port and used as a button.

VCC is connected to the microcontroller power output VCC (3.3V or 5V), GND is connected to the microcontroller GND, the voltage in the original state is about 1.65V or 2.5V. 

In the X-axis direction, when moving in the direction of the arrow, the voltage value increases, and the maximum voltage can be reached. Moving in the opposite direction of the arrow, the voltage value gradually decreases to the minimum voltage. 

In the Y-axis direction, the voltage value decreases gradually as it moves in the direction of the arrow on the module, decreasing to the minimum voltage. As the arrow is moved in the opposite direction, the voltage value increases and can reach the maximum voltage. 

In the Z-axis direction, the signal terminal B is connected to the digital port and outputs 0 in the original state and outputs 1 when pressed. 

In this way, we can read the two analog values and the high and low level conditions of the digital port to determine the operating status of the joystick on the module.



4.**Features:**

Input Voltage: DC 3.3V ~ 5V

Output Signal: X/Y dual axis analog value +Z axis digital signal

Range of Application: Suitable for control point coordinate movement in plane as well as control of two degrees of freedom steering gear, etc.  

Product feature: Exquisite appearance, joystick feel superior, simple operation, sensitive response, long service life.  



5.**Read the Value**

We have to use analog Raspberry Pi Pico pin IO to read the data from X or Y pins, and use digital IO port to read the values of the button. Please follow the wiring diagram below for wiring.

![image-20230423152718470](media/image-20230423152718470.png)

<img src="media/image-20230423152724766.png" alt="image-20230423152724766" style="zoom:67%;" />

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 28：Rocker control light\Project_28.1_Read_Rocker_Value

```c
//**********************************************************************************
/*  
 * Filename    : Read Rocker Value
 * Description : Read data from Rocker.
 * Auther      : http//www.keyestudio.com
*/
int xyzPins[] = {27, 26, 28};   //x,y,z pins
void setup() {
  Serial.begin(115200);
  pinMode(xyzPins[0], INPUT); //x axis. 
  pinMode(xyzPins[0], INPUT); //y axis. 
  pinMode(xyzPins[2], INPUT_PULLUP);   //z axis is a button.
}

// In loop(), use analogRead () to read the value of axes X and Y 
//and use digitalRead () to read the value of axis Z, then display them.
void loop() {
  int xVal = analogRead(xyzPins[0]);
  int yVal = analogRead(xyzPins[1]);
  int zVal = digitalRead(xyzPins[2]);
  Serial.println("X,Y,Z: " + String(xVal) + ", " +  String(yVal) + ", " + String(zVal));
  delay(500);
}
//**********************************************************************************
```


![image-20230423152811365](media/image-20230423152811365.png)

Click ![image-20230423152822875](media/image-20230423152822875.png)to upload the test code to the Raspberry Pi Pico board

![image-20230423152828548](media/image-20230423152828548.png)

![image-20230423152837587](media/image-20230423152837587.png)

Upload the code to the pico board, power up with a USB cable and open the serial monitor and set baud rate to 115200.

The monitor will show values of the joystick module while moving the joystick

![image-20230423152851325](media/image-20230423152851325.png)

![image-20230423152856702](media/image-20230423152856702.png)

6.**Circuit Diagram and Wiring Diagram**

We just read the value of the joystick module. Now we need to do something with the joystick module and RGB, connecting according to the following diagram.

![image-20230423152916879](media/image-20230423152916879.png)

<img src="media/image-20230423152923360.png" alt="image-20230423152923360" style="zoom:67%;" />

7.**Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 28：Rocker control light\Project_28.2_Rocker_Control_Light

```c
//**********************************************************************************
/*  
 * Filename    : Rocker Control Light
 * Description : Control RGB to light different colors by Rocker.
 * Auther      : http//www.keyestudio.com
*/
int xyzPins[] = {27, 26, 28};   //x,y,z pins
int ledPins[] = {18, 17, 16};    //define red, green, blue led pins
void setup() {
  pinMode(xyzPins[0], INPUT); //x axis. 
  pinMode(xyzPins[0], INPUT); //y axis. 
  pinMode(xyzPins[2], INPUT_PULLUP);   //z axis is a button.
  for (int i = 0; i < 3; i++) {   //setup the pwm channels,1KHz,8bit
    pinMode(ledPins[i], OUTPUT);
  }
}

// In loop(), use analogRead () to read the value of axes X and Y 
//and use digitalRead () to read the value of axis Z, then display them.
void loop() {
  int xVal = analogRead(xyzPins[0]);
  int yVal = analogRead(xyzPins[1]);
  int zVal = digitalRead(xyzPins[2]);
  if (xVal < 200){
     analogWrite(ledPins[0], 255); //Common cathode LED, high level to turn on the led.
     analogWrite(ledPins[1], 0);
     analogWrite(ledPins[2], 0);
   }
  else if (xVal > 800){
     analogWrite(ledPins[0], 0); 
     analogWrite(ledPins[1], 255);
     analogWrite(ledPins[2], 0);
   }
  else if (yVal < 200){
     analogWrite(ledPins[0], 0); 
     analogWrite(ledPins[1], 0);
     analogWrite(ledPins[2], 255);
   }
  else if (yVal > 800){
     analogWrite(ledPins[0], 255); 
     analogWrite(ledPins[1], 255);
     analogWrite(ledPins[2], 255);
   }
}
//**********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230423153005346](media/image-20230423153005346.png)

Click ![image-20230423153014157](media/image-20230423153014157.png)to upload the test code to the Raspberry Pi Pico board

![image-20230423153021538](media/image-20230423153021538.png)

![image-20230423153026962](media/image-20230423153026962.png)

8.**Test Result：**

Upload the code and power up. If you move the joystick to the left, the RGB will turn red. If moving it to the right, the RGB will turn green; if moving it upward, the RGB will show white; if moving it downward, the RGB will become into blue.

![image-20230423153045911](media/image-20230423153045911.png)



