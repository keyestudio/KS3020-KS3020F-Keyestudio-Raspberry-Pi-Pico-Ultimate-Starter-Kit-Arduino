# Project 29：Temperature Humidity Meter 

1.  **Introduction**

In winter, the humidity in the air is very low, that is, the air is very
dry. Coupled with the cold, the human skin is prone to crack from
excessive dryness. Therefore, you need to use a humidifier to increase
the humidity of the air at home. But how do you know that the air is too
dry? Then you need equipment to detect air humidity.

In this lesson, we will learn how to use the XHT11 temperature and
humidity sensor. We use the sensor to create a thermohygrometer and also
combined with an LCD\_128X32\_DOT to display the temperature and
humidity values.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b1265f71184b5d144248ea3e847a18c9.jpeg" style="width:1.75486in;height:0.69861in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/34bafe8113e2db36c8f0c8492b835474.png" style="width:1.27292in;height:0.96111in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/9232141f8a3166a8a6cdd43b78edd4e3.png" style="width:1.29722in;height:0.625in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Temperature and Humidity sensor*1</td>
<td>LCD 128X32 DOT*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/f1aed48e2c02214415853ad2358f3744.png" style="width:0.97569in;height:0.82431in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/f1aed48e2c02214415853ad2358f3744.png" style="width:0.97569in;height:0.82431in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.275in;height:0.68264in" /></td>
</tr>
<tr class="even">
<td>20CM M-F Dupont Wires</td>
<td>10CM M-F Dupont Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/34bafe8113e2db36c8f0c8492b835474.png)

**XHT11 temperature and humidity sensor:** It is a temperature and
humidity composite sensor with calibrated digital signal output. Its
accuracy humidity is ±5%RH, temperature is ±2℃. Range humidity is 20 to
90%RH, and temperature is 0 to 50℃. The XHT11 temperature and humidity
sensor applies dedicated digital module acquisition technology and
temperature and humidity sensing technology to ensure extremely high
reliability and excellent long-term stability of the product. The XHT11
temperature and humidity sensor includes a resistive-type humidity
measurement and an NTC temperature measurement component, which is very
suitable for temperature and humidity measurement applications where
accuracy and real-time performance are not required.

The operating voltage is in the range of 3.3V to 5.5V.

XHT11 has three pins, which are VCC, GND, and S. S is the pin for data
output, using serial communication.

**Single bus format definition:**

<table>
<tbody>
<tr class="odd">
<td><strong>Description</strong></td>
<td><strong>Definition</strong></td>
</tr>
<tr class="even">
<td>Start signal</td>
<td>Microprocessor pulls data bus (SDA) down at least 18ms for a period of time(Maximum is 30ms), notifying the sensor to prepare data.</td>
</tr>
<tr class="odd">
<td>Response signal</td>
<td>The sensor pulls the data bus (SDA) low for 83µs, and then pulls up for 87µs to respond to the host's start signal.</td>
</tr>
<tr class="even">
<td>Humidity</td>
<td>The high humidity is an integer part of the humidity data, and the low humidity is a fractional part of the humidity data.</td>
</tr>
<tr class="odd">
<td>Temperature</td>
<td>The high temperature is the integer part of the temperature data, the low temperature is the fractional part of the temperature data. And the low temperature Bit8 is 1, indicating a negative temperature, otherwise, it is a positive temperature.</td>
</tr>
<tr class="even">
<td>Parity bit</td>
<td>Parity bit=Humidity high bit+ Humidity low bit+temperature high bit+temperature low bit</td>
</tr>
</tbody>
</table>

**Data sequence diagram:**

When MCU sends a start signal, XHT11 changes from the
low-power-consumption mode to the

high-speed mode, waiting for MCU completing the start signal. Once it is
completed, XHT11 sends a response signal of 40-bit data and triggers a
signal acquisition. The signal is sent as shown in the figure.

![](/media/933ac5e5a5e921d4b16c7c48091ba75a.png)

Combined with the code, you can understand better.

The XHT11 temperature and humidity sensor can easily add temperature and
humidity data to your DIY electronic projects. It is perfect for remote
weather stations, home environmental control systems, and farm or garden
monitoring systems.

