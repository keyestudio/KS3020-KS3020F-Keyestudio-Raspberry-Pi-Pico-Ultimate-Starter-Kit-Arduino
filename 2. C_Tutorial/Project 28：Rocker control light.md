# Project 28：Rocker control light

1.  **Introduction**

The joystick module is a component with two analog inputs and one
digital input. It is widely used in game operation, robot control, drone
control and other fields.

In this project, we will use a Raspberry Pi Pico and a joystick module
to control RGB. You can have a deeper understanding of the principle and
operation of the joystick module in practice.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b18fe281156b29c44796f72222718d58.jpeg" style="width:2.37431in;height:0.94514in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/d087b123748cbfb8ed9f517150db71c5.png" style="width:1.71042in;height:0.95139in" /></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td><blockquote>
<p>Raspberry Pi Pico Expansion Board*1</p>
</blockquote></td>
<td>Joystick Module*1</td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/af749ecbde89c728a8c63e6527781cac.png" style="width:0.16806in;height:0.93194in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/098a2730d0b0a2a4b2079e0fc87fd38b.png" style="width:1.22639in;height:0.49236in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/c801a7baee258ff7f5f28ac6e9a7097b.png" style="width:0.92778in;height:0.89167in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.275in;height:0.68264in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/f1aed48e2c02214415853ad2358f3744.png" style="width:1.21875in;height:1.02986in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e65c16153d0ca27891c8c08092d96d5a.png" style="width:0.47292in;height:1.15833in" /></td>
</tr>
<tr class="even">
<td>RGB LED*1</td>
<td>220ΩResistor*3</td>
<td>Jumper Wires</td>
<td>USB Cable*1</td>
<td>M-F Dupont Wires</td>
<td>Breadboard*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/d087b123748cbfb8ed9f517150db71c5.png)

**Joystick module**: It mainly uses PS2 joystick components. In fact,
the joystick module has 3 signal terminal pins, which simulate a
three-dimensional space. The pins of the joystick module are GND, VCC,
and signal terminals (B, X, Y). The signal terminals X and Y simulate
the X-axis and Y-axis of the space. When controlling, the X and Y signal
terminals of the module are connected to the analog port of the
microcontroller. The signal terminal B simulates the Z axis of the
space, it is generally connected to the digital port and used as a
button.

VCC is connected to the microcontroller power output VCC (3.3V or 5V),
GND is connected to the microcontroller GND, the voltage in the original
state is about 1.65V or 2.5V. In the X-axis direction, when moving in
the direction of the arrow, the voltage value increases, and the maximum
voltage can be reached. Moving in the opposite direction of the arrow,
the voltage value gradually decreases to the minimum voltage. In the
Y-axis direction, the voltage value decreases gradually as it moves in
the direction of the arrow on the module, decreasing to the minimum
voltage. As the arrow is moved in the opposite direction, the voltage
value increases and can reach the maximum voltage. In the Z-axis
direction, the signal terminal B is connected to the digital port and
outputs 0 in the original state and outputs 1 when pressed. In this way,
we can read the two analog values and the high and low level conditions
of the digital port to determine the operating status of the joystick on
the module.

**Features:**

Input Voltage：DC 3.3V \~ 5V

Output Signal：X/Y dual axis analog value +Z axis digital signal

[Range](javascript:;) [of](javascript:;) [Application](javascript:;)：Suitable
for control point coordinate movement in plane as well as control of two
degrees of freedom steering gear, etc.  

[product](javascript:;) [feature](javascript:;)s：Exquisite appearance,
joystick feel superior, simple operation, sensitive response, long
service life.  

4.  **Read the Value**

We have to use analog Raspberry Pi Pico pin IO to read the data from X
or Y pins, and use digital IO port to read the values of the button.
Please follow the wiring diagram below for wiring.

![](/media/36004a41553a2f413ba05775e9b696eb.png)

![](/media/b843cdff62b3ccf3f3f028a834b468aa.png)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 28：Rocker control
light\\Project\_28.1\_Read\_Rocker\_Value

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Read Rocker Value</p>
<p>* Description : Read data from Rocker.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>int xyzPins[] = ; //x,y,z pins</p>
<p>void setup() </p>
<p>// In loop(), use analogRead () to read the value of axes X and Y</p>
<p>//and use digitalRead () to read the value of axis Z, then display them.</p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

![](/media/e28f4f91a9c83bb8c86a7c7111728af6.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/89d623db8d58a26e5153873ed9d0fe37.png)

![](/media/50c6f20491ad82bc75b924f32177a2d8.png)

Upload the code to the pico board, power up with a USB cable and open
the serial monitor and set baud rate to 115200.

The monitor will show values of the joystick module while moving the
joystick

![](/media/c8097bd115d4c564192c19a08df2702a.jpeg)

![](/media/9448c2e32f64ffa31f400e678f590d50.png)

5.  **Circuit Diagram and Wiring Diagram**

We just read the value of the joystick module. Now we need to do
something with the joystick module and RGB, connecting according to the
following diagram.

![](/media/000ec2c5dae0b0d5368569abbd026f35.png)

![](/media/68601044f75ee6840f0b97cad9bea891.png)

6.  **Test Result：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 28：Rocker control
light\\Project\_28.2\_Rocker\_Control\_Light

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Rocker Control Light</p>
<p>* Description : Control RGB to light different colors by Rocker.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>int xyzPins[] = ; //x,y,z pins</p>
<p>int ledPins[] = ; //define red, green, blue led pins</p>
<p>void setup() </p>
<p>}</p>
<p>// In loop(), use analogRead () to read the value of axes X and Y</p>
<p>//and use digitalRead () to read the value of axis Z, then display them.</p>
<p>void loop() </p>
<p>else if (xVal &gt; 800)</p>
<p>else if (yVal &lt; 200)</p>
<p>else if (yVal &gt; 800)</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/12bd0ec147c24544433f08e89901eb4e.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/61b34356cd2b1fd3036254729f208a7b.png)

![](/media/3f0777194062bfd4625ca8016fdc36b8.png)

7.  **Test Result：**

Upload the code and power up.

If you move the joystick to the left, the RGB will turn red. If moving
it to the right, the RGB will turn green; if moving it upward, the RGB
will show white; if moving it downward, the RGB will become into blue.

![](/media/9c2d0d8777200827b16c49b752d45c4c.jpeg)
