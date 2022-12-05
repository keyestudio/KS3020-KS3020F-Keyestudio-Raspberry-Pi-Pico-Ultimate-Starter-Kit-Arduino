# Project 31：Temperature Instrument

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
<td><p><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/8f45d8141f23885af95f870ab64a859c.jpeg" style="width:1.76389in;height:0.70278in" /></p></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.66944in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b45bb81bb3763377c63accce606ac5f2.png" style="width:0.25in;height:1.11597in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b395b1cd2678f87b3a34dec15659efbc.png" style="width:0.22431in;height:1.00556in" /></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>Photoresistor*1</td>
<td>10KΩ Resistor*1</td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/74ca4fa6d49dbd04de6a603c6e55a9ee.png" style="width:1.15347in;height:0.9625in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.56736in;height:1.38958in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/9232141f8a3166a8a6cdd43b78edd4e3.png" style="width:1.29722in;height:0.625in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:1.10139in;height:1.03472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:0.99028in;height:0.52986in" /></td>
</tr>
<tr class="even">
<td><p>10CM</p>
<p>M-F Dupont Wires</p></td>
<td>Breadboard*1</td>
<td>LCD 128X32 DOT*1</td>
<td>Jumper Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

1.  **Component Knowledge**
    
    Thermistor: A thermistor is a temperature sensitive resistor. When
    it senses a change in temperature, the thermistor's resistance
    changes. We can use this feature to detect temperature intensity
    with thermistor. Thermistors and its electronic symbols are shown
    below:

![](/media/809b8634747fb295021f12e3b92b7894.png)

The relation between thermistor resistance and temperature is:

**[in](javascript:;) [the](javascript:;) [formula](javascript:;): **

Rt is the resistance of the thermistor at T2 temperature.

R is the nominal resistance value of the thermistor at T1 room
temperature.

EXP\[n\] is the nth power of e.

B is the temperature index

T1 and T2 refer to K degrees, that is, Kelvin temperature. Kelvin
temperature =273.15 + Celsius temperature. For thermistor parameters, we
use : B=3950, R=10KΩ，T1=25℃.The circuit connection method of thermistor
is similar to that the photoresistor, as shown below :

![](/media/ac0d68aac58bffa5c99e1d0ed3a8bc37.jpeg)

We can use the value measured by the ADC converter to get the resistance
value of the thermistor, and then use the formula to get the temperature
value. Therefore, the temperature formula can be deduced as:

2.  **Read the Values**
    
    First we will learn the thermistor to read the current ADC value,
    voltage value and temperature value and print them out . Please
    connect the wires according to the following wiring diagram.
    
    ![](/media/c143dc239ceaa5e65a63f47d6512630c.png)

![](/media/c0ad763fa1dda5ce55d03fe9b3d61bcd.png)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 31：Temperature
Instrument\\Project\_31.1\_Read\_the\_thermistor\_analog\_value.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Read the thermistor analog value</p>
<p>* Description : Making a thermometer by thermistor.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ADC1 27</p>
<p>void setup() </p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/402612a4cce3731ac1876ec5172f40eb.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/b0378d7c0223cd674cb661203ea94565.png)

![](/media/75fc93a26eb3a16c348496ec506155e6.png)

Upload the code to the Raspberry Pi Pico successfully, power up with a
USB cable, open the serial monitor and set the baud rate to 115200.

The serial monitor will display the current ADC value, voltage value and
temperature value of the thermistor. Press the photoresistor, the
temperature value will rise.

![](/media/8dbae0c204a8a98d74c7e58bef84d0d2.png)

Circuit diagram and wiring diagram:

Note: You must use a 10CM M-F DuPont wire to connect
LCD\_128X32\_DOT,then LCD\_128X32\_DOT will display normally;

A 20CM long male-to-female DuPont cable is not required because the
LCD\_128X32\_DOT display abnormally.

![](/media/281774a4fbf4f7f2ca0fd1e60c89516c.png)

![](/media/91445212232765942d482b84da03f598.png)

**Adding the lcd128\_32\_io library：**

If you added the **lcd128\_32\_io library, just skip this step.**

**Add the library as follows:**

Open Arduino IDE，click “Sketch”→“Include Library”→“Add .zip Library...”.
Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\3.
Libraries\\LCD\_128X32.Zip，click LCD\_128X32.Zip then“Open”

![](/media/0936369979925135ae6fb54cbb9d4233.png)

![](/media/9e2478b77a39fe4ab547cce6646747d8.png)

**Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 31：Temperature
Instrument\\Project\_31.2\_Temperature\_Instrument.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Temperature Instrument</p>
<p>* Description : LCD displays the temperature of thermistor.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include "lcd128_32_io.h"</p>
<p>#define PIN_ADC1 27</p>
<p>lcd lcd(20, 21); //Create lCD128 *32 pin，sda-&gt;20， scl-&gt;21</p>
<p>void setup() </p>
<p>char string[10];</p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/9dc7e9b28798dadf20ec488bd059a41a.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/78905d42597a20405f0d36b80e9ece8c.png)

![](/media/3ab7b6f7f77e0c663cc22631f8635f3d.png)

**Test Result：**

Upload the code and power up with a USB cable. The LCD 128X32 DOT will
show the voltage value and temperature value.
