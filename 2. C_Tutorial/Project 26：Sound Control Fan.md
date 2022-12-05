# Project 26：Sound Control Stepper Motor

1.  **Introduction**

The sound sensor has a built-in capacitive electret microphone and power
amplifier. It can be used to detect the sound intensity of the
environment.

In this project, we use a sound sensor and a 130 motor to make a
voice-activated smart fan.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><p><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/8eeca2083cc744159c642a792b53eba2.jpeg" style="width:2.06806in;height:0.82361in" /></p></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.66944in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/2ea1614210807e59a5bc7223a6fa960b.png" style="width:1.46944in;height:1.09722in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:0.99028in;height:0.52986in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>Sound Sensor*1</td>
<td>USB Cable*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/6f668af8a0ecdffb5e0b64b21c0fd392.png" style="width:1.34167in;height:1.27708in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/2f77153d70a7cea1d49a75550e38eacf.png" style="width:1.31042in;height:1.11806in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/1fbdfe0569327d9a42600a54336bf7b5.png" style="width:1.38819in;height:1.15833in" /></td>
<td></td>
</tr>
<tr class="even">
<td>130 Motor Module*1</td>
<td>F-F Dupont Wires</td>
<td>M-F Dupont Wires</td>
<td></td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/8c5550065b07fbc3961172f93a6b40a0.png)

**Sound sensor** is usually used to detect the loudness of the sound in
the surroundings. Arduino can collect its output signal through the
analog input interface. The S pin is an analog output, which is the
real-time output of the microphone voltage signal. The sensor comes with
a potentiometer so you can adjust the signal strength. It also has two
fixing holes so that the sensor can be installed on any other equipment.
You can use it to make some interactive works, such as voice-operated
switches.

4.  **Read the Analog Value of the Sound Sensor**

We first use a simple code to read the analog value of the sound sensor
and print it to the serial monitor, please refer to the following wiring
diagram for the wiring.

![](/media/7bcfe48423953695c677c0c504d8f745.png)

![](/media/547329f9d46a7267798728d385b60912.png)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 26：Sound Control
Fan\\Project\_26.1\_Read\_Sound\_Sensor\_Analog\_Value

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Read Sound Sensor Analog Value</p>
<p>* Description : Basic usage of ADC</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ANALOG_IN 28 //the pin of the Sound Sensor</p>
<p>void setup() </p>
<p>//In loop() function, analogRead is called to get the ADC value of ADC0 and assign it to adcVal.</p>
<p>//Calculate the measured voltage value through the formula, and print these data through the serial port monitor.</p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/7365ca67e988ec577fe3231c9e3443b8.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/80cd719e3616f0335e5af898b50bbef5.png)

![](/media/c445ce7385f012d27c3fe14c0d0da73e.png)

Upload the code to the pico board, power up with a USB cable and open
the serial monitor and set baud rate to 115200.

The monitor will show analog values of the sound sensor.

![](/media/ae5f584b3e91adba3f7fc69b86ec68db.png)

5.  **Wiring Diagram：**

![](/media/631b461716fe53a2c1138f561acae5f7.png)

![](/media/340c224f0f71765f71d17afc623d595d.png)

6.  **Test Code：**（Note：![](/media/eadca6bc4da3706e43015b3e00afd512.png)you can set the thresh
    value in the code)

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 26：Sound Control
Fan\\Project\_26.2\_Sound\_Control\_Fan

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Sound Control Fan</p>
<p>* Description : Controlling the fan by Sound sensor.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ADC2 28 //the pin of the Sound sensor</p>
<p>#define PIN_Motorla 17 // the Motor_IN+ pin of the motor</p>
<p>#define PIN_Motorlb 16 // the Motor_IN- pin of the motor</p>
<p>#define PIN_LED 25 // // the pin of the built-in LED on the Pico board</p>
<p>void setup() </p>
<p>void loop() </p>
<p>else</p>
<p></p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/9bf6a4f3644b1428c1a7d75aafe12f8d.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/c673b24dfd353cb6ffad4a525f2baab6.png)

![](/media/8c3e2b9948b1b8bc450adbbde684e4a0.png)

7.  **Test Result**

Upload the code and power up. Clap your hands before the sound sensor,
when the sound intensity exceeds the thresh value, the fan will rotate
and the LED on the pico board will be on; on the contrary, the fan won’t
rotate and the LED will be off.
