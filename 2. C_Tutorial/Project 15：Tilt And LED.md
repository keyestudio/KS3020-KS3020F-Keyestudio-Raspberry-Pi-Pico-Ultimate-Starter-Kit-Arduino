# Project 15：Tilt And LED

1.  **Introduction**
    
    In this lesson, we will use a PLUS mainboard , a tilt switch and 4
    LEDs to make an electronic hourglass.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/222aee34a428755aaf97b711ded3f09a.jpeg" style="width:2.01667in;height:0.80278in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/36f15610f430e5d5138f4e4fb721c40f.png" style="width:1.27292in;height:0.71667in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/ef77f5a64c382157fc2dea21ec373fef.png" style="width:0.29514in;height:1.25903in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/da8a2a9d15baf7280966f3fdbb025a8c.png" style="width:0.26042in;height:1.16667in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>Tilt Switch*1</td>
<td>Red LED*4</td>
<td>10KΩ Resistor*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.59028in;height:1.44583in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/845d05a6108b1662b828610ba9dcb788.png" style="width:0.25833in;height:1.13681in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.8375in;height:0.83194in" /></td>
<td></td>
</tr>
<tr class="even">
<td>Breadboard*1</td>
<td>220Ω Resistor*4</td>
<td>USB Cable*1</td>
<td>Jumper Wires</td>
<td></td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/8c40739f8e05f753f145420b421a0f47.png)

Tilt switch is also called digital switch. Inside is a metal ball that
can roll. The principle of rolling the metal ball to contact with the
conductive plate at the bottom, which is used to control the on and off
of the circuit. When it is a rolling ball tilt sensing switch with
single directional trigger, the tilt sensor is tilted toward the trigger
end (two gold-plated pin ends), the tilt switch is in a closed circuit
and the voltage at the analog port is about 5V (binary number is 1023).
In this way, the LED will light up. When the tilt switch is in a
horizontal position or tilted to the other end, it is open and the
voltage of the analog port is about 0V (binary number is 0), the LED
will turn off. In the program, we judge the state of the switch based on
whether the voltage value of the analog port is greater than 2.5V
(binary number is 512).

As shown in the figure, use the internal structure of the tilt switch to
illustrate how it works.

![](/media/bf8b10ad248ac939ac4ef96d02ed87c7.png)

4.  **Circuit Diagram and Wiring Diagram**

![](/media/8735f9531646b77c35932404a681b76d.png)

![](/media/9127e65ff0d7b3d5e579263fd06ec674.png)

Note:

How to connect the LED

![](/media/f70404aa49540fd7aecae944c7c01f83.jpeg)

How to identify the 220Ω 5-band resistor and 10KΩ 5-band resistor

![](/media/55c0199544e9819328f6d5778f10d7d0.png)

![](/media/246cf3885dc837c458a28123885c9f7b.png)

**Test Code**

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 15：Tilt And LED\\Project\_15\_Tilt\_And\_LED

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Tilt And LED</p>
<p>* Description : Tilt switches and four leds to simulate an hourglass.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define SWITCH_PIN 22 // the tilt switch is connected to Pin22</p>
<p>byte switch_state = 0;</p>
<p>void setup()</p>
<p></p>
<p>pinMode(SWITCH_PIN, INPUT);</p>
<p>for(int i=16;i&lt;20;i++)</p>
<p></p>
<p>Serial.begin(9600);</p>
<p>}</p>
<p>void loop()</p>
<p></p>
<p>}</p>
<p>if (switch_state == 1)</p>
<p></p>
<p>}</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/112591b3a177555f6c383122451e3c8b.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/6ed841aceade0d23e2d7356be9e36f2f.png)

![](/media/f8c6f1cf9c06c1b819803356ed8ae417.png)

5.  **Result**

Upload project code, wire up and power up, hold the breadboard. When you
tilt the breadboard to any angle, the LEDs will light up one by one.
When you turn the breadboard to the original angle, the LEDs will turn
off one by one.
