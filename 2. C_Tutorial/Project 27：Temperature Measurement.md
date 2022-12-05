# Project 27：Temperature Measurement

1.  **Introduction**

LM35 is a commonly used and easy-to-use temperature sensor. It does not
require other hardware, only needs an analog port. The difficulty lies
in compiling the code and converting the analog values to Celsius
temperature. In this project, we use a temperature sensor and 3 LEDs to
make a temperature tester. When the temperature sensor touches objects
with different temperature, the LED will show different colors.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/74a834bb65d3f86d643648f2fa26430f.jpeg" style="width:1.97153in;height:0.78542in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.66944in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/0fded1cfe95575d0fa4aa03839d8e30d.png" style="width:1.35556in;height:1.00139in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:0.99028in;height:0.52986in" /></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>LM35 Temperature Sensor*1</td>
<td>USB Cable*1</td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/098a2730d0b0a2a4b2079e0fc87fd38b.png" style="width:1.09792in;height:0.44097in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/afa6edd3ff90b027a6f43995a6fb15a2.png" style="width:0.28333in;height:1.20972in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/0c1b0f91b4e56bcbc235d06b48809ac9.png" style="width:0.27986in;height:1.22222in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/6c688493b558ed5f3e90e7dab38cbd93.png" style="width:0.26736in;height:1.16389in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/2f77153d70a7cea1d49a75550e38eacf.png" style="width:1.31042in;height:1.11806in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e65c16153d0ca27891c8c08092d96d5a.png" style="width:0.47292in;height:1.15833in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.8375in;height:0.83194in" /></td>
</tr>
<tr class="even">
<td>220Ω Resistor*3</td>
<td>Red LED*1</td>
<td>Yellow LED*1</td>
<td>Green LED*1</td>
<td>F-F Dupont Wires</td>
<td>Breadboard*1</td>
<td>Jumper Wires</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/0fded1cfe95575d0fa4aa03839d8e30d.png)

**Working principle of LM35 temperature sensor:** LM35 is a widely used
temperature sensor with many different package types. At room
temperature, it can achieve the accuracy of 1/4°C without additional
calibration processing. LM35 temperature sensor can produce different
voltage by different temperature.When the temperature is 0 ℃, it outputs
0V. If increasing 1 ℃, the output voltage will increase 10mv.

The output temperature is 0℃ to 100℃, the conversion formula is as
follows.

![](/media/0dfa07fa69f2a98658a3822c2da93bf7.jpeg)

4.  **Read the Temperature Value**

We first use a simple code to read the value of the temperature sensor,
print it in the serial monitor. The wiring diagram is shown below.

![](/media/952016b1b69fcad9f4eea889de63106a.png)

![](/media/2c05b1929588977832c955526f519e89.png)

LM35 output is given to analog pin GP26 of the pico board. This analog
voltage is converted to its digital form and processed to get the
temperature reading.

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 27：Temperature
Measurement\\Project\_27.1\_Read\_LM35\_Temperature\_Value

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Read LM35 Temperature Value</p>
<p>* Description : ADC value is converted to LM35 temperature value</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ANALOG_IN 26 //the pin of the Sound Sensor</p>
<p>void setup() </p>
<p>//In loop() function, analogRead is called to get the ADC value of ADC0 and assign it to adcVal.</p>
<p>//Calculate the measured voltage value,Celsius and Fahrenheit valuesthrough the formula,</p>
<p>//and print these data through the serial port monitor.</p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/b541af6919239b89bd6bb6fe99bfc326.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/e372ff5b957af370664bd32c0b8d3bcf.png)

![](/media/3932db9113306c78dc1fe884b9c9efa4.png)

Upload the code to the pico board, power up with a USB cable and open
the serial monitor and set baud rate to 115200. The serial monitor will
show the temperature value.

![](/media/37016b9894cd4741906cd0ddd5bd1160.png)

5.  **Circuit Diagram and Wiring Diagram**
    
    Now we use a LM35 temperature sensor and three LED lights to do a
    temperature test. When the LM35 temperature sensor senses different
    temperatures, different LED lights will light up. Follow the diagram
    below for wiring.
    
    ![](/media/65b5f44e3a73ff102a40f6c90bdf6d4c.png)

![](/media/fa3eddc7bda77c7c8420d0f3a0b0d2eb.png)

6.  **Test Code：**

Note：The value of“temperature F”in the code can be adjusted
appropriately according to the local temperature value.

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 27：Temperature
Measurement\\Project\_27.2\_Temperature\_Measurement.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Temperature Measurement</p>
<p>* Description : Different leds light up when the LM35 senses different temperatures</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ADC2 26 //the pin of the Sound Sensor</p>
<p>#define PIN_GREENLED 22 //the pin of the Green led</p>
<p>#define PIN_YELLOWLED 21 //the pin of the Yellow led</p>
<p>#define PIN_REDLED 19 //the pin of the Red led</p>
<p>void setup() </p>
<p>void loop() </p>
<p>else if (temperatureF &gt;= 90 &amp;&amp; temperatureF &lt; 95) </p>
<p>else </p>
<p>delay(500);</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/75c338f4aa897f808eadc9fd8d114857.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/41459f4aa3e17f602d6952cab5068db1.png)

![](/media/cffb047b2612f7a627876b5d8e3a411c.png)

**Test Result**

The monitor displays the current temperature value. When the LM35
temperature sensor senses different temperatures, different LED lights
will light up.
