# Project 22: Dimming Light

1.  **Introduction**

A potentiometer is a three-terminal resistor with a sliding or rotating
contact that forms an adjustable voltage divider. It works by varying
the position of a sliding contact across a uniform resistance. In a
potentiometer, the entire input voltage is applied across the whole
length of the resistor, and the output voltage is the voltage drop
between the fixed and sliding contact.

In this project, we are going to learn how to use Arduino to read the
values of the potentiometer, and make a dimming lamp.

**2. Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b1265f71184b5d144248ea3e847a18c9.jpeg" style="width:1.75486in;height:0.69861in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/03ab81e8b4f09287d2781ef0fd297f85.png" style="width:0.70556in;height:1.08125in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/ef77f5a64c382157fc2dea21ec373fef.png" style="width:0.29514in;height:1.25903in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>Potentiometer*1</td>
<td>Red LED*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.59028in;height:1.44583in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/845d05a6108b1662b828610ba9dcb788.png" style="width:0.25833in;height:1.13681in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.77222in;height:0.77986in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>Breadboard*1</td>
<td>200Ω Resistor*1</td>
<td>Jumper Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

2.  **Component Knowledge**

![](/media/c397aba3de644bb70ffa7a9139a5499e.png)

**Adjustable potentiometer:** It is a kind of resistor and an analog
electronic component, which has two states of 0 and 1(high level and low
level). The analog quantity is different, its data state presents a
linear state such as 0 to 1023.

3.  **Read the Potentiometer Value**

We connect the adjustable potentiometer to the analog pin of Arduino to
read its value. Please refer to the following wiring diagram for wiring.

![](/media/b8ee6320bce8729a4309857f257d30ec.png)

![](/media/cb970a340d830569e9ac4462a1318e44.png)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 22：Dimming
Light\\Project\_22.1\_Read\_Potentiometer\_Analog\_Value.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Read Potentiometer Analog Value</p>
<p>* Description : Basic usage of ADC</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ANALOG_IN 26 //the pin of the Potentiometer</p>
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

![](/media/232e0d578815899b74144dac8ca37a76.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/e50da15f9b592b4f0d001d8019514a34.png)

![](/media/9c869ac15307471ec7b9324733edc8e8.png)

Upload the code , connect the wires and power on first. Then open the
serial monitor, set the baud rate to 115200. The serial monitor window
will print out the ADC value and voltage value of the potentiometer.
When moving the knob of the potentiometer is turned, the ADC value and
voltage value will change. As shown below:

![](/media/b578ae0004b44405bac340bc62138a80.png)

**Circuit diagram and wiring diagram:**

In the previous step, we read the ADC value and voltage value of the
potentiometer. Then we need to convert the ADC value into the brightness
of the LED to make a light with adjustable brightness.

As shown below:

![](/media/66f721b77035d40556c873e0c4577b4a.png)

![](/media/93b03f3cdc8af506d9035b748839ac33.png)

**Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 22：Dimming Light\\Project\_22.2\_Dimming\_Light

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Dimming Light</p>
<p>* Description : Controlling the brightness of LED by potentiometer.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ADC0 26 //the pin of the potentiometer</p>
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

![](/media/cd2d6e4bee5eda853fd556262e31a2f1.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/0205da9432a26536df81d6f0eaeadeef.png)

![](/media/253f62831ea3f689bd39036b8fa92be1.png)

**Test Result:**

Upload the code to Raspberry Pi Pico, change the input voltage of GP26
by turning the potentiometer.

Raspberry Pi Pico changes the output voltage of GP16 according to this
voltage value, thereby changing the brightness of the LED.

![](/media/eca30dead3f4923afa0dcb0306db2319.jpeg)
