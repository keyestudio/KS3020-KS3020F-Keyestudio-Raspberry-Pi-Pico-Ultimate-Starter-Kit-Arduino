# Project 17： I2C 128×32 LCD

1.  **Introduction**
    
    We can use modules such as monitors to do various experiments in
    life. You can also DIY a variety of small objects. For example, you
    can make a temperature meter with a temperature sensor and display,
    or make a distance meter with an ultrasonic module and display.
    
    In this project, we will use the LCD\_128X32\_DOT module as a
    display and connect it to the Plus control board. The pico board
    will be used to control the LCD\_128X32\_DOT display to show various
    English characters, common symbols and numbers.

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b1265f71184b5d144248ea3e847a18c9.jpeg" style="width:1.75486in;height:0.69861in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/2c2645e94a00867ac23e8a022f0a631a.png" style="width:1.45972in;height:0.70347in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7d0fe143a486a8a8955e70202b4e5204.png" style="width:1.73958in;height:0.52014in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.275in;height:0.68264in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>LCD_128X32_DOT*1</td>
<td>10CM M-F Dupont Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

2.  **Components Required**

3.  **Component Knowledge**
    
    ![](/media/2c2645e94a00867ac23e8a022f0a631a.png)

**LCD\_128X32\_DOT:** It is an LCD module with 128\*32 pixels and its
driver chip is ST7567A. The module uses the IIC communication mode,
while the code contains a library of all alphabets and common symbols
that can be called directly. When using, we can also set it in the code
so that the English letters and symbols show different text sizes.

**Schematic diagram:**

![](/media/5451aed32bc5b7b30fbd5613ad09a65b.png)

**Features:**

Pixel：128\*32 character

Operating voltage(chip)：4.5V to 5.5V

Operating current：100mA (5.0V)

Optimal operating voltage(module):5.0V

4.  **Connection Diagram**
    
    **Attention: You must use a 10CM short male-to-female DuPont cable
    to connect the LCD\_128X32\_DOT, and the LCD\_128X32\_DOT will
    display normally; otherwise, using a 20CM long male-to-female DuPont
    cable may cause the LCD\_128X32\_DOT to display abnormally.**

![](/media/82aae0a70e5628c53d7f81f7730cf79a.png)

**5. Adding the lcd128\_32\_io library：**

We need the **lcd128\_32\_io library.** You can add it as follows:

Open the Arduino IDE，click“Sketch”→“Include Library”→“Add .zip
Library...”.

Then go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\3.
Libraries\\LCD\_128X32.Zip，

Click LCD\_128X32.Zip，the click“Open”

![](/media/9d88beca6a704f06356e2584f231c70a.png)

![](/media/10f94cc56656e117574dee83c7ce444f.png)

5.  **Test Code：**

After adding the **lcd128\_32\_io library, you can open the code we
provide;**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 17： I2C 128×32 LCD\\Project\_17\_I2C\_128\_32\_LCD

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : LCD 128*32</p>
<p>* Description : LCD 128*32 display string</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include "lcd128_32_io.h"</p>
<p>//Create lCD128 *32 pin，sda---&gt;20， scl---&gt;21</p>
<p>lcd lcd(20, 21);</p>
<p>void setup() </p>
<p>void loop() :;'|?,.~\\[]");</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/cf8c62accd6ac07f9d3a5cfa5b31a7bd.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/145074e8531c25b1f982b42bc79dd962.png)

![](/media/3bfc89e3c36cf32916a5b5b33c8b41b6.png)

**6. Test Result：**

Upload the test code, wire up and power on, the LCD module display will
show "KEYESTUDIO" at the first line."ABCDEFGHIJKLMNOPQR" will be
displayed at the second line. "123456789 + - \* / \<\> = $ @ " will
shown at the third line and "% ^ & () {} :; '|?,. \~ \\\\ \[\] " will be
displayed at the fourth line.
