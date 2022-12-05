# Project 21: Relay

1.  **Introduction**
    
    In daily life, we generally use AC to drive electrical equipment,
    and sometimes we use switches to control electrical appliances. If
    the switch is directly connected to the AC circuit, once electricity
    leakage occurs, people are in danger. From a safety point of view,
    we specially designed this relay module with NO (normally open) and
    NC (normally closed) terminals. In this lesson we will learn a
    special and easy-to-use switch, which is the relay module.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><p><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/5207588df3059cf385957664d41e9ac6.jpeg" style="width:1.41806in;height:0.56458in" /></p></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bc08dc3772fc1fef6fa1e07bd81f6680.png" style="width:1.66806in;height:1.28403in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/1ea87894c6aa8d475203e447ad5e930a.png" style="width:1.27083in;height:0.68056in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/1fbdfe0569327d9a42600a54336bf7b5.png" style="width:1.38819in;height:1.15833in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.11528in;height:0.59722in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>Relay Module*1</td>
<td>M-F Dupont Wire</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**
    
    **Relay:** It is an "automatic switch" that uses a small current to
    control the operation of a large current.
    
    Input voltage：5V
    
    Rated load：5A 250VAC (NO/NC) 5A 24VDC (NO/NC)
    
    The rated load means that a 5V Arduino can be used to control a
    device with a 24V DC voltage or a 250V AC voltage.

![](/media/be1c90d2b52fc2489590e3f702a087bf.emf)

4.  **Schematic Diagram and Wiring Diagram**

![](/media/bfe4e5e68d12e715c50f8aa5797a689c.png)

![](/media/0e76ea13b2034301be2ecdfde7f21f1e.png)

5.  **Test Code：**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 21：Relay\\Project\_21\_Relay.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Relay</p>
<p>* Description : Relay turn on and off.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define Relay 16 // defines digital 16</p>
<p>void setup()</p>
<p></p>
<p>void loop()</p>
<p></p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/6f7d673ea84dcb3c1f4a9f45a120aede.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/0bb4f68dce4e2b0b93002183cf76a6a1.png)

![](/media/60d4972ad22ae3bd3a745e8c2db50d83.png)

6.  **Result**

Upload the code to successfully, wire up and power on, the relay will be
turned on (ON end is connected) for 1 second, and stop (NC end is
connected) for 1 seconds, circularly
