# Project 09：4-Digit Digital Tube

1.  **Introduction**

The 4-digit 7-segment digital tube is a very practical display device,
and it is used for devices such as electronic clocks and score counters.
Due to the low price and it is easy to use, more and more projects will
use 4-digit 7-segment digital tubes. In this project, we will use the
PLUS control board to control a 4-bit 7-segment digital tube to create a
manual counter.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b18fe281156b29c44796f72222718d58.jpeg" style="width:2.37431in;height:0.94514in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Development Board*1</td>
<td></td>
</tr>
<tr class="odd">
<td><p><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/723dc2c4078b7d3f84b7f1ae76edbabe.png" style="width:1.85764in;height:0.95486in" /></p>
<p><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/723dc2c4078b7d3f84b7f1ae76edbabe.png" style="width:0in;height:0in" /><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/723dc2c4078b7d3f84b7f1ae76edbabe.png" style="width:0in;height:0in" /><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/723dc2c4078b7d3f84b7f1ae76edbabe.png" style="width:0in;height:0in" /></p></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/ece3c38dc9a9e6428b122481d6bb0d4d.png" style="width:1.30347in;height:1.10139in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>4-Digit Digital Tube Module*1</td>
<td>M-F Dupont Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/723dc2c4078b7d3f84b7f1ae76edbabe.png)

**TM1650 4-digit digital tube:** It is a 12-pin 4-digit tube display
module with clock dots. The driver chip is TM1650 which only needs 2
signal lines to enable the microcontroller to control the 4-digit
8-segment digital tube. The control interface level can be 5V or 3.3V.

**Specifications of 4-bit digital tube module:**

Working voltage: DC 3.3V-5V

Maximum current: 100MA

Maximum power: 0.5W

**Schematic diagram of 4-digit digital tube module:**

![](/media/5f400887c90fc00098a3e77beca656ef.png)

4.  **Wiring Diagram**

![](/media/80f5738cf821288fff6ba0aba11fc453.png)

![](/media/39b708e69b2fb10057b71fe2321584b2.png)

5.  **Adding the TM1650 library：**

If you added the **TM1650 library, just skip this step.**

**Add the library as follows:**

Open Arduino IDE，click“Sketch”→“Include Library”→“Add .zip Library...”.
Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\3.
Libraries\\TM1650.Zip and click TM1650.Zip and Open

![](/media/86b7835c0f2a2acf84e5da36d0175873.png)

![](/media/7d0985ab226d011bf4178956b2e5c3de.png)

**6.Test Code:**

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 09：4-Digit Digital
Tube\\Project\_09\_Four\_Digit\_Digital\_Tube

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : 4-Digit Digital Tube</p>
<p>* Description : Four Digit Tube displays numbers from 1111 to 9999.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include "TM1650.h"</p>
<p>#define CLK 21 //pins definitions for TM1650 and can be changed to other ports</p>
<p>#define DIO 20</p>
<p>TM1650 DigitalTube(CLK,DIO);</p>
<p>void setup()</p>
<p>DigitalTube.displayDot(1,true); // displays the first number</p>
<p>DigitalTube.displayDot(2,true);</p>
<p>DigitalTube.displayDot(3,true);</p>
<p>DigitalTube.displayDot(4,true);</p>
<p>DigitalTube.displayBit(3,0); //which number to display. bit=1-4, number=0-9</p>
<p>}</p>
<p>void loop()</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/70124ca783d5a47c96cd2d9b7935790b.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/e81624103dfac7ea400e2c6e364f6d21.png)

![](/media/bbaa6a71cfba7e57b2bab852f09a275b.png)

6.  **Result**

Upload the project code, wire up and power on, 4-digit digital tube
circularly displays numbers from 0000 to 9999.
