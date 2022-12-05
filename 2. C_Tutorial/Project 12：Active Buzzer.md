# Project 12 Active Buzzer

1.  **Introduction**

Active buzzer is a sound making element, widely used on computers,
printers, alarms, electronic toys, telephones, timers, etc. It has an
inner vibration source. In this project, we will use a PLUS control
board to control the active buzzer to buzz.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b18fe281156b29c44796f72222718d58.jpeg" style="width:2.37431in;height:0.94514in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td></td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/4b4f653a76a82a3b413855493cc58fba.png" style="width:0.86111in;height:0.70069in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.69375in;height:1.70139in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/c801a7baee258ff7f5f28ac6e9a7097b.png" style="width:0.77778in;height:0.74792in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>Active Buzzer*1</td>
<td>Breadboard *1</td>
<td>Jumper Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

**. Component Knowledge**

![](/media/11ec5ddc982db9928341e858aab94652.png)

The active buzzer inside has a simple oscillator circuit which can
convert constant direct current into a certain frequency pulse signal.
Once active buzzer receives a high level, it will sound. The passive
buzzer is an integrated electronic buzzer with no internal vibration
source. It must be driven by 2K to 5K square wave instead of a DC
signal. The appearance of the two buzzers is very similar, but passive
buzzers come with a green circuit board, and active buzzers come with a
black tape. Passive buzzers don't have positive pole, but active buzzers
have.

![](/media/0f9825969867ac2d65bb1a19ed0ad2ab.png)

4.  **Circuit Diagram and Wiring Diagram**
    
    ![](/media/48e73ef2d6090fe7cda58c385bad2ab2.png)

![](/media/56df73f7ac711e510b30164c5759615f.png)

Note:

1.  The power supply of the buzzer is 5V.
    
    With a 3.3V supply, the buzzer will work, but it will beep weakly.

2.  VUSB should be connected to the positive side of the USB cable, if
    it is connected to GND, it may burn out the computer or Raspberry Pi
    Pico. Also, be careful when wiring the Raspberry Pi Pico pins 36-40
    to avoid short circuits.
    
    3\. The positive pole (“+”/long pin) of the active buzzer is
    connected to pin 16, and the negative pole (short pin) is connected
    to GND.

<!-- end list -->

5.  **Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 12：Active Buzzer\\Project\_12\_Active\_Buzzer

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Active Buzzer</p>
<p>* Description : Active buzzer beeps.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define buzzerPin 16 //define buzzer pins</p>
<p>void setup ()</p>
<p></p>
<p>void loop ()</p>
<p></p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/1a73b75f48a39e224d112b33f4435e16.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/162bc2c5347709d616911b69bb5211ac.png)

![](/media/15450f19c2d0649b0f9def0cf8649c30.png)

6.  **Result**
    
    Upload the project code, wire up and power up, then the active
    buzzer buzzes.
