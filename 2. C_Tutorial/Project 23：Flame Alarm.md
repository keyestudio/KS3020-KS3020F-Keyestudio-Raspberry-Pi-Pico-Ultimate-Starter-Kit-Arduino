# Project 23：Flame Alarm

1.**Introduction**

In this project, we will use the pico board, a flame sensor and a buzzer to make fire alarm devices.

2.**Components Required**

| ![image-20230423143454021](media/image-20230423143454021.png) | ![image-20230423143501885](media/image-20230423143501885.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423143512191](media/image-20230423143512191.png) | ![image-20230423143515182](media/image-20230423143515182.png) |
|                        Flame Sensor*1                        |                          Red LED*1                           |
| ![image-20230423143523695](media/image-20230423143523695.png) | ![image-20230423143533518](media/image-20230423143533518.png) |
|                       Active Buzzer*1                        |                         Breadboard*1                         |
| ![image-20230423143542957](media/image-20230423143542957.png) | ![image-20230423143555742](media/image-20230423143555742.png) |
|                       220Ω Resistor*1                        |                       10KΩ Resistor*1                        |
| ![image-20230423143605037](media/image-20230423143605037.png) | ![image-20230423143607902](media/image-20230423143607902.png) |
|                         Jumper Wires                         |                         USB Cable*1                          |



3.**Component Knowledge**

![image-20230423143629598](media/image-20230423143629598.png)

**Flame Sensor**：

The flame emits a certain degree of IR light, which is invisible to the human eye, but our flame sensor can detect it and alert the microcontroller. 

If the Arduino has detected a fire, it has a specially designed infrared receiver to detect the flame, and then convert the flame brightness into a fluctuating level signal. 

The short pin of the receiving triode is negative pole and the other long pin is positive pole. We should connect the short pin (negative pole) to 5V and the long pin (positive pole) to the analog pin, a resistor and GND. 

As shown in the figure below.

![](/media/87bd204db523c602c80745266c1ee452.png)

**Note**: 

Since vulnerable to radio frequency radiation and temperature changes, the flame sensor should be kept away from heat sources like radiators, heaters and air conditioners, as well as direct irradiation of sunlight, headlights and incandescent light.



4.**Read the Simulation Value**

We start with a simple code to read the value of the flame sensor and print it on the serial monitor. For wiring, please refer to the following wiring diagram.

![](/media/85531078db041bba05599b3a1118a7bc.png)

![](/media/1e3c424f7cc7ac797ab0b8ae4a00f4f1.png)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 23：Flame Alarm\\Project\_23.1\_Read\_Analog\_Value\_Of\_Flame\_Sensor

```c
//**********************************************************************************
/*  
 * Filename    : Read Analog Value Of Flame Sensor
 * Description : Basic usage of ADC
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ANALOG_IN  26  //the pin of the Flame Sensor

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

![](/media/0c9a83df31070fa1c0ab0901259e8093.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/ebc1c3f3cbe627c2a2495e24d599b296.png)

![](/media/35d0dcf2559ec439f695cb316d33f5ce.png)

Upload the code, power up with a USB cable, open the monitor and set baud rate to 115200.

The monitor will show the analog value. When the sensor is closed to fire, the analog value will get greater.

![](/media/b578ae0004b44405bac340bc62138a80.png)

5.**Circuit diagram and wiring diagram:**

We will make a fun project - fire alarm device using flame sensor and buzzer, LED. When the flame sensor detects a flame, the LED flashes and the buzzer alarms.

![](/media/c2b7feb8039e618ba070a9714ef06554.png)

![](/media/0cd1ee17a6f8de81464817090c5832eb.png)

6.**Test Code:**

Note：![](/media/4b3a41657bb185bc081cc3768c117634.png)you can set the threshold value.

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 23：Flame Alarm\\Project\_23.2\_Flame\_Alarm

```c
//**********************************************************************************
/*  
 * Filename    : Flame Alarm
 * Description : Controlling the buzzer and LED by flame sensor.
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ADC0      26  //the pin of the flame sensor
#define PIN_LED       16  // the pin of the LED
#define PIN_BUZZER    17  // the pin of the buzzer

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUZZER, OUTPUT);
  pinMode(PIN_ADC0, INPUT);
}

void loop() {
  int adcVal = analogRead(PIN_ADC0); //read the ADC value of flame sensor
  if (adcVal >= 500) {
    digitalWrite (PIN_BUZZER, HIGH); //turn on buzzer
    digitalWrite(PIN_LED, HIGH); // turn on LED
    delay(500); // wait a second.
    digitalWrite(PIN_LED, LOW); // turn off LED
    delay(500); // wait a second
  }
  else
  {
    digitalWrite(PIN_LED, LOW);  //turn off LED
    digitalWrite (PIN_BUZZER, LOW); //turn off buzzer
  }
}
//**********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/ed07391972b22a1aa557f594e73e3fb9.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/45e5e690a5613cf2b5bfea1ca277abb8.png)

![](/media/be6fb92934f8d704ac8cfae22db7ef43.png)

7.**Result**

Upload the code and power up. monitor will display the value of the flame sensor. 

When the flame sensor detects the flame, the LED will flash and the buzzer will alarm; otherwise, the LED does not light up and the buzzer does not sound.
