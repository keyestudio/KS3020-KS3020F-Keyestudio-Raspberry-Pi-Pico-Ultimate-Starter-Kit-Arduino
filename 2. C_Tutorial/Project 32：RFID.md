# Project 32：RFID

1.  **Introduction**
    
    Nowadays, many residential districts use this function to open the
    door by swiping the card, which is very convenient. In this lesson,
    we will learn how to use RFID(radio frequency identification)
    wireless communication technology and read and write the key chain
    card (white card) and control the steering gear rotation by
    RFID-MFRC522 module.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/8eeca2083cc744159c642a792b53eba2.jpeg" style="width:2.06806in;height:0.82361in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.66944in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/dac05f32017287326cbdb88227a11366.png" style="width:1.63194in;height:0.80764in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/284218a1b5f1d347b1fd3c3119a34695.jpeg" style="width:0.8in;height:0.92361in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>RFID-MFRC522 Module*1</td>
<td>Key Chain*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/1fbdfe0569327d9a42600a54336bf7b5.png" style="width:1.38819in;height:1.15833in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/cd0bc424e9916881a1a903793821a042.png" style="width:1.25417in;height:1.04792in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/284218a1b5f1d347b1fd3c3119a34695.jpeg" style="width:0.64792in;height:0.98681in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:0.99028in;height:0.52986in" /></td>
</tr>
<tr class="even">
<td>F-F Dupont Wires</td>
<td>Servo*1</td>
<td>White Card*1</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**
    
    **RFID**：RFID (Radio Frequency Identification) is a wireless
    communication technology. A complete RFID system generally consists
    of a transponder and a reader. Usually we use tags as transponders,
    and each tag has a unique code attached to the object to identify
    the target object. The reader is a device that reads (or writes) tag
    information.
    
    Products derived from RFID technology can be divided into three
    categories: passive RFID products, active RFID products and
    semi-active RFID products. However, the passive RFID products are
    the earliest, most mature and most widely used products on the
    market, which can be seen everywhere in our daily life, such as bus
    card, meal card, bank card, hotel access card, etc., which are close
    contact identification. The main operating frequencies of the
    passive RFID products are 125KHZ(low frequency), 13.56mhz (high
    frequency), 433MHZ(UHF), and 915MHZ(UHF). The active and the
    semi-active RFID products operate at higher frequencies.
    
    The RFID module we use is a passive RFID product with a working
    frequency of 13.56MHz.  
    
    **RFID-RC522 Module：**The MFRC522 is a highly integrated
    reader/writer IC for 13.56MHz contactless communication. Its
    internal transmitter is capable of driving a read/write antenna ,
    which is designed to communicate with ISO/IEC 14443A /MIFARE cards
    and transponders without the need for additional active circuits
    . The receiving module provides an efficient implementation of
    demodulation and decoding of signals from ISO/IEC 14443 A /MIFARE
    compatible cards and transponders. The digital module manages
    complete ISO/IEC 14443A framing and error detection (parity and CRC)
    features.  
    
    The RFID module uses the MFRC522 as the control chip and adopts I2C
    (Inter-Integrated Circuit) interface.  
    
    ![](/media/5a19d0dd224c2cdc78871f11e8951045.png)
    
    Specifications:
    
    Operating voltage: DC 3.3V-5V
    
    Operating current: 13—100mA/DC 5V
    
    Idling current: 10-13mA/DC 5V
    
    Sleep current: \<80uA
    
    Peak current: \<100mA
    
    Operating frequency: 13.56MHz
    
    Maximum power: 0.5W
    
    Supported card types: mifare1 S50、mifare1 S70、mifare
    UltraLight、mifare Pro、mifare Desfire
    
    Environmental operating temperature: -20 to 80 degrees Celsius
    
    Environment storage temperature: -40 to 85 degrees Celsius
    
    Relative Humidity: 5% to 95%
    
    Data transfer rate: The maximum is 10Mbit/s.

4.  **Read the Card Number Value**
    
    We will read the UNIQUE ID number (UID) of the RFID card and
    identify its type . And display relevant information through the
    "Shell" window of Thonny IDE. The wiring diagram is as follows:

![](/media/28250821412f4d3368a25503a4c26cb1.png)

5.  **Adding the MFRC522\_I2C and Wire libraries：**

Open Arduino IDE and click“Sketch”→“Include Library”→“Add .zip
Library...”.

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2.
C\_Tutorial\\3.Libraries\\MFRC522\_I2C.Zip and click MFRC522\_I2C.Zip
and click“Open”.

![](/media/5ef23b23610c86577b3b7392084b8716.png)

