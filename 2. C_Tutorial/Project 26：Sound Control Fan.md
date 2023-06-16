# Project 26：Sound Control Stepper Motor

### 1.**Introduction**

The sound sensor has a built-in capacitive electret microphone and power amplifier. It can be used to detect the sound intensity of the environment.

In this project, we use a sound sensor and a 130 motor to make a voice-activated smart fan.



### 2.**Components Required**

| ![image-20230423145243835](media/image-20230423145243835.png) | ![image-20230423145248217](media/image-20230423145248217.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423145302521](media/image-20230423145302521.png) | ![image-20230423145307049](media/image-20230423145307049.png) |
|                        Sound Sensor*1                        |                         USB Cable*1                          |
| ![image-20230423145318473](media/image-20230423145318473.png) | ![image-20230423145322249](media/image-20230423145322249.png) |
|                      130 Motor Module*1                      |                       F-F Dupont Wires                       |
| ![image-20230423145330954](media/image-20230423145330954.png) |                                                              |
|                       M-F Dupont Wires                       |                                                              |



### 3.**Component Knowledge**

<img src="/media/8c5550065b07fbc3961172f93a6b40a0.png" style="zoom:67%;" />

**Sound sensor** is usually used to detect the loudness of the sound in the surroundings. Arduino can collect its output signal through the analog input interface. The S pin is an analog output, which is the real-time output of the microphone voltage signal. The sensor comes with a potentiometer so you can adjust the signal strength. It also has two fixing holes so that the sensor can be installed on any other equipment. You can use it to make some interactive works, such as voice-operated switches.



### 4.**Read the Analog Value of the Sound Sensor**

We first use a simple code to read the analog value of the sound sensor and print it to the serial monitor, please refer to the following wiring diagram for the wiring.

![](/media/7bcfe48423953695c677c0c504d8f745.png)

<img src="/media/547329f9d46a7267798728d385b60912.png" style="zoom:50%;" />

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 26：Sound Control Fan\Project_26.1_Read_Sound_Sensor_Analog_Value

```c
//**********************************************************************************
/*  
 * Filename    : Read Sound Sensor Analog Value
 * Description : Basic usage of ADC
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ANALOG_IN  28  //the pin of the Sound Sensor

void setup() {
  Serial.begin(115200);
}

//In loop() function, analogRead is called to get the ADC value of ADC0 and assign it to adcVal. 
//Calculate the measured voltage value through the formula, and print these data through the serial port monitor.
void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN);
  double voltage = adcVal / 1023.0 * 3.3;
  Serial.println("ADC Value: " + String(adcVal) + " --- Voltage Value: " + String(voltage) + "V");
  delay(500);
}
//**********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/7365ca67e988ec577fe3231c9e3443b8.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/80cd719e3616f0335e5af898b50bbef5.png)

![](/media/c445ce7385f012d27c3fe14c0d0da73e.png)

Upload the code to the pico board, power up with a USB cable and open the serial monitor and set baud rate to 115200.

The monitor will show analog values of the sound sensor.

![](/media/ae5f584b3e91adba3f7fc69b86ec68db.png)

### 5.**Wiring Diagram：**

![](/media/631b461716fe53a2c1138f561acae5f7.png)

<img src="/media/340c224f0f71765f71d17afc623d595d.png" style="zoom:50%;" />

### 6.**Test Code：**

Note：![](/media/eadca6bc4da3706e43015b3e00afd512.png)you can set the thresh value in the code)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 26：Sound Control Fan\\Project\_26.2\_Sound\_Control\_Fan

```c
//**********************************************************************************
/*  
 * Filename    : Sound Control Fan
 * Description : Controlling the fan by Sound sensor.
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ADC2   28  //the pin of the Sound sensor
#define PIN_Motorla    17  // the Motor_IN+ pin of the motor
#define PIN_Motorlb    16  // the Motor_IN- pin of the motor
#define PIN_LED    25  // // the pin of the built-in LED on the Pico board

void setup() {
  pinMode(PIN_LED, OUTPUT);//set PIN_LED to OUTPUT
  pinMode(PIN_Motorla, OUTPUT);//set Motorla to OUTPUT
  pinMode(PIN_Motorlb, OUTPUT);//set Motorlb to OUTPUT
  pinMode(PIN_ADC2, INPUT);//set PIN_ADC2 to INPUT
}

void loop() {
  int adcVal = analogRead(PIN_ADC2); //read the ADC value of Sound sensor
  if (adcVal > 600) {
    digitalWrite(PIN_LED,HIGH); //turn on the built-in LED on the Pico board
    digitalWrite(PIN_Motorla,HIGH); //rotate
    digitalWrite(PIN_Motorlb,LOW);
    delay(5000); //delay 5S
  }
  else
  {
    digitalWrite(PIN_LED,LOW); //turn off the built-in LED on the Pico board
    digitalWrite(PIN_Motorla,LOW); //stop rotating
    digitalWrite(PIN_Motorlb,LOW); 
  }
}
//**********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/9bf6a4f3644b1428c1a7d75aafe12f8d.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/c673b24dfd353cb6ffad4a525f2baab6.png)

![](/media/8c3e2b9948b1b8bc450adbbde684e4a0.png)

### 7.**Test Result**

Upload the code and power up. 

Clap your hands before the sound sensor, when the sound intensity exceeds the thresh value, the fan will rotate and the LED on the pico board will be on; on the contrary, the fan won’t rotate and the LED will be off.
