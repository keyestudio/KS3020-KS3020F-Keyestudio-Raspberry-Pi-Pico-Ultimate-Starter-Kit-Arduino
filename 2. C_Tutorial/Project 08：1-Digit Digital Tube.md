# Project 08: 1-Digit Digital Tube

1.  **Introduction**

The seven-segment digital tube is an electronic display device that
displays decimal numbers. It is widely used in digital clocks,
electronic meters, basic calculators and other electronic devices that
display digital information. The tubes are an alternative to more
complex dot-matrix displays that are easy to use in both limited light
conditions and strong sunlight. In this project, we will use the PLUS
control board to control 1-digit digital tube to display numbers.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b18fe281156b29c44796f72222718d58.jpeg" style="width:2.37431in;height:0.94514in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/75e38d601750a4707369bc73d8028063.png" style="width:0.92361in;height:1.02986in" /></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td><table>
<tbody>
<tr class="odd">
<td>1-digit Digital Tube*1</td>
</tr>
</tbody>
</table></td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/098a2730d0b0a2a4b2079e0fc87fd38b.png" style="width:1.22639in;height:0.49236in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.50347in;height:1.23333in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/c801a7baee258ff7f5f28ac6e9a7097b.png" style="width:0.66736in;height:0.64097in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>220Ω Resistor*8</td>
<td>Breadboard*1</td>
<td>Jumper Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

**3. Component Knowledge**

![](/media/e44a0f27beec739ee13e68c04865989f.png)

**Display principle:** the digital tube display is a semiconductor
light-emitting device. Its basic unit is a light-emitting diode (LED).
The digital tube display can be divided into 7-segment digital tube and
8-segment digital tube according to the number of segments. The
8-segment digital tube has one more LED unit than the 7-segment digital
tube (used for decimal point display). Each segment of the 7-segment LED
display is a separate LED. According to the connection mode of the LED
unit, the digital tube can be divided into a common anode digital tube
and a common cathode digital tube.

In the common cathode 7-segment digital tube, all the cathodes (or
negative electrodes) of the segmented LEDs are connected together, so
you should connect the common cathode to GND. To light up a segmented
LED, you can set its associated pin to “HIGH”.

In the common anode 7-segment digital tube, the LED anodes (positive
electrodes) of all segments are connected together, so you should
connect the common anode to “+5V”. To light up a segmented LED, you can
set its associated pin to“LOW”.

![](/media/28fd057848fbe0e8c8e3362768e7aa44.png)

Each part of the digital tube is composed of an LED. So when you use it,
you also need to use a current limiting resistor. Otherwise, the LED
will be damaged. In this experiment, we use an ordinary common cathode
one-bit digital tube. As we mentioned above, you should connect the
common cathode to GND. To light up a segmented LED, you can set its
associated pin to“HIGH”.

3.  **Circuit Diagram and Wiring Diagram**

![](/media/84e67e0ce2d7627a96b83156324d92d5.png)

**Note:** The direction of the 7-segment digital tube inserted into the
breadboard is the same as the wiring diagram, and there is one more
point in the lower right corner.

![](/media/66da2f88234019c4a712494174ea4426.png)

![](/media/d99daa4165cf32b2283aae82466981bd.png)

4.  **Test Code：**

The number display is divided into 7 segments, and the decimal point
display is divided into 1 segment. When certain numbers are displayed,
the corresponding segment will be lit. For example, when the number 1 is
displayed, segments b and c will be turned on.

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 08：1-Digit Digital
Tube\\Project\_08\_One\_Digit\_Digital\_Tube

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : 1-Digit Digital Tube</p>
<p>* Description : One Digit Tube displays numbers from 9 to 0.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>// sets the IO PIN for every segment</p>
<p>int a=17; // digital PIN 17 for segment a</p>
<p>int b=16; // digital PIN 16 for segment b</p>
<p>int c=14; // digital PIN 14 for segment c</p>
<p>int d=13; // digital PIN 13 for segment d</p>
<p>int e=12; // digital PIN 12 for segment e</p>
<p>int f=18; // digital PIN 18 for segment f</p>
<p>int g=19; // digital PIN 19 for segment g</p>
<p>int dp=15; // digital PIN 15 for segment dp</p>
<p>void digital_0(void) // displays number 0</p>
<p></p>
<p>void digital_1(void) // displays number 1</p>
<p></p>
<p>void digital_2(void) // displays number 2</p>
<p></p>
<p>void digital_3(void) // displays number 3</p>
<p></p>
<p>void digital_4(void) // displays number 4</p>
<p></p>
<p>void digital_5(void) // displays number 5</p>
<p></p>
<p>void digital_6(void) // displays number 6</p>
<p></p>
<p>void digital_7(void) // displays number 7</p>
<p></p>
<p>void digital_8(void) // displays number 8</p>
<p></p>
<p>void digital_9(void) // displays number 9</p>
<p></p>
<p>void setup()</p>
<p></p>
<p>void loop()</p>
<p>}</p>
<p>//**********************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/b335b2775ab6af0b6928e0def5ee51fe.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/27bf38329849bcce29f2e3b7869e18d7.png)

![](/media/3ab9bd32802b1aeda78046692fe49a05.png)

6.  **Result**

After burning the project code, connecting the wires and powering on,
1-digit digital tube will display numbers from 9 to 0.