Specification:

Working voltage: +5V

Temperature range: 0°C to 50°C, error of ± 2°C

Humidity range: 20% to 90% RH,± 5% RH error

Digital interface

Schematic diagram:

![](/media/53fa034cbbcec22579b2bdf8252c90cd.emf)

4.  **Read the Value**

First we learned how to use the serial monitor to print the values of
the XHT11 sensor. Please connect the wires according to the wiring
diagram below.

![](/media/c3b585b4747d3ba04be7af544bbbe27c.png)

![](/media/751a9a67b2657cac8dfaddf451e7b74a.png)

**Adding the DHT library：**

Open Arduino IDE and click“Sketch”→“Include Library”→“Add .zip
Library...”.

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\3.
Libraries\\DHT.Zip, click “DHT.Zip”then“Open”

![](/media/03ba36d5d4cffb455b8777a0552e261d.png)

![](/media/ca21504b2a9d070dbf40c0adf4f1004b.png)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 29：Temperature Humidity
Meter\\Project\_29.1\_Detect\_Temperature\_Humidity

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Temperature and Humidity Sensor</p>
<p>* Description : Use DHT11 to measure temperature and humidity.Print the result to the serial port.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>//Before using dht11, we need to include a header file.</p>
<p>//Apply for a DHT object and define the pin controlling DHT as GPIO22.</p>
<p>#include &lt;dht.h&gt;</p>
<p>dht DHT;</p>
<p>#define DHT11_PIN 22</p>
<p>void setup()</p>
<p>void loop()else</p>
<p>delay(1000);</p>
<p>}</p>
<p>//********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/21a5ae8bb978b8c9ae94eff7452f84fc.png)

![](/media/9a02f56eba0b2c528110effd3f12306f.png)

![](/media/a1f77f76c33efb8340e7b8247832cd6b.png)

Upload the code to the pico board, power up with a USB cable and open
the serial monitor and set baud rate to 115200.

You will see the current temperature and humidity value detected by the
sensor

![](/media/c2e4e1444c841ffe08dc07eb1bef81d9.png)

5.  **Circuit Diagram and Wiring Diagram**

Now we start printing the value of the XHT11 temperature and humidity
sensor with LCD screen. We will see the corresponding values on the LCD
screen. Let's get started with this project. Please follow the wiring
diagram below.

Note: You would better use the 10CM short male-to-female DuPont wire to
connect LCD\_128X32\_DOT. The 20cm M-F Dupont wire is not proper.

![](/media/d78889590f1945eec0125ee7dc250d73.png)

![](/media/78cb8eb87aa36af901a7a839fbf7eb10.png)

6.  **Test Code：**
    
    If the library DHT and lcd128\_32\_io are added, just skip this
    step.
    
    If not, just follow the instruction above.

You can open the code we provide:

Go to the folder

KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2.
Windows System\\2. C\_Tutorial\\2. Projects\\Project 29：Temperature
Humidity Meter\\Project\_29.2\_Temperature\_Humidity\_Meter

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Temperature Humidity Meter</p>
<p>* Description : LCD displays the value of temperature and humidity.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>//Before using dht11, we need to include a header file.</p>
<p>//Apply for a DHT object and define the pin controlling DHT as GPIO22.</p>
<p>#include &lt;dht.h&gt;</p>
<p>dht DHT;</p>
<p>#define DHT11_PIN 22</p>
<p>//the Library of LCD128_32 and lCD128 *32 pin</p>
<p>#include "lcd128_32_io.h"</p>
<p>lcd lcd(20, 21); //Create lCD128*32 pin，sda-&gt;20， scl-&gt;21</p>
<p>void setup()</p>
<p>char string[10];</p>
<p>//lcd displays humidity and temperature values</p>
<p>void loop()</p>
<p>//********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/723ac8e28d65fff7fff9d090caaca95c.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/69e164ecbfb11724656f3467f34c6528.png)

![](/media/bc27e4f5452b71d32f197d7b45347d30.png)

7.  **Test Result：**

Upload the code to the pico board and power up. The LCD\_128X32\_DOT
displays temperature and humidity in the current environment.
