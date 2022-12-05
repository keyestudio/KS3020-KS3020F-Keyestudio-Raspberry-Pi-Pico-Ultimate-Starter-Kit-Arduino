# Project 34：IR Control Sound and LED

1.  **Introduction**

Infrared remote control is a low-cost, easy-to-use wireless
communication technology. IR light is very similar to visible light,
except that it has a slightly longer wavelength. This means that
infrared rays cannot be detected by the human eye, which is perfect for
wireless communication. For example, when you press a button on the TV
remote control, an infrared LED will switch on and off repeatedly at a
frequency of 38,000 times per second, sending information (such as
volume or channel control) to the infrared sensor on the TV.

We will first explain how common IR communication protocols work. Then
we will start this project with a remote control and an IR receiving
component.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/17098ffd05750eb6b34eb75b82fbb37a.jpeg" style="width:1.62292in;height:0.64653in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/355118d2d21e57840d34a30ec500a900.png" style="width:1.59028in;height:1.22431in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/88e6b057fb4b0c576c9b2111d15b26e5.png" style="width:1.14861in;height:0.48403in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/f1a86fc81ab4b043263ce7e01e14d470.png" style="width:0.23056in;height:1.27847in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/098a2730d0b0a2a4b2079e0fc87fd38b.png" style="width:1.22639in;height:0.49236in" /></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td><blockquote>
<p>Raspberry Pi Pico Expansion Board*1</p>
</blockquote></td>
<td>IR Receiver *1</td>
<td>RGB LED*1</td>
<td>220ΩResistor*3</td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/8a6fb37dedef748e6c2609bff5c64906.png" style="width:0.69792in;height:1.45764in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.5625in;height:1.30903in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/d1ea1bb2b2749820cab389d5b85b838b.png" style="width:0.66181in;height:0.79444in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/a22dac8c5edbe90e867cbb04769d1816.png" style="width:0.23194in;height:1.04028in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.90694in;height:0.90139in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:0.99028in;height:0.52986in" /></td>
</tr>
<tr class="even">
<td>IR Remote Controller*1</td>
<td>Breadboard*1</td>
<td>Passive Buzzer*1</td>
<td>10KΩResistor*1</td>
<td>Jumper Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

**IR Remote Controller**: It is a device that has a certain number of
buttons. Pressing different buttons causes the infrared transmitter
tubes at the front of the remote control to send infrared signals in
different codes. Infrared remote control technology is widely used, such
as TV, air conditioner and so on. Therefore, in today's technologically
advanced society, the infrared remote control technology makes it very
convenient for us to change TV programs and adjust the temperature of
the air conditioner.  

The remote control we used is as follows:

The infrared remote controller adopts NEC code and the signal cycle is
110ms.

![](/media/3c9d76cb0d24d9861811ce2cb0bb6ae4.png)

**IR Receiver:** It is a component that can receive infrared light,
which can be used to detect the infrared signal sent by the infrared
remote control. The infrared signal received by the infrared receiver
demodulation can be converted back to binary, then the information will
be passed to a microcontroller.

**Process Diagram：**

![](/media/3da1969e509f53706643c77d0534eb73.png)

NEC Infrared communication protocol：

NEC Protocol

To my knowledge the protocol I describe here was developed by NEC (Now
Renesas). I've seen very similar protocol descriptions on the internet,
and there the protocol is called Japanese Format.

I do admit that I don't know exactly who developed it. What I do know is
that it was used in my late VCR produced by Sanyo and was marketed under
the name of Fisher. NEC manufactured the remote control IC.

This description was taken from my VCR's service manual. Those were the
days, when service manuals were filled with useful information\!

Features

8 bit address and 8 bit command length.

Extended mode available, doubling the address size.

Address and command are transmitted twice for reliability.

Pulse distance modulation.

Carrier frequency of 38kHz.

Bit time of 1.125ms or 2.25ms.

Modulation

![](/media/da33571c6f0afb94b1ec1d91caba3edb.png)

The NEC protocol uses pulse distance encoding of the bits. Each pulse is
a 560µs long 38kHz carrier burst (about 21 cycles). A logical "1" takes
2.25ms to transmit, while a logical "0" is only half of that, being
1.125ms. The recommended carrier duty-cycle is 1/4 or 1/3

Protocol

![](/media/f970404e7bbfb5711fea5c776f689f3a.png)

The picture above shows a typical pulse train of the NEC protocol. With
this protocol the LSB is transmitted first. In this case Address $59 and
Command $16 is transmitted. A message is started by a 9ms AGC burst,
which was used to set the gain of the earlier IR receivers. This AGC
burst is then followed by a 4.5ms space, which is then followed by the
Address and Command. Address and Command are transmitted twice. The
second time all bits are inverted and can be used for verification of
the received message. The total transmission time is constant because
every bit is repeated with its inverted length. If you're not interested
in this reliability you can ignore the inverted values, or you can
expand the Address and Command to 16 bits each\!

Keep in mind that one extra 560µs burst has to follow at the end of the
message in order to be able to determine the value of the last bit.

![](/media/63364daf21e5522c64eb8dfa82f2cef2.png)

A command is transmitted only once, even when the key on the remote
control remains pressed. Every 110ms a repeat code is transmitted for as
long as the key remains down. This repeat code is simply a 9ms AGC pulse
followed by a 2.25ms space and a 560µs burst.

