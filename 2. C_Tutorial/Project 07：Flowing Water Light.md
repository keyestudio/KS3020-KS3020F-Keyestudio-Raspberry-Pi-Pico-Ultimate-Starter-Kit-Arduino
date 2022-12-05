# Project 07: Flowing Light

1.  **Introduction**

In our daily life, we can see many billboards made up of different
colors of LED. They constantly change the light to attract the attention
of customers. In this project, we will use Plus control board with 5
LEDs to achieve the effect of flowing water.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b18fe281156b29c44796f72222718d58.jpeg" style="width:2.37431in;height:0.94514in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/3ec5906fad2172708d449390140f55e6.png" style="width:0.28056in;height:1.19722in" /></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico扩展板*1</td>
<td>Red LED*10</td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/098a2730d0b0a2a4b2079e0fc87fd38b.png" style="width:1.22639in;height:0.49236in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.50347in;height:1.23333in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/c801a7baee258ff7f5f28ac6e9a7097b.png" style="width:0.66736in;height:0.64097in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>220Ω Resistor*10</td>
<td><p>Breadboard</p>
<p>*1</p></td>
<td><p>Jumper</p>
<p>Wires</p></td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

**3. Circuit Diagram and Wiring Diagram**

![](/media/e6f92039d131685369db2d1ac2c30267.png)

![](/media/fc6e73a6664012c9a33262b50d6e256f.png)

**Note:**

How to connect the LED

![](/media/42ff6f405dfa128593827de5aa03e94b.png)

How to identify the 220Ω 5-band resistor

![](/media/55c0199544e9819328f6d5778f10d7d0.png)

4.  **Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 07：Flowing Water
Light\\Project\_07\_Flowing\_Water\_Light

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Flowing Water Light</p>
<p>* Description : Using ten leds to demonstrate flowing lamp.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>byte ledPins[] = ;</p>
<p>int ledCounts;</p>
<p>void setup() </p>
<p>}</p>
<p>void loop() </p>
<p>for (int i = ledCounts - 1; i &gt; -1; i--) </p>
<p>}</p>
<p>//**********************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/23c49983c355f1785cc22e197493f40d.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/1127ab32e3472f3aa31842f80c15750c.png)

![](/media/66f2ab42322fb7b16c0e5821352e94ca.png)

5.  **Test Result：**

After burning the project code, connecting the wires and powering on,
the 10 LEDs will gradually light up and then gradually go off.

![](/media/912e2c3f88b522b89b9935548bae3bd9.png)
