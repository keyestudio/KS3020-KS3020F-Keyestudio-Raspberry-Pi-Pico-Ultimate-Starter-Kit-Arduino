# Project 16：****Burglar Alarm

1.  **Introduction**

PIR motion sensor measures the thermal infrared (IR) light emitted by
moving objects. The sensor can detect the movement of people, animals,
and cars to trigger safety alarms and lighting. They are used to detect
movement and ideal for security such as burglar alarms and security
lighting systems. In this project, we will use a PIR motion sensor and
buzzer to detect sounds when people or animals approach.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b1265f71184b5d144248ea3e847a18c9.jpeg" style="width:1.75486in;height:0.69861in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/99272d75b3f952a0c2dd770e2f6f5a7c.png" style="width:1.25347in;height:0.94097in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/4b4f653a76a82a3b413855493cc58fba.png" style="width:1.0125in;height:0.86667in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/ef77f5a64c382157fc2dea21ec373fef.png" style="width:0.29514in;height:1.25903in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>PIR Motion Sensor*1</td>
<td>Active Buzzer*1</td>
<td>Red LED*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.59028in;height:1.44583in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/c80f7e0e045c10576b3120eea281502f.png" style="width:0.85486in;height:0.72917in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/845d05a6108b1662b828610ba9dcb788.png" style="width:0.25833in;height:1.13681in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.77222in;height:0.77986in" /></td>
</tr>
<tr class="even">
<td>Breadboard*1</td>
<td>F-F Dupont Wires</td>
<td>220Ω Resistor*1</td>
<td>USB Cable*1</td>
<td>Jumper Wires</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/9eb70172b21091e0a523d65bd209b641.png)

**PIR motion sensor:** The principle is that when certain crystals, such
as lithium tantalate and triglyceride sulfate, are heated, the two ends
of the crystal will generate an equal number of charges with opposite
signs. These charges can be converted into voltage output by an
amplifier. And the human body will release infrared light, although
relatively weak, but still can be detected. When the PIR motion sensor
detects the movement of a nearby person, the sensor signal terminal
outputs a high level 1. Otherwise, it outputs a low level 0. Pay special
attention that this sensor can detect people, animals and cars in
motion. People, animals and cars at rest cannot be detected. The maximum
detection distance is about 7 meters.

**Note:** Since vulnerable to radio frequency radiation and temperature
changes, the PIR motion sensor should be kept away from heat sources
like radiators, heaters and air conditioners, as well as direct
irradiation of sunlight, headlights and incandescent light.

**Features:**

Maximum input voltage: DC 3.3 \~ 5V

Maximum operating current: 50MA

Maximum power: 0.3W

Operating temperature: -20 \~ 85℃

Output high level is 3V, low level is 0V.

Delay time: about 2.3 to 3 seconds

Detection Angle: about 100 degrees

Maximum detection distance: about 7 meters

Indicator light output (when the output is high, it will light up)

Pin limiting current: 50MA

**Schematic diagram:**

![](/media/9e1ec604aa6f9d4a3c1fe41d4bccd699.png)

4.  **Circuit Diagram and Wiring Diagram**

![](/media/8af6a40d69c138216548320abc46ed35.png)

![](/media/d028bb819eed7cf3a08af69a47ecfce6.png)

5.  **Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 16：Burglar Alarm\\Project\_16\_Burglar\_Alarm

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Burglar Alarm</p>
<p>* Description : Human infrared sensor buzzer and LED to simulate burglar alarm.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define buzzerPin 19 // the pin of the buzzer</p>
<p>#define ledPin 22 // the pin of the PIR motion sensor</p>
<p>#define pirPin 2 // the pin of the PIR motion sensor</p>
<p>byte pirStat = 0; // the state of the PIR motion sensor</p>
<p>void setup() </p>
<p>void loop()</p>
<p></p>
<p>else </p>
<p>}</p>
<p>//*********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/df24d1e339847546799830ed605aa075.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/6107ae4bec989b865b86ca9e85080ec3.png)

![](/media/7c6522fbc3829e0dcea07284a22fb1d2.png)

6.  **Test Result：**

Upload the code and power up. The active buzzer will alarm and LED will
flash, if people are detected
