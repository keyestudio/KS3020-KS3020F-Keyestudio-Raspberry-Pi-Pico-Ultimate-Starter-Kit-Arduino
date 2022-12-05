# Project 06: RGB LED

**1. Introduction**

![](/media/94bdff69e438989d8e0934e57f2e5c00.png)

In this project, we will introduce the RGB LED and show you how to use
the Plus control board to control the RGB LED. Even though RGB LED is
very basic, it is also a great way to learn the fundamentals of
electronics and coding.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b18fe281156b29c44796f72222718d58.jpeg" style="width:2.37431in;height:0.94514in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/f1a86fc81ab4b043263ce7e01e14d470.png" style="width:0.23056in;height:1.27847in" /></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>RGB LED*1</td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/098a2730d0b0a2a4b2079e0fc87fd38b.png" style="width:1.22639in;height:0.49236in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.50347in;height:1.23333in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/c801a7baee258ff7f5f28ac6e9a7097b.png" style="width:0.66736in;height:0.64097in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>220Ω Resistor*3</td>
<td>Breadboard*1</td>
<td>Jumper Wires</td>
<td><p>USB</p>
<p>Cable*1</p></td>
</tr>
</tbody>
</table>

**3. Component Knowledge**

**RGB LED：**

![](/media/03a7f4cce9c57f7e38465eed7bb18688.jpeg)

The monitors mostly adopt the RGB color standard, and all the colors on
the computer screen are composed of the three colors of red, green and
blue mixed in different proportions.

![](/media/8bf1339719a922f2fbc1e01a4347b4ab.png)

This RGB LED has pin R, G and B and a common cathode. To change its
brightness, we can use the PWM pins which can give different duty cycle
signals to the RGB LED to produce different colors.

4.  **Circuit Diagram and Wiring Diagram**

![](/media/f6950bc8498e6139cbb67db84cdd5a9a.png)

![](/media/fdab8c2fd2dfdd1670c09962e7b458ce.png)

**Note:**

RGB LED longest pin (common cathode) connected to GND.

![](/media/1584356c63bf99934ae0810ee02dced3.png)

How to identify the 220Ω 5-band resistor

![](/media/55c0199544e9819328f6d5778f10d7d0.png)

5.  **Test Code：**

We need to create three PWM channels and use random duty cycles to light
up the RGB LEDs randomly.

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 06：RGB LED\\Project\_06\_RGB\_LED.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : RGB LED</p>
<p>* Description : Use RGBLED to show random color.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>int ledPins[] = ; //define red, green, blue led pins</p>
<p>int red, green, blue;</p>
<p>void setup() </p>
<p>}</p>
<p>void loop() </p>
<p>void setColor(byte r, byte g, byte b) </p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/b8e65116c90af0ec395a3139da218d03.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/684e56d3d0ce44b23b201d57e7083880.png)

![](/media/5a19f7d07f6093f14a1acfbc4e3604ef.png)

6.  **Result**
    
    Upload the project code, wire up, power up and wait a few seconds,
    the RGB will show random colors.
