# Project 23：Flame Alarm

1.  **Introduction**

In this project, we will use the pico board, a flame sensor and a buzzer
to make fire alarm devices.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><p><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/f70a6a892505b1816d151452b9b995a7.jpeg" style="width:1.55417in;height:0.61875in" /></p></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.66944in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/a50ec3e38adf10643eafac8cb62bec8a.png" style="width:0.20278in;height:1.25764in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/ef77f5a64c382157fc2dea21ec373fef.png" style="width:0.29514in;height:1.25903in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/4b4f653a76a82a3b413855493cc58fba.png" style="width:0.86111in;height:0.70069in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>Flame Sensor*1</td>
<td>Red LED*1</td>
<td>Active Buzzer*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.59028in;height:1.44583in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/845d05a6108b1662b828610ba9dcb788.png" style="width:0.25833in;height:1.13681in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b395b1cd2678f87b3a34dec15659efbc.png" style="width:0.22431in;height:1.00556in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.77222in;height:0.77986in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>Breadboard*1</td>
<td>220Ω Resistor*1</td>
<td>10KΩ Resistor*1</td>
<td>Jumper Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/a50ec3e38adf10643eafac8cb62bec8a.png)

**Flame Sensor**：The flame emits a certain degree of IR light, which is
invisible to the human eye, but our flame sensor can detect it and alert
the microcontroller. If the Arduino has detected a fire, it has a
specially designed infrared receiver to detect the flame, and then
convert the flame brightness into a fluctuating level signal. The short
pin of the receiving triode is negative pole and the other long pin is
positive pole. We should connect the short pin (negative pole) to 5V and
the long pin (positive pole) to the analog pin, a resistor and GND. As
shown in the figure below.

![](/media/87bd204db523c602c80745266c1ee452.png)

Note: Since vulnerable to radio frequency radiation and temperature
changes, the flame sensor should be kept away from heat sources like
radiators, heaters and air conditioners, as well as direct irradiation
of sunlight, headlights and incandescent light.

4.  **Read the Simulation Value**

We start with a simple code to read the value of the flame sensor and
print it on the serial monitor. For wiring, please refer to the
following wiring diagram.

![](/media/85531078db041bba05599b3a1118a7bc.png)

![](/media/1e3c424f7cc7ac797ab0b8ae4a00f4f1.png)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 23：Flame
Alarm\\Project\_23.1\_Read\_Analog\_Value\_Of\_Flame\_Sensor

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Read Analog Value Of Flame Sensor</p>
<p>* Description : Basic usage of ADC</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ANALOG_IN 26 //the pin of the Flame Sensor</p>
<p>void setup() </p>
<p>//In loop() function, analogRead is called to get the ADC value of ADC0 and assign it to adcVal.</p>
<p>//Calculate the measured voltage value through the formula, and print these data through the serial port monitor.</p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/0c9a83df31070fa1c0ab0901259e8093.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/ebc1c3f3cbe627c2a2495e24d599b296.png)

![](/media/35d0dcf2559ec439f695cb316d33f5ce.png)

Upload the code, power up with a USB cable, open the monitor and set
baud rate to 115200.

The monitor will show the analog value. When the sensor is closed to
fire, the analog value will get greater.

![](/media/b578ae0004b44405bac340bc62138a80.png)

5.  **Circuit diagram and wiring diagram:**
    
    We will make a fun project - fire alarm device using flame sensor
    and buzzer, LED. When the flame sensor detects a flame, the LED
    flashes and the buzzer alarms.

![](/media/c2b7feb8039e618ba070a9714ef06554.png)

![](/media/0cd1ee17a6f8de81464817090c5832eb.png)

6.  **Test Code：**（Note：![](/media/4b3a41657bb185bc081cc3768c117634.png)you can set the threshold
    value

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 23：Flame Alarm\\Project\_23.2\_Flame\_Alarm

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Flame Alarm</p>
<p>* Description : Controlling the buzzer and LED by flame sensor.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ADC0 26 //the pin of the flame sensor</p>
<p>#define PIN_LED 16 // the pin of the LED</p>
<p>#define PIN_BUZZER 17 // the pin of the buzzer</p>
<p>void setup() </p>
<p>void loop() </p>
<p>else</p>
<p></p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/ed07391972b22a1aa557f594e73e3fb9.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/45e5e690a5613cf2b5bfea1ca277abb8.png)

![](/media/be6fb92934f8d704ac8cfae22db7ef43.png)

7.  **Result**

Upload the code and power up. monitor will display the value of the
flame sensor. When the flame sensor detects the flame, the LED will
flash and the buzzer will alarm; otherwise, the LED does not light up
and the buzzer does not sound.
