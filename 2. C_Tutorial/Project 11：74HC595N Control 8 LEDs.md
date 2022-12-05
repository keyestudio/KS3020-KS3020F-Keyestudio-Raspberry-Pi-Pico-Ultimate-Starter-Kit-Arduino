# Project 11：74HC595N Control 8 LEDs 

1.  **Introduction**

For a PLUS mainboard, it has only 22 I/O ports, how do we light up a
large number of LEDs? In this project, we will use 74HC595N to control 7
LEDs to save port resources.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b18fe281156b29c44796f72222718d58.jpeg" style="width:2.47083in;height:0.98403in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/f97e58ab51ec0a274ff3e72e08a7d55d.png" style="width:1.07847in;height:0.88611in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/3ec5906fad2172708d449390140f55e6.png" style="width:0.28056in;height:1.19722in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>74HC595N Chip*1</td>
<td>Red LED*8</td>
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
<td><p>USB</p>
<p>Cable*1</p></td>
</tr>
</tbody>
</table>

**74HC595N Chip:** To put it simply, 74HC595N chip is a combination of
8-digit shifting register, memorizer and equipped with tri-state
output.The shift register and the memorizer are synchronized to
different clocks, and the data is input on the rising edge of the shift
register clock SCK and goes into the memory register on the rising edge
of the memory register clock RCK. If the two clocks are connected
together, the shift register is always one pulse earlier than the
storage register. The shift register has a serial shift input (SI) and a
serial output (SQH) for cascading. The 8-bit shift register can be reset
asynchronously (low-level reset), and the storage register has an 8-bit
Three-state parallel bus output, when the output enable (OE) is enabled
(active low), the storage register is output to the 74HC595N pin (bus).

![](/media/858b189f06ad68afe051b15043b2affd.png)

**Pins**：

<table>
<tbody>
<tr class="odd">
<td>Pin13 OE</td>
<td>It is an output enable pin to ensure that the data of the latch is input to the Q0 to Q7 pins or not. When it is low, no high level is output. In this experiment, we directly connect to GND and keep the data output low.</td>
</tr>
<tr class="even">
<td>Pin14 SI</td>
<td>This is the pin for 74HC595 to receive data, i.e. serial data input, only one bit can be input at a time, then 8 times in a row, it can form a byte.</td>
</tr>
<tr class="odd">
<td>Pin10 SCLR</td>
<td>A pin to initialize the storage register pins. It initializes the internal storage registers at a low level. In this experiment, we connect VCC to maintain a high level.</td>
</tr>
<tr class="even">
<td>Pin11 SCK</td>
<td>The clock pin of the shift register. At the rising edge, the data in the shift register is shifted backward as a whole, and new data input is received.</td>
</tr>
<tr class="odd">
<td>Pin12 RCK</td>
<td>The clock input pin of the storage register . At the rising edge, the data is transferred from the shift register to the storage register. At this time, the data is output in parallel from the Q0 to Q7 ports.</td>
</tr>
<tr class="even">
<td>Pin9 SQH</td>
<td>It is a serial output pin dedicated for chip cascading to the SI terminal of the next 74HC595.</td>
</tr>
<tr class="odd">
<td>Q0--Q7(Pin 15,Pin1-7)</td>
<td>Eight-bit parallel output, can directly control the 8 segments of the digital tube.</td>
</tr>
</tbody>
</table>

VCC and GND are used used for chip power supply, and the operating
voltage is 5V.

3.  **Circuit Diagram and Wiring Diagram**

![](/media/1738cecf584c83b55370153ebc1688b7.png)

Note: Pay attention to the direction in which the 74HC595N chip is
inserted.

![](/media/a6d03617539b70d6d69fa7e9acb25be9.png)

![](/media/91833532723f4ee623902c0252092741.png)

4.  **Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 11：74HC595N Control 8
LEDs\\Project\_11\_74HC595N\_Control\_8\_LEDs.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : 74HC595N Control 8 LEDs</p>
<p>* Description : Use 74HC575N to drive ten leds to display the flowing light.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>int dataPin = 18; // Pin connected to DS of 74HC595(Pin14)</p>
<p>int latchPin = 20; // Pin connected to ST_CP of 74HC595(Pin12)</p>
<p>int clockPin = 21; // Pin connected to SH_CP of 74HC595(Pin11)</p>
<p>void setup() </p>
<p>void loop() </p>
<p>delay(100);</p>
<p>x = 0x80; //0b 1000 0000</p>
<p>for (int j = 0; j &lt; 8; j++) </p>
<p>delay(100);</p>
<p>}</p>
<p>void writeTo595(BitOrder order, byte _data ) </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/4137d7f74e43219e0f1476590862e3f1.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board.

![](/media/1c835fb367d4bce7d3f1bc572ab0e0c0.png)

![](/media/0c2518af4266e7ec9212a7484414839c.png)

5.  **Result**

Upload project code, wire up and power on, then you can see 8 LED flash
like a flowing light.
