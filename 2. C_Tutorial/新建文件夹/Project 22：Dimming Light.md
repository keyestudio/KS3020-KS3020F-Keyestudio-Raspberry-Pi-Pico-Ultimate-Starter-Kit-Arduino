# Project 22: Dimming Light

1.**Introduction**

A potentiometer is a three-terminal resistor with a sliding or rotating contact that forms an adjustable voltage divider. It works by varying the position of a sliding contact across a uniform resistance. 

In a potentiometer, the entire input voltage is applied across the whole length of the resistor, and the output voltage is the voltage drop between the fixed and sliding contact. 

In this project, we are going to learn how to use Arduino to read the values of the potentiometer, and make a dimming lamp.



2.**Components Required**

| ![image-20230423142832665](media/image-20230423142832665.png) | ![image-20230423142836906](media/image-20230423142836906.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423142846409](media/image-20230423142846409.png) | ![image-20230423142849113](media/image-20230423142849113.png) |
|                       Potentiometer*1                        |                          Red LED*1                           |
| ![image-20230423142857802](media/image-20230423142857802.png) | ![image-20230423142901338](media/image-20230423142901338.png) |
|                         Breadboard*1                         |                       200Ω Resistor*1                        |
| ![image-20230423142915643](media/image-20230423142915643.png) | ![image-20230423142918859](media/image-20230423142918859.png) |
|                         Jumper Wires                         |                         USB Cable*1                          |



3.**Component Knowledge**

![](/media/c397aba3de644bb70ffa7a9139a5499e.png)

**Adjustable potentiometer:** 

It is a kind of resistor and an analog electronic component, which has two states of 0 and 1(high level and low level). The analog quantity is different, its data state presents a linear state such as 0 to 1023.



4.**Read the Potentiometer Value**

We connect the adjustable potentiometer to the analog pin of Arduino to read its value. Please refer to the following wiring diagram for wiring.

![](/media/b8ee6320bce8729a4309857f257d30ec.png)

<img src="/media/cb970a340d830569e9ac4462a1318e44.png" style="zoom: 50%;" />

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 22：Dimming Light\Project_22.1_Read_Potentiometer_Analog_Value.

```c
//**********************************************************************************
/*  
 * Filename    : Read Potentiometer Analog Value
 * Description : Basic usage of ADC
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ANALOG_IN  26  //the pin of the Potentiometer

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
//***************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/232e0d578815899b74144dac8ca37a76.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/e50da15f9b592b4f0d001d8019514a34.png)

![](/media/9c869ac15307471ec7b9324733edc8e8.png)

Upload the code , connect the wires and power on first. Then open the serial monitor, set the baud rate to 115200. The serial monitor window will print out the ADC value and voltage value of the potentiometer. 

When moving the knob of the potentiometer is turned, the ADC value and voltage value will change. As shown below:

![](/media/b578ae0004b44405bac340bc62138a80.png)

5. **Circuit diagram and wiring diagram:**

In the previous step, we read the ADC value and voltage value of the potentiometer. Then we need to convert the ADC value into the brightness of the LED to make a light with adjustable brightness. 

As shown below:

![](/media/66f721b77035d40556c873e0c4577b4a.png)

<img src="/media/93b03f3cdc8af506d9035b748839ac33.png" style="zoom:50%;" />

6.**Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 22：Dimming Light\\Project\_22.2\_Dimming\_Light

```c
//**********************************************************************************
/*  
 * Filename    : Dimming Light
 * Description : Controlling the brightness of LED by potentiometer.
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ADC0    26  //the pin of the potentiometer
#define PIN_LED     16  // the pin of the LED

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_ADC0, INPUT);
}

void loop() {
  int adcVal = analogRead(PIN_ADC0); //read the ADC value of potentiometer
  analogWrite(PIN_LED, map(adcVal, 0, 1023, 0, 255));//map ADC to the duty cycle of PWM to control LED brightness.
  delay(10);
}
//**********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/cd2d6e4bee5eda853fd556262e31a2f1.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/0205da9432a26536df81d6f0eaeadeef.png)

![](/media/253f62831ea3f689bd39036b8fa92be1.png)

7.**Test Result:**

Upload the code to Raspberry Pi Pico, change the input voltage of GP26 by turning the potentiometer.

Raspberry Pi Pico changes the output voltage of GP16 according to this voltage value, thereby changing the brightness of the LED.

![](/media/eca30dead3f4923afa0dcb0306db2319.jpeg)