![](/media/de656f10e99fc42e9e04756a8f395783.png)

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2.
C\_Tutorial\\3.Libraries\\Wire.Zip and click Wire.Zip and click“Open”

![](/media/82f6e711da312a9ea4b0a5f7c42f928b.png)

**RFID reads UID：**

After the library“**MFRC522\_I2C**”and **Wire**”are added，you can open
the code:

KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2.
Windows System\\2. C\_Tutorial\\2. Projects\\Project
32：RFID\\Project\_32.1\_RFID\_Read\_UID.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : RFID</p>
<p>* Description : RFID reader UID</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include &lt;Wire.h&gt;</p>
<p>#include "MFRC522_I2C.h"</p>
<p>// IIC pins default to GPIO20 and GPIO21 of Raspberry Pi Pico</p>
<p>// 0x28 is the i2c address of SDA, if doesn't match，please check your address with i2c.</p>
<p>MFRC522 mfrc522(0x28); // create MFRC522.</p>
<p>String rfid_str = "";</p>
<p>void setup() </p>
<p>void loop() </p>
<p>rfid_str = "";//String emptying</p>
<p>Serial.print(F("Card UID:"));</p>
<p>for (byte i = 0; i &lt; mfrc522.uid.size; i++) </p>
<p>Serial.println(rfid_str);</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/47d890506b8b76636f66a02a204b69d0.png)

![](/media/4a17cba5ea293c4ef3df57cc3014b7bb.png)

![](/media/224397b2e111aa9b4c0871e423c77d5d.jpeg)

Upload the code to the pico board, power up with a USB cable and open
the serial monitor and set baud rate to 115200.

Attach the key to the sensing area blank card, the monitor will show
information as follows:

![](/media/bbbeffbb074de316656963281cdb4943.png)

Note: the door card value and key chain value may be different for
different RRFID -RC522 door cards and key chains.  

6.  **Circuit Diagram and Wiring diagram**
    
    Now we use a RFID-RC522 module, door card/key chain and servo to
    simulate an intelligent access control system. When the door card is
    close to the RFID-RC522 module induction area, the servo rotates.
    Wiring according to the figure below:
    
    ![](/media/90df7d2a2da546f184e7e76bff5fedf1.png)

7.  **Adding library MFRC522\_I2C，Wire and Servo：**
    
    If both of them are added, just skip this step,.

Add the Servo library：

Open Arduino IDE，click“Sketch”→“Include Library”→“Add .zip Library...”

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\3.Libraries\\
Servo.Zip, click Servo.Zip and“Open”

![](/media/8d580f9d67946706c0b184b5953ca89a.png)

![](/media/5bcdba9b9923a2ec5d15f967d41e2a48.png)

Add the library MFRC522\_I2C and Wire:

If you add MFRC522\_I2Cand Wire, you don’t need to add them.

**7. Test Code：**

Go to the code KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate
Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project
32：RFID\\Project\_32.2\_RFID\_Control\_Servo

**Values detected by the RFID-MFRC522 and the blank card are
different.**

**Replace values in the code with values read by the RFID-MFRC522 module
and the blank card. Otherwise, the servo will not be controlled.**

**For example, replace values marked with red boxes with values of
RFID-MFRC522 and blank card:你把程序代码**![](/media/85170ea6c47d9350dd05efa60be8c808.png)

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>* Filename : RFID mfrc522 Control Servo</p>
<p>* Description : RFID controlled steering gear simulated door opening</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include &lt;Servo.h&gt;</p>
<p>#include &lt;Wire.h&gt;</p>
<p>#include &lt;MFRC522_I2C.h&gt;</p>
<p>MFRC522 mfrc522(0x28);</p>
<p>Servo myservo;</p>
<p>String rfid_str = "";</p>
<p>void setup() </p>
<p>void loop() </p>
<p>rfid_str = ""; //String emptying</p>
<p>Serial.print(F("Card UID:"));</p>
<p>for (byte i = 0; i &lt; mfrc522.uid.size; i++) </p>
<p>Serial.println(rfid_str);</p>
<p>if (rfid_str == "93adf720" || rfid_str == "39b646c2") </p>
<p>}</p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/8d37426d965d16b791308dec8c69ccbc.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/fd4190ca826e7c250946ff26d8beeedb.png)

![](/media/e5d9ee6235e498f47dee82b704eeb787.jpeg)

8.  **Test Result：**

Upload the code to the pico board, power up with a USB cable and open
the serial monitor and set baud rate to 115200.

When you use the key to open the door, the monitor will show information
of the blank card and the key chain and“open the door”

![](/media/3a125fc98b567c34b02285caf111e3f1.png)
