# Project 27：Temperature Measurement

1.**Introduction**

LM35 is a commonly used and easy-to-use temperature sensor. It does not require other hardware, only needs an analog port. The difficulty lies in compiling the code and converting the analog values to Celsius temperature. 

In this project, we use a temperature sensor and 3 LEDs to make a temperature tester. When the temperature sensor touches objects with different temperature, the LED will show different colors.

2.**Components Required**

| ![image-20230423145834527](media/image-20230423145834527.png) | ![image-20230423145838620](media/image-20230423145838620.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423145843164](media/image-20230423145843164.png) | ![image-20230423145846061](media/image-20230423145846061.png) |
|                  LM35 Temperature Sensor*1                   |                         USB Cable*1                          |
| ![image-20230423145905358](media/image-20230423145905358.png) | ![image-20230423145908222](media/image-20230423145908222.png) |
|                       220Ω Resistor*3                        |                          Red LED*1                           |
| ![image-20230423145915597](media/image-20230423145915597.png) | ![image-20230423145918670](media/image-20230423145918670.png) |
|                         Yellow LED*1                         |                         Green LED*1                          |
| ![image-20230423145927421](media/image-20230423145927421.png) | ![image-20230423145930589](media/image-20230423145930589.png) |
|                       F-F Dupont Wires                       |                         Breadboard*1                         |
| ![image-20230423145939966](media/image-20230423145939966.png) |                                                              |
|                         Jumper Wires                         |                                                              |



3.**Component Knowledge**

![](/media/0fded1cfe95575d0fa4aa03839d8e30d.png)

**Working principle of LM35 temperature sensor:** 

LM35 is a widely used temperature sensor with many different package types. At room temperature, it can achieve the accuracy of 1/4°C without additional calibration processing. LM35 temperature sensor can produce different voltage by different temperature. When the temperature is 0 ℃, it outputs 0V. If increasing 1 ℃, the output voltage will increase 10mv. 

The output temperature is 0℃ to 100℃, the conversion formula is as follows.

![image-20230423150018333](media/image-20230423150018333.png)



4.**Read the Temperature Value**

We first use a simple code to read the value of the temperature sensor, print it in the serial monitor. The wiring diagram is shown below.

![](/media/952016b1b69fcad9f4eea889de63106a.png)

![](/media/2c05b1929588977832c955526f519e89.png)

LM35 output is given to analog pin GP26 of the pico board. This analog voltage is converted to its digital form and processed to get the temperature reading.

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 27：Temperature Measurement\Project_27.1_Read_LM35_Temperature_Value

```c
//**********************************************************************************
/*  
 * Filename    : Read LM35 Temperature Value
 * Description : ADC value is converted to LM35 temperature value
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ANALOG_IN  26  //the pin of the Sound Sensor

void setup() {
  Serial.begin(115200);
}

//In loop() function, analogRead is called to get the ADC value of ADC0 and assign it to adcVal. 
//Calculate the measured voltage value,Celsius and Fahrenheit valuesthrough the formula, 
//and print these data through the serial port monitor.
void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN);
  double voltage = adcVal / 1023.0 * 3.3;
  float temperatureC = (voltage * 1000.0) / 10.0 ;
  float temperatureF = (temperatureC * 1.8) + 32.0;
  Serial.print("ADC Value: " + String(adcVal));
  Serial.print("---Voltage Value: " + String(voltage) + "V");
  Serial.print("---temperatureC: " + String(temperatureC) + "℃");
  Serial.println("---temperatureF: " + String(temperatureF) + "F");
  delay(500);
}
//**********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/b541af6919239b89bd6bb6fe99bfc326.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/e372ff5b957af370664bd32c0b8d3bcf.png)

![](/media/3932db9113306c78dc1fe884b9c9efa4.png)

Upload the code to the pico board, power up with a USB cable and open the serial monitor and set baud rate to 115200. The serial monitor will show the temperature value.

![](/media/37016b9894cd4741906cd0ddd5bd1160.png)

5.**Circuit Diagram and Wiring Diagram**

Now we use a LM35 temperature sensor and three LED lights to do a temperature test. When the LM35 temperature sensor senses different temperatures, different LED lights will light up. Follow the diagram below for wiring.

![image-20230423150204098](media/image-20230423150204098.png)

![](/media/fa3eddc7bda77c7c8420d0f3a0b0d2eb.png)

6.**Test Code：**

Note: The value of“temperature F”in the code can be adjusted appropriately according to the local temperature value.

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 27：Temperature Measurement\\Project\_27.2\_Temperature\_Measurement.

```c
//**********************************************************************************
/*  
 * Filename    : Temperature Measurement
 * Description : Different leds light up when the LM35 senses different temperatures
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ADC2       26      //the pin of the Sound Sensor
#define PIN_GREENLED   22      //the pin of the Green led
#define PIN_YELLOWLED  21      //the pin of the Yellow led
#define PIN_REDLED     19      //the pin of the Red led
void setup() {
  Serial.begin(115200);
  pinMode(PIN_GREENLED, OUTPUT); //set PIN_GREENLED to OUTPUT
  pinMode(PIN_YELLOWLED, OUTPUT);//set PIN_YELLOWLED to OUTPUT
  pinMode(PIN_REDLED, OUTPUT);//set PIN_REDLED to OUTPUT
  pinMode(PIN_ADC2, INPUT);//set PIN_ADC2 to INPUT
}

void loop() {
  int adcVal = analogRead(PIN_ADC2);
  double voltage = adcVal / 1023.0 * 3.3;
  float temperatureC = (voltage * 1000.0) / 10.0 ;
  float temperatureF = (temperatureC * 1.8) + 32.0;
  Serial.print("ADC Value: " + String(adcVal));
  Serial.print("---Voltage Value: " + String(voltage) + "V");
  Serial.print("---temperatureC: " + String(temperatureC) + "℃");
  Serial.println("---temperatureF: " + String(temperatureF) + "F");
  if (temperatureF >= 95) {
    digitalWrite(PIN_GREENLED, LOW);
    digitalWrite(PIN_YELLOWLED, LOW);
    digitalWrite(PIN_REDLED, HIGH);
  }
  else if (temperatureF >= 90 && temperatureF < 95) {
    digitalWrite(PIN_GREENLED, LOW);
    digitalWrite(PIN_YELLOWLED, HIGH);
    digitalWrite(PIN_REDLED, LOW);
  }
  else {
    digitalWrite(PIN_GREENLED, HIGH);
    digitalWrite(PIN_YELLOWLED, LOW);
    digitalWrite(PIN_REDLED, LOW);
  }

  delay(500);
}
//**********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/75c338f4aa897f808eadc9fd8d114857.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/41459f4aa3e17f602d6952cab5068db1.png)

![](/media/cffb047b2612f7a627876b5d8e3a411c.png)

7.**Test Result**

The monitor displays the current temperature value. When the LM35 temperature sensor senses different temperatures, different LED lights will light up.

