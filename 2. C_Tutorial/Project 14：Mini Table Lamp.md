# Project 14: Mini Table Lamp

1.  **Introduction**

Did you know that Arduino can light up an LED when you press a button?
In this project, we will use the Plus Mainboard, a key switch and an LED
to make a small desk lamp.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/222aee34a428755aaf97b711ded3f09a.jpeg" style="width:2.01667in;height:0.80278in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/5b8fea4657b47510d199f740fdcaaa9d.png" style="width:1.06736in;height:0.74236in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/ef77f5a64c382157fc2dea21ec373fef.png" style="width:0.29514in;height:1.25903in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/da8a2a9d15baf7280966f3fdbb025a8c.png" style="width:0.26042in;height:1.16667in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>Button*1</td>
<td>Red LED*1</td>
<td>10KΩ Resistor*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.59028in;height:1.44583in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/845d05a6108b1662b828610ba9dcb788.png" style="width:0.25833in;height:1.13681in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.8375in;height:0.83194in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/9cab81f7da18c7b0c245ec2a2f614f3a.png" style="width:0.84514in;height:0.83264in" /></td>
</tr>
<tr class="even">
<td>Breadboard*1</td>
<td>220Ω Resistor*1</td>
<td>USB Cable*1</td>
<td>Jumper Wires</td>
<td>Button Cap*1</td>
</tr>
</tbody>
</table>

3.  **3Component Knowledge**

![](/media/5b8fea4657b47510d199f740fdcaaa9d.png)

**Button:** The button can control the circuit on and off. The circuit
is disconnected when the button is not pressed. But it breaks when you
release it. Why does it only work when you press it? It starts from the
internal structure of the button, which is shown in the
figure:![](/media/d2a204e61c768f18924150db58aee093.png). Before the button is pressed, 1 and 2
are on, 3 and 4 are also on, but 1, 3 or 1, 4 or 2, 3 or 2, 4 are off
(not working). Only when the button is pressed, 1, 3 or 1, 4 or 2, 3 or
2, 4 are on.

The key switch is one of the most commonly used components in circuit
design.

**Schematic diagram of the button:**

![](/media/5e42fde9876f9be810d85a7fb8b331f7.png)
![](/media/8677548f9e756281629430d66ba3a460.png)

**4.** **Circuit Diagram and Wiring Diagram**

![](/media/0753a2a452e0292b31f79f9b6dabb0cc.png)

![](/media/a03a6553dc194ab61fb7b4d914740f90.png)

**Note:**

How to connect the LED

![](/media/f70404aa49540fd7aecae944c7c01f83.jpeg)

How to identify the 220Ω 5-band resistor and 10KΩ 5-band resistor

![](/media/55c0199544e9819328f6d5778f10d7d0.png)

![](/media/246cf3885dc837c458a28123885c9f7b.png)

4.  **Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 14：Mini Table Lamp\\Project\_14\_Mini\_Table\_Lamp.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Mini Table Lamp</p>
<p>* Description : Make a table lamp.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_LED 19</p>
<p>#define PIN_BUTTON 22</p>
<p>bool ledState = false;</p>
<p>void setup() </p>
<p>// the loop function runs over and over again forever</p>
<p>void loop() </p>
<p>while (digitalRead(PIN_BUTTON) == LOW);</p>
<p>}</p>
<p>}</p>
<p>void reverseGPIO(int pin) </p>
<p>//**********************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/fb3c5d5bb135803dd629cae5e8eabc7c.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/c9c421a60ba0866cf2102cbe57d7fe28.png)

![](/media/47dd7f6786120f6f15d429407daa74f3.png)

**6. Result**

Burn the project code, connect the wires and power on first. Then press
the button, the LED will turn on. Press the button again, the LED will
turn off.
