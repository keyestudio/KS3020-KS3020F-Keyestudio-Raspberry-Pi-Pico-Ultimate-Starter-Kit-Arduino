# Project 02: Onboard LED Flashing


**1. Description：**

There is an onboard LED in Raspberry Pi Pico,which is a GP25 pin
attached to the Raspberry Pi Pico. In this project, we will learn the
effect of making the onboard LED blink.

**2. Components**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/8ea81d60b8e2132c358041235490b7d5.jpeg" style="width:2.52639in;height:1.07222in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/3bdcc62cfa661d2b860a76e28537e21e.png" style="width:1.41667in;height:0.76042in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Wiring up**
    
    In this project, Raspberry Pi Pico is connected to a computer using
    a USB cable. 

![](/media/8ea81d60b8e2132c358041235490b7d5.jpeg)

4.  Test Code：

The onboard LED of Raspberry Pi Pico is controlled by GP25. When the
GP25 outputs high, the LED will be on; when outputting LOW, the LED will
be off.

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 02: Onboard LED
flashing\\Project\_02\_Onboard\_LED\_Flashing.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Onboard LED flashing</p>
<p>* Description : Make an led blinking.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define LED_BUILTIN 25</p>
<p>// the setup function runs once when you press reset or power the board</p>
<p>void setup() </p>
<p>// the loop function runs over and over again forever</p>
<p>void loop() </p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/2fdcbda97a25faff38c97fe9e9eaa912.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi
Pico board

![](/media/6b969a7dcb03845a0a1ba591c00efcac.png)

![](/media/655fba85319a8194349ba1bdfee97fac.png)

**5. Test Result**

After the project code was uploaded successfully, the LED of Raspberry
Pi Pico started flashing

![](/media/529c3be102eb7414ac1e5e66fb203b6e.png)
