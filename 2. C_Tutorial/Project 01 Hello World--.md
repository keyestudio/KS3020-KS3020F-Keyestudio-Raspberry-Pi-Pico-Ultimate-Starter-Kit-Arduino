# Project 01: Hello World

1.  **Introduction**
    
    For Raspberry Pi Pico beginners, we will start with some simple
    things. In this project, you only need a Raspberry Pi Pico and a USB
    cable to complete the "Hello World\!" project, which is a test of
    communication between Raspberry Pi Pico and the PC as well as a
    primary project.

2.  **Components**

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

3.  **Wiring Up**
    
    In this project, we use a USB cable to connect the Raspberry Pi Pico
    to the computer.
    
    ![](/media/8ea81d60b8e2132c358041235490b7d5.jpeg)

4.  **Test Code**

You can open the code we provide:

The code used in this project is saved in (path :) KS3020 Keyestudio
Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2.
C\_Tutorial\\2. Projects\\Project 01：Hello
World\\Project\_01\_Hello\_World。

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>* Filename : Hello World</p>
<p>* Description : Enter the letter R,and the serial port displays"Hello World".</p>
<p>* Auther :http//www.keyestudio.com</p>
<p>*/</p>
<p>char val;// defines variable "val"</p>
<p>void setup()</p>
<p></p>
<p>void loop()</p>
<p></p>
<p>}</p>
<p>}</p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading the code to the Raspberry Pi Pico, please check the
[configuration](javascript:;) of the Arduino IDE.

Click“**Tools**”，confirm the board type and port as follows:

![](/media/ca4f1e99c12f82ef6e79afeaa2d895a4.png)

Click![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the text code to the Raspberry Pi
Pico.

![](/media/177c38cfb651d6ec1ddf7e8c71b7df0a.png)

The code is uploaded successfully\!

![](/media/3fab055b4d5672d06db938ddbfbf4dd6.png)

5.  Text Result

After uploading successfully, click the icon![](/media/2f6bca56f724e45a855335cb53ae9b4e.png) to
enter the serial display.

Set baud rate to 115200 and type "R" in the text box. Click "Send", the
serial monitor will display "Hello World\!”.

![](/media/41f9f3168413965361dd4fa3da54f0ce.png)
