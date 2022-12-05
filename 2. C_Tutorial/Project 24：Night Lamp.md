# Project 24：Night Lamp

1.  **Introduction**

Sensors or components are ubiquitous in our daily life. For example,
some public street lights turn on automatically at night and turn off
automatically during the day. Why? In fact, this make use of a
photosensitive element that senses the intensity of external ambient
light. When the outdoor brightness decreases at night, the street lights
will automatically turn on. In the daytime, the street lights will
automatically turn off. The principle of this is very simple. In this
lesson we will use Raspberry Pi Pico to control LEDs to implement the
function of this street light.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><p><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/f70a6a892505b1816d151452b9b995a7.jpeg" style="width:1.55417in;height:0.61875in" /></p></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.66944in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/9e553e75b6f976f33438171eb2f2e775.png" style="width:0.19097in;height:1.26597in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/ef77f5a64c382157fc2dea21ec373fef.png" style="width:0.29514in;height:1.25903in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b395b1cd2678f87b3a34dec15659efbc.png" style="width:0.22431in;height:1.00556in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>Photoresistor*1</td>
<td>Red LED*1</td>
<td>10KΩResistor*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.59028in;height:1.44583in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/845d05a6108b1662b828610ba9dcb788.png" style="width:0.25833in;height:1.13681in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.77222in;height:0.77986in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:0.99028in;height:0.52986in" /></td>
<td></td>
</tr>
<tr class="even">
<td>Breadboard*1</td>
<td>220ΩResistor*1</td>
<td>Jumper Wires</td>
<td>USB Cable*1</td>
<td></td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/9e553e75b6f976f33438171eb2f2e775.png)

It is a photosensitive resistor, its principle is that the photoresistor
surface receives brightness (light) to reduce the resistance. The
resistance value will change with the detected intensity of the ambient
light . With this property, we can use photoresistors to detect light
intensity.  Photoresistors and other electronic symbols are as follows:
 

![](/media/7d575da675a2f6cb511d28b801e2abaa.png)

The following circuit is used to detect changes in resistance values of
photoresistors:

![](/media/5a7f7e641eb78007760a94151c1d80a5.png)

In the circuit above, when the resistance of the photoresistor changes
due to the change of light intensity, the voltage between the
photoresistor and resistance R2 will also change.  Thus, the intensity
of light can be obtained by measuring this voltage.

4.  **Read the Analog Value**

We first use a simple code to read the value of the photoresistor, print
it in the serial monitor. For wiring, please refer to the following
wiring diagram.

![](/media/e3fde13b200927346e04b032373ce638.png)

![](/media/b97ff27ae10e3499c36312c8ee4881f8.png)

**Test Code**

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 24：Night
Lamp\\Project\_24.1\_Read\_Photosensitive\_Analog\_Value.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Read Photosensitive Analog Value</p>
<p>* Description : Basic usage of ADC</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ANALOG_IN 26 //the pin of the photosensitive sensor</p>
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

![](/media/c2667443dab2177d4c4e4cd6ffe5f3f5.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/d6d4305c8c00bff5a5dee6e1bbf66025.png)

![](/media/18a8a63b39e1faafa934d0ccb3d0e405.png)

Upload the code to the Pico board, wire up and power up, open the serial
monitor and set the baud rate to 115200. Then you can read the analog
value of photoresistor. When the light intensity around the sensor gets
dim, the analog value displayed on the serial monitor will gradually
reduce. On the contrary, the analog value will gradually increase.

![](/media/b578ae0004b44405bac340bc62138a80.png)

5.  **Circuit Diagram and Wiring Diagram**

Next, we make a light-control lamp.

The Raspberry Pi Pico takes the analog value of the sensor and then
adjusts the brightness of the LED.

![](/media/b8e8d95bdc869bf76465fa73645db831.png)

![](/media/71f2886dc6fa97d02e2ecd0d429af71b.png)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 24：Night Lamp\\Project\_24.2\_Night\_Lamp

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Night Lamp</p>
<p>* Description : Controlling the brightness of LED by photosensitive sensor.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ADC0 26 // the pin of the photosensitive sensor</p>
<p>#define PIN_LED 16 // the pin of the LED</p>
<p>void setup() </p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/f692a819a6a2d6bed8270e8aecde4c20.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/6096a95c4680000fbfe297f52bdc558a.png)

![](/media/8d1f2a698fae68f8de0e1820f5ac288e.png)

**Test Results:**

After the project code is uploaded successfully and power up. when the
light intensity gets weak, the LED will becomes brighter; otherwise, the
LED will become darker.