![](/media/afea92a3b5cc1aa2457d2b118b157c84.png)

Extended NEC protocol

The NEC protocol is so widely used that soon all possible addresses were
used up. By sacrificing the address redundancy the address range was
extended from 256 possible values to approximately 65000 different
values. This way the address range was extended from 8 bits to 16 bits
without changing any other property of the protocol.

By extending the address range this way the total message time is no
longer constant. It now depends on the total number of 1's and 0's in
the message. If you want to keep the total message time constant you'll
have to make sure the number 1's in the address field is 8 (it
automatically means that the number of 0's is also 8). This will reduce
the maximum number of different addresses to just about 13000.

The command redundancy is still preserved. Therefore each address can
still handle 256 different commands.

![](/media/2f78d1ce7f001926f6b90ad966796e91.png)

Keep in mind that 256 address values of the extended protocol are
invalid because they are in fact normal NEC protocol addresses. Whenever
the low byte is the exact inverse of the high byte it is not a valid
extended address.

4.  **Decoding：**

Wire up the pico board

![](/media/240a9b2efcdd0c0e7099ec5b69beaca6.png)

![](/media/a6a7f74730669dfa0272e9b5e88ac41e.png)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 34：IR Control Sound and
LED\\Project\_34.1\_Decoded\_IR\_Signal

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Decoded IR Signal</p>
<p>* Description : Decode the infrared remote control and print it out through the serial port.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include "IR.h"</p>
<p>#define IR_Pin 16</p>
<p>void setup() </p>
<p>void loop() </p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/c7ef23b49ff8da0fc3db0aebcd548c07.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/ef4c8440ed0c3a0f2a7f2ed638ab7ce1.png)

![](/media/fa1174cbab704954645afad2ce1c5281.png)

Upload the code to the pico board, power up with a USB cable and open
the serial monitor and set baud rate to 115200. Point the remote control
at the IR receiver, the monitor will show key values

![](/media/c8eaa6c1894aaebf907903cc0240bec8.png)

Code value of the remote control

![](/media/ebcf0cb2055f7784505f76ceeaef9f47.jpeg)

Circuit diagram and wiring diagram:

![](/media/6e2da9ed5d5bdc5b251348903a37e5c0.png)

![](/media/d170f9c106c16175d34f20fdaa0f8970.png)

5.  **Test Code**

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 34：IR Control Sound and
LED\\Project\_34.2\_IR\_Control\_Sound\_And\_LED

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : IR Control Sound And LED</p>
<p>* Description : Remote control RGB and Passive buzzer with infrared remote control.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include "IR.h"</p>
<p>#define irPin 16</p>
<p>#define R_Pin 19</p>
<p>#define G_Pin 18</p>
<p>#define B_Pin 17</p>
<p>#define buzzerPin 15</p>
<p>void setup() </p>
<p>void loop() </p>
<p>}</p>
<p>void handleControl(unsigned long value) </p>
<p>else if (value == 0xFF9867) // Receive the number '2'</p>
<p></p>
<p>else if (value == 0xFFB04F) // Receive the number '3'</p>
<p></p>
<p>else if (value == 0xFF30CF) // Receive the number '4'</p>
<p></p>
<p>else if (value == 0xFF18E7) // Receive the number '5'</p>
<p></p>
<p>else if (value == 0xFF7A85) // Receive the number '6'</p>
<p></p>
<p>else if (value == 0xFF10EF) // Receive the number '7'</p>
<p></p>
<p>else</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/a4e8740cf515459107ca1693ad949ec2.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/782c8df569b87a192bcd1a0106ae5147.png)

![](/media/cc4845cb5386c4685484c6f4d97460c1.png)

7.  **Test Result：**

Upload the code and power up. Press the key 1-7, the buzzer will emit
do, re, mi, fa, sol, la and si, at same time, the RGB will show red,
green, blue, yellow, dark red, blue-green and white color. If pressing
the rest of keys, the buzzer will stop playing and the RGB will be off

Note: you need to peel off the plastic film covered on the remote
control.

![](/media/3c9d76cb0d24d9861811ce2cb0bb6ae4.png)

IR.cpp

<table>
<tbody>
<tr class="odd">
<td><p>#include "IR.h"</p>
<p>int logList[32];</p>
<p>unsigned long startTime;</p>
<p>int endTime, end2Time;</p>
<p>int flagCode = 0;</p>
<p>int irPin;</p>
<p>bool irState = true;</p>
<p>void IR_Init(int pin) </p>
<p>void IR_Read() </p>
<p>intervalTime = lowTime - startTime;</p>
<p>while (digitalRead(irPin) == HIGH) </p>
<p>else if (num == 0 &amp;&amp; end2Time - endTime &gt; 300 &amp;&amp; end2Time - endTime &lt; 400) </p>
<p>return;</p>
<p>}</p>
<p>}</p>
<p>if (intervalTime &lt; 2000) </p>
<p>else </p>
<p>}</p>
<p>}</p>
<p>}</p>
<p>}</p>
<p>unsigned long IR_Decode(int &amp;code) </p>
<p>else </p>
<p>logList[i] = 0;</p>
<p>}</p>
<p>}</p>
<p>if (code == 2) </p>
<p>return irData;</p>
<p>}</p>
<p>void IR_Release()</p></td>
</tr>
</tbody>
</table>
