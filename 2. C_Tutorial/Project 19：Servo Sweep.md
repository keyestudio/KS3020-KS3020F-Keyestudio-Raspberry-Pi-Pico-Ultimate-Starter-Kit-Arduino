# Project 19：Servo Sweep

1.  **Introduction**

Servo is a kind of motor that can rotate very precisely. It has been
widely used in toy cars, RC helicopters, airplanes, robots, etc. In this
project, we will use the pico board to control the rotation of the
servo.

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
<td>Raspberry Pi Pico Expansion Board*1</td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/cd0bc424e9916881a1a903793821a042.png" style="width:1.25417in;height:1.04792in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/c801a7baee258ff7f5f28ac6e9a7097b.png" style="width:0.84722in;height:0.81389in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>Servo*1</td>
<td>Jumper Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

**3. Component Knowledge**

**Servo:**

![](/media/99830768916233a9c5900ac399006c17.png)

The servo is a kind of position servo driver, which is mainly composed
of housing, circuit board, coreless motor, gear and position detector.
The working principle is that the receiver or microcontroller sends a
signal to the servo, which has an internal reference circuit that
generates a reference signal with a period of 20ms and a width of 1.5ms,
and compares the DC bias voltage with the voltage of the potentiometer
to output voltage difference. The IC on the circuit board determines the
direction of rotation, and then drives the coreless motor to start
rotation and transmits the power to the swing arm through the reduction
gear, while the position detector sends back a signal to determine
whether it has reached the positioning. It is suitable for those control
systems that require constant change of angle and can be maintained.
When the motor rotates at a certain speed, the potentiometer is driven
by the cascade reduction gear to rotate so that the voltage difference
is 0 and the motor stops rotating. The angle range of general servo
rotation is 0 to 180 degrees.

The pulse period for controlling the servo is 20ms, the pulse width is
0.5ms to 2.5ms, and the corresponding position is -90° to +90°. The
following is an example of a 180 degree servo.

![](/media/708316fde05c62113a3024e0efb0c237.jpeg)

Servo motors have many specifications, but they all have three
connecting wires, which are brown, red, and orange (different brands may
have different colors). The brown is GND, the red is the positive power
supply, and the orange is the signal line.

![](/media/35084ae289a08e35bdb8c89ceb134ba4.png)

**4. Wiring Diagram**

The supply voltage should be 3.3V-5V. Make sure you don't get any errors
when connecting the servos to the power supply

![](/media/64a80947d0cd45b50d4bd1d125509bbe.png)

5.  **Adding the Servo library：**

If you added the **Servo library,** just skip this step.

Method 1：

Search Servo, select Servo and click Update.

![](/media/8f126fb4b3d1607827dc402a2bc81586.png)

![](/media/7c8465d1b05e02add0178c67a7c2d349.png)

Method 2：

Open Arduino IDE，click“Sketch”→“Include Library”→“Add .zip Library...”.

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\3.
Libraries\\Servo.Zip. Click“Servo.Zip”and“Open”.

![](/media/c2f8296dc71b80455b5a2bbe34ba70fd.png)

![](/media/434892e57944ad4104863d97eb614690.png)

6.  **Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 19：Servo Sweep\\Project\_19\_Servo\_Sweep.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Servo Sweep</p>
<p>* Description : Control the servo motor for sweeping</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include &lt;Servo.h&gt;</p>
<p>#define servoPin 16</p>
<p>Servo myServo; // create servo object to control a servo</p>
<p>int pos = 0; // variable to store the servo position</p>
<p>void setup() </p>
<p>void loop() </p>
<p>for (pos = 180; pos &gt;= 0; pos -= 1) </p>
<p>}</p>
<p>//********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/e3c88fba045d87fcfb4982ff3b807a11.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/cf16cc3c8fbde83667706d2ae27080fe.png)

![](/media/bfcb7b427f0bccfad426e9bb0307fe67.png)

**7. Test Result：**

Upload the code and power up with a USB cable. The servo will rotate
from 0° to 180°, then from 180° to 0° .

![](/media/c5250405a4290ecb2d758ff1097310c7.png)
