# Project 18：Small Fan

1.  **Introduction**

In the hot summer, we need an electric fan to cool us down, so in this
project, we will use the Plus control board to control 130 motor module
and small blade to make a small fan.

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
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/a572bcde7a5e3bf01d273b3d9a024701.png" style="width:1.22222in;height:1.10903in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/70ceedcda00dab3b484e5eddbd0382de.png" style="width:1.43611in;height:1.21319in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>130 Motor Module*1</td>
<td>M-F Dupont Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/a572bcde7a5e3bf01d273b3d9a024701.png)

**130 motor module:** The motor control module uses the HR1124S motor
control chip, which is a single-channel H-bridge driver chip for DC
motor. The H-bridge driving part of the HR1124S features low
on-resistance PMOS and NMOS power tube. The low on-resistance ensures
low power loss of the chip, making the chip work safely for a longer
time. In addition, HR1124S has low standby current and low quiescent
current, which makes HR1124S easy to be used in toy scheme.

**Features:**

Working voltage: 5V

Working current: 200MA

Working power: 2W

Working temperature: -10℃\~ +50℃

**Schematic diagram:**

![](/media/ee2deb2ed7ae310b953ff178aff3d6c1.emf)

4.  **Circuit Diagram and Wiring Diagram**

![](/media/98c9335e5ef2e5304e2cddde04e6e168.png)

![](/media/aad9f071a4d7a6a9a62c2899c78822b8.png)

5.  **Test Code：**

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 18：Small Fan\\Project\_18\_Small\_Fan

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Small Fan</p>
<p>* Description : Fan clockwise rotation,stop,counterclockwise rotation,stop,cycle.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define Motorla 17 // the Motor_IN+ pin of the motor</p>
<p>#define Motorlb 16 // the Motor_IN- pin of the motor</p>
<p>void setup()</p>
<p>void loop()</p>
<p>//********************************************************************************</p></td>
</tr>
</tbody>
</table>

![](/media/31f44f604d7d525739079df0eeefadaf.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/a3d23191c514aac8127496546e93698a.png)

![](/media/1478ab9c8eea5ea5b404bdb718b17aad.png)

**6.Test Result**

Upload the code, power up via a USB cable. The fan will rotate clockwise
for 5s, stop for 2s, anticlockwise for 5s and stop for 2s.
