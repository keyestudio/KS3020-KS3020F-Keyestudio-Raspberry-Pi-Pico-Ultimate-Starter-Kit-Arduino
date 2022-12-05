# Project 20：Stepping Motor

1.  **Introduction**

Stepper motors are accurately positioned and are the most important
components in industrial robots, 3D printers, large lathes, and other
mechanical devices. In this project, we will use a stepper motor and a
clock paper card to make a clock model.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e4d763773ba5bc91a3df128e040f491e.jpeg" style="width:2.14792in;height:0.85556in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e0c3777cc7b4a2c6e400c07ef05c70dd.png" style="width:1.57917in;height:1.21528in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/6c9c142fb9187aeb8337493ca5dd5ee7.jpeg" style="width:1.56111in;height:1.03819in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>ULN2003 Stepper Motor Drive Board*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/8ebb14a35091dc8d02d95cb6748dd1e9.png" style="width:1.11389in;height:1.10208in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/70ceedcda00dab3b484e5eddbd0382de.png" style="width:1.03472in;height:1.22153in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:0.99028in;height:0.52986in" /></td>
</tr>
<tr class="even">
<td>Stepper Motor *1</td>
<td>M-F Dupont Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**
    
    ![](/media/8ebb14a35091dc8d02d95cb6748dd1e9.png)

**Stepper motor:** It is a motor controlled by a series of
electromagnetic coils. It can rotate by the exact number of degrees (or
steps) needed, allowing you to move it to a precise position and keep it
there. It does this by supplying power to the coil inside the motor in a
very short time, but you must always supply power to the motor to keep
it in the position you want. There are two basic types of stepping
motors, namely unipolar stepping motor and bipolar stepping motor. In
this project, we use a 28-BYJ48 unipolar stepper motor.

![](/media/bea0e202b7bfe23d1fdcdbbe996aa6da.jpeg)

**Working Principle:**

The stepper motor is mainly composed of a stator and a rotor. The stator
is fixed. As shown in the figure below, the part of the coil group A, B,
C, and D will generate a magnetic field when the coil group is
energized. The rotor is the rotating part. As follows, the middle part
of the stator, two poles are permanent magnets.

![](/media/32748e0804b1fff434181cb228b23242.png)

Single -phase four beat: At the beginning, the coils of group A are
turned on, and the poles of the rotor point at A coil. Next, the group A
coil are disconnected, and the group B coils are turned on. The rotor
will turn clockwise to the group B. Then, group B is disconnected, group
C is turned on, and the rotor is turned to group C. After that, group C
is disconnected, and group D is turned on, and the rotor is turned to
group D. Finally, group D is disconnected, group A is turned on, and the
rotor is turned to group A coils. Therefore, rotor turns 180° and
continuously rotates B-C-D-A, which means it runs a circle (eight
phase). As shown below, he rotation principle of stepper motor is A - B
- C - D - A.

You make order inverse(D - C - B - A - D .....) if you want to make
stepper motor rotate anticlockwise.

![](/media/b8ae50bbdee2dd5bc683e8c450baee6a.png)

Half-phase and eight beat: 8 beat adopts single and dual beat way，A - AB
- B - BC - C - CD - D - DA - A ...... ，rotor will rotate half phase in
this order. For example, when A coil is electrified，rotor faces to A
coil then A and B coil are connected, on this condition, the strongest
magnetic field produced lies in the central part of AB coil, which means
rotating half-phase clockwise.

**Stepper Motor Parameters:**

The rotor rotates one circle when the stepper motor we provide rotates
32 phases and with the output shaft driven by 1:64 reduction geared set.
Therefore the rotation (a circle) of output shaft requires 2048 phases

The step angle of 4-beat mode of 5V and 4-phase stepper motor is 11.25.
And the step angle of 8-beat mode is 5.625, the reduction ratio is 1:64.

**ULN2003Stepper Motor Drive Board:** It is stepper motor driver.

The following schematic diagram shows how to use the ULN2003 stepper
motor driver board interface to connect a unipolar stepper motor to the
pins of the Plus control board, and shows how to use four TIP120
interfaces.

![](/media/6fa632d2b70e97dd55565d23ec15d245.png)

4.  **Schematic Diagram and Wiring Diagram**
    
    ![](/media/ba02656bb1cb44ce8edb187a10dc7bef.png)

![](/media/6f72f7b5f6a520099d7714236372a9fe.png)

5.  **Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 20：Stepping Motor\\Project\_20\_Stepping\_Motor.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Drive Stepper Motor</p>
<p>* Description : Use ULN2003 to drive the stepper motor.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>// Conncet the port of the stepper motor driver</p>
<p>int outPorts[] = ;</p>
<p>void setup() </p>
<p>}</p>
<p>void loop()</p>
<p></p>
<p>//Suggestion: the motor turns precisely when the ms range is between 3 and 20</p>
<p>void moveSteps(bool dir, int steps, byte ms) </p>
<p>}</p>
<p>void moveOneStep(bool dir) </p>
<p>else </p>
<p>// Output singal to each port</p>
<p>for (int i = 0; i &lt; 4; i++) </p>
<p>}</p>
<p>void moveAround(bool dir, int turns, byte ms)</p>
<p>void moveAngle(bool dir, int angle, byte ms)</p>
<p>//********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/d186d166f9536d1ff7229f9fab41e5a1.png)

![](/media/42adcb67c506c7ecb29848d757cc16e1.png)

![](/media/50f642c3f5ebdc08e933b1cb1fcd9608.png)

**6. Result**

Upload the project code to the pico board, wire up and power on first.
The four LEDs D1D2D3D4 on the ULN2003 driving module will be turned on
and the stepper motor will rotate clockwise first, then counterclockwise

![](/media/8dc4a0547390e0108c3960c31d330ee7.png)
