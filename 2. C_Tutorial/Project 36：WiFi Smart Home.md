# Project 36：WiFi Smart Home

1.  **Introduction**
    
    In the previous project 34, we already knew how to connect the APP
    to WiFi and also use the APP to control the LED on and off on the
    pico board through WiFi for a simple experiment.
    
    In this project, we will use APP to control multiple sensors or
    modules through WiFi to achieve the effect of smart home.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b95461f3200b72ebb02ee422c2f6a91c.jpeg" style="width:1.85208in;height:0.7375in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e797e6a5335f0489e00f953fdc15d967.png" style="width:1.24722in;height:0.94167in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td>Temperature and Humidity Sensor*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/408f9f823aab6078768f08462eda209b.png" style="width:0.62014in;height:1.01875in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/54668bc6799d314c47c7ffd29dcaa013.jpeg" style="width:3.05486in;height:1.03194in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e3f6862e22c700010a497b3a794c3084.png" style="width:1.02708in;height:0.89028in" /></td>
</tr>
<tr class="even">
<td>ESP8266 Serial WIFI ESP-01*1</td>
<td>USB to ESP-01S WiFi Module Serial Shield*1</td>
<td>130 DC Motor Module*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/8a6ed6668f0d1812d09dd361388ae087.png" style="width:1.05694in;height:0.57292in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/41abce34fdbca029fdea842bba8208c0.png" style="width:0.63194in;height:1.25972in" /><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/989d26695fd03ea630b7fdf186ff78c1.png" style="width:2.10972in;height:1.25347in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/1fbdfe0569327d9a42600a54336bf7b5.png" style="width:1.38819in;height:1.15833in" /></td>
</tr>
<tr class="even">
<td>5V Relay Module*1</td>
<td>Mobile Phone/iPad*1</td>
<td>M-F Dupont Wires</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/1886ee7e1faeea2c093ae626e1b8baaf.png" style="width:1.05764in;height:0.82014in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/a02c930b533bca992b10c272b07b8b05.jpeg" style="width:1.13264in;height:0.62083in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:0.99028in;height:0.52986in" /></td>
</tr>
<tr class="even">
<td>Servo*1</td>
<td>Ultrasonic sensor*1</td>
<td>USB Cable*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.59028in;height:1.44583in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/c80f7e0e045c10576b3120eea281502f.png" style="width:0.85486in;height:0.72917in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.77222in;height:0.77986in" /></td>
</tr>
<tr class="even">
<td>Breadboard*1</td>
<td>F-F Dupont Wires</td>
<td>Jumper Wires</td>
</tr>
</tbody>
</table>

3.  **Plug the WiFi Module Serial Shield into the USB port of the
    computer**

<!-- end list -->

1.  Insert the ESP8266 serial WiFi ESP-01 module into the USB to ESP-01S
    WiFi module serial shield.
    
    ![](/media/a819a91a024eacd8fb5ffd368b7ccad2.png)

2.  First, turn the DIP switch on the USB to ESP-01S WiFi module serial
    shield to the UartDownload, and then insert the shield into the USB
    port of the computer.
    
    ![](/media/88aeb7b568eee84038260ae898070e60.jpeg)
    
    **3.ESP8266 Code：**

Note：open Arduino IDE, set the ESP8266 board type and COM ports. If you
don’t have wifi in your home, just open your hotspot of your cellphone
to connect with the device.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>ESP8266_Code</p>
<p>*/</p>
<p>// generated by KidsBlock</p>
<p>#include &lt;Arduino.h&gt;</p>
<p>#include &lt;ESP8266WiFi.h&gt;</p>
<p>#include &lt;ESP8266mDNS.h&gt;</p>
<p>#include &lt;WiFiClient.h&gt;</p>
<p>//#include &lt;WiFi.h&gt;</p>
<p>#ifndef STASSID</p>
<p>#define STASSID "ChinaNet-2.4G-0DF0" //the name of user's Wifi</p>
<p>#define STAPSK "ChinaNet@233" //the password of the user's wifi</p>
<p>#endif</p>
<p>const char* ssid = STASSID;</p>
<p>const char* password = STAPSK;</p>
<p>//IPAddress local_IP(192,168,4,22);</p>
<p>//IPAddress gateway(192,168,4,22);</p>
<p>//IPAddress subnet(255,255,255,0);</p>
<p>//</p>
<p>//const char *ssid = "ESP8266_AP_TEST";</p>
<p>//const char *password = "12345678";</p>
<p>WiFiServer server(80);</p>
<p>String unoData = "";</p>
<p>int ip_flag = 0;</p>
<p>int ultra_state = 1;</p>
<p>String ip_str;</p>
<p>void setup() ; //Start AP</p>
<p>// Serial.println("AP <a href="javascript:;">starting</a> <a href="javascript:;">success</a>");</p>
<p>//</p>
<p>// Serial.print("IP address: ");</p>
<p>// Serial.println(WiFi.softAPIP()); // Printing the IP Address</p>
<p>//</p>
<p>// WiFi.softAPsetHostname("myHostName"); //Set host name</p>
<p>// Serial.print("HostName: ");</p>
<p>// Serial.println(WiFi.softAPgetHostname()); //print host name</p>
<p>//</p>
<p>// Serial.print("mac Address: ");</p>
<p>// Serial.println(WiFi.softAPmacAddress()); //prnt mac add</p>
<p>WiFi.mode(WIFI_STA);</p>
<p>WiFi.begin(ssid, password);</p>
<p>while (WiFi.status() != WL_CONNECTED) </p>
<p>Serial.print("IP ADDRESS: ");</p>
<p>Serial.println(WiFi.localIP());</p>
<p>if (!MDNS.begin("esp8266")) </p>
<p>}</p>
<p>// Serial.println("mDNS responder started");</p>
<p>server.begin();</p>
<p>//Serial.println("TCP server started");</p>
<p>MDNS.addService("http", "tcp", 80);</p>
<p>ip_flag = 1;</p>
<p>}</p>
<p>void loop() </p>
<p>ip_flag = 0;</p>
<p>}</p>
<p>MDNS.update();</p>
<p>WiFiClient client = server.available();</p>
<p>if (!client) </p>
<p>//Serial.println("");</p>
<p>while (client.connected() &amp;&amp; !client.available()) </p>
<p>String req = client.readStringUntil('\r');</p>
<p>int addr_start = req.indexOf(' ');</p>
<p>int addr_end = req.indexOf(' ', addr_start + 1);</p>
<p>if (addr_start == -1 || addr_end == -1) </p>
<p>req = req.substring(addr_start + 1, addr_end);</p>
<p>int len_val = String(req).length();</p>
<p>String M_req = String(req).substring(0,6);</p>
<p>//Serial.println(M_req);</p>
<p>if(M_req == "/")</p>
<p></p>
<p>if(M_req == "/btn/v")</p>
<p></p>
<p>client.flush();</p>
<p>String s;</p>
<p>if (req == "/") </p>
<p>else if(req == "/btn/0")</p>
<p></p>
<p>else if(req == "/btn/1")</p>
<p></p>
<p>else if(req == "/btn/2")</p>
<p></p>
<p>else if(req == "/btn/3")</p>
<p></p>
<p>else if(req == "/btn/4")</p>
<p></p>
<p>else if(req == "/btn/5")</p>
<p></p>
<p>else if(req == "/btn/6")</p>
<p></p>
<p>}</p>
<p>else if(req == "/btn/7")</p>
<p></p>
<p>else if(req == "/btn/8")</p>
<p></p>
<p>}</p>
<p>else if(req == "/btn/9")</p>
<p></p>
<p>else if(req == "/btn/10")</p>
<p></p>
<p>}</p>
<p>else if(req == "/btn/11")</p>
<p></p>
<p>else if(req == "/btn/12")</p>
<p></p>
<p>else if(req == "/btn/13")</p>
<p></p>
<p>else if(req == "/btn/14")</p>
<p></p>
<p>else if(req == "/btn/15")</p>
<p></p>
<p>else if(req == "/btn/16")</p>
<p></p>
<p>else if(req == "/btn/17")</p>
<p></p>
<p>else if(req == "/btn/18")</p>
<p></p>
<p>else if(req == "/btn/19")</p>
<p></p>
<p>else if(req == "/btn/20")</p>
<p></p>
<p>else if(req == "/btn/21")</p>
<p></p>
<p>else if(req == "/btn/22")</p>
<p></p>
<p>else if(req == "/btn/23")</p>
<p></p>
<p>else </p>
<p>client.print(F("IP : "));</p>
<p>client.println(WiFi.localIP());</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Note: You need to change WiFi name and password into your own WiFi name
and WiFi password.

![](/media/aa8ea7dfd768e762cb7805198eb9b732.png)

After changing the WiFi name and WiFi password, ensure that the DIP
switch on the shield has been turned to the UartDownload end and the
shield has been plugged into the computer. Then set the board type and
COM port according to the method in Project 35, and the corresponding
board type and COM port are displayed in the lower right corner of the
IDE. Click ![](/media/b1feab597beaa43e4293f7cb6d085551.png) to upload the test code to the
ESP8266 serial WiFi ESP-01 module, the upload is complete. (Note: If
uploading unsuccessfully, unplug the WIF shield and reboot it again.

![](/media/2c5f271b22c06ff8a77b51d98f85c19d.png)

After the test code is uploaded successfully, first unplug the shield
from the USB port of the computer, and then unplug the ESP8266 serial
WiFi ESP-01 module from the shield.

4.  **Wiring Diagram**

<table>
<tbody>
<tr class="odd">
<td>Relay module</td>
<td>Raspberry Pi Pico Expansion Board</td>
<td></td>
<td>Temperature and Humidity sensor</td>
<td>Raspberry Pi Pico Expansion Board</td>
</tr>
<tr class="even">
<td>G</td>
<td>G</td>
<td></td>
<td>G</td>
<td>G</td>
</tr>
<tr class="odd">
<td>V</td>
<td>5V</td>
<td></td>
<td>V</td>
<td>3V3</td>
</tr>
<tr class="even">
<td>S</td>
<td>GP27</td>
<td></td>
<td>S</td>
<td>GP2(S)</td>
</tr>
<tr class="odd">
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td>Ultrasonic sensor</td>
<td>Raspberry Pi Pico Expansion Board</td>
<td></td>
<td>130 Fan motor</td>
<td>Raspberry Pi Pico Expansion Board</td>
</tr>
<tr class="odd">
<td>Vcc</td>
<td>5V</td>
<td></td>
<td>G</td>
<td>G</td>
</tr>
<tr class="even">
<td>Trig</td>
<td>GP17</td>
<td></td>
<td>V</td>
<td>5V</td>
</tr>
<tr class="odd">
<td>Echo</td>
<td>GP16</td>
<td></td>
<td>IN+</td>
<td>GP3</td>
</tr>
<tr class="even">
<td>Gnd</td>
<td>G</td>
<td></td>
<td>IN-</td>
<td>GP5</td>
</tr>
<tr class="odd">
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td>WIFI module</td>
<td>Raspberry Pi Pico Expansion Board</td>
<td></td>
<td>Servo</td>
<td>Raspberry Pi Pico Expansion Board</td>
</tr>
<tr class="odd">
<td>3V3</td>
<td>3V3</td>
<td></td>
<td>Red line</td>
<td>3V3</td>
</tr>
<tr class="even">
<td>EN/CP</td>
<td>3V3</td>
<td></td>
<td>Brown line</td>
<td>G</td>
</tr>
<tr class="odd">
<td>TX</td>
<td>RX(GP1)</td>
<td></td>
<td>Orange line</td>
<td>GP9(S)</td>
</tr>
<tr class="even">
<td>RX</td>
<td>TX(GP0)</td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="odd">
<td>GND</td>
<td>GND</td>
<td></td>
<td></td>
<td></td>
</tr>
</tbody>
</table>

![](/media/331e4abd4d9928180780c8dfc0b6bdbc.png)

**6. Project Code**

Note: After opening the IDE, be sure to set the board type and COM port
first. If you don't have WiFi at home, you need to turn your phone
hotspot on to share WiFi.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : WiFi Smart Home.</p>
<p>* Description : WiFi APP controls Multiple sensors/modules work to achieve the effect of WiFi smart home.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include &lt;dht.h&gt;</p>
<p>dht DHT;</p>
<p>#include&lt;Servo.h&gt;</p>
<p>Servo myservo;</p>
<p>char wifiData;</p>
<p>int distance1;</p>
<p>String dis_str;</p>
<p>const int dhtPin = 2;</p>
<p>const int relayPin = 27;</p>
<p>const int IN1 = 3;</p>
<p>const int IN2 = 5;</p>
<p>const int trigPin = 17;</p>
<p>const int echoPin = 16;</p>
<p>const int servoPin = 9;</p>
<p>int ip_flag = 1;</p>
<p>int ultra_state = 1;</p>
<p>int temp_state = 1;</p>
<p>int humidity_state = 1;</p>
<p>void setup() </p>
<p>void loop() </p>
<p>if(ip_flag == 1)</p>
<p></p>
<p>delay(100);</p>
<p>}</p>
<p>}</p>
<p>switch(wifiData)</p>
<p></p>
<p>break;</p>
<p>case 'h': ultra_state = 1; break;</p>
<p>case 'i': while(temp_state&gt;0)</p>
<p></p>
<p>break;</p>
<p>case 'j': temp_state = 1; break;</p>
<p>case 'k': while(humidity_state &gt; 0)</p>
<p></p>
<p>break;</p>
<p>case 'l': humidity_state = 1; break;</p>
<p>}</p>
<p>}</p>
<p>int checkdistance() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

**7. Result**

Note: Before uploading the project code, you need to unplug the TX and
RX cables connected to the pico board first, otherwise the code will not
be uploaded successfully. Then click "Tools" → "Board:", select the
Raspberry Pi Pico and choose the correct COM port. Finally, upload the
project code to the pico board. After uploading the code successfully,
connect the other end of the TX Dupont wire on the ESP8266 serial WiFi
ESP-01 module to the RX(0) pin on the pico board. The other end of RX
Dupont wire is connected to the TX (1) pin on the pico board. Click
![](/media/c26260f4b82d19ca26aeafe9722c59ee.png) to open the serial monitor window and set the
baud rate to 9600. In this way, the serial monitor shows the IP address
of your WiFi. (The IP address of WiFi sometimes changes. If the original
IP address does not work, you need to detect the IP address again.)

![](/media/c5430bb8cbcbf0b86aa1ae78aaeb055e.png)

![](/media/61afddc493d150a093c575fdacfda4a8.png)

![](/media/e38f6a5897e266fdf0c8439665ac898f.png)

![](/media/4e9178c990cf9d78fa0cbb95f9dd67bf.png)

**App for Android system devices(mobile phone/iPad)**

Now transfer the “keyes wifi.apk” file from the folder to your Android
phone or iPad, click the “keyes wifi.apk” file to enter the installation
page. Click the "**ALLOW**" button, and then click the "**INSTALL**"
button. Click the "**Open**" button to enter the APP interface after the
installation is completed.

![](/media/99096ffcd3b9cc95aed71fb502f0e726.png)

![](/media/d620452a9d6188cb3946269510df5ae0.png)

![](/media/b311329042f5bbd2880841127b91ebf8.png)

![](/media/7c5cfc935371c8e2ab30e999775d5f8f.png)

![](/media/d48c065ebaf1c5ca652eb72b15d3e596.png)

![](/media/78c89b91c0af2268f6267813e7923a9b.png)

Enter the detected WiFi IP address in the text box in front of the WiFi
button (For example, the IP address detected by the serial monitor above
is 192.168.0.119), then click the WiFi button, “403 Forbidden” or
"Webpage not available" will become "192.168.0.119". This shows that the
App has been connected to WiFi.

![](/media/8313b73eaff11b2bfc2f854cefe0a9f8.jpeg)

**App for IOS system devices (mobile phone/iPad)**

1.  Open App Store.
    
    ![](/media/27924fdb3d67692df7c63d8d0fb72287.png)

2.  > Enter “keyes linki” in the search box, search and the download
    > screen will appear. Click“![](/media/962a57f92b78eea1f0e3e81463497a9c.png)”，b., you can
    > download and install keyes link APP. The following operations are
    > similar to those of Android system. You can refer to the steps of
    > Android system above for operation.
    
    Note: Click the button on APP, the blue light on ESP8266 serial WiFi
    ESP-01 module will flash, indicating that APP has connected to WiFi.
    
    After the APP has been connected to the WiFi, start the following
    operations.

<!-- end list -->

1)  Click ![](/media/5b9754cb6ec4f995c9eada1da89a8969.png).Relay opens and the APP
    shows![](/media/505b00b0e23f6498c5d51d5d775c8fcb.png),the indicator light on the module
    lights up. Click ![](/media/5b9754cb6ec4f995c9eada1da89a8969.png) again, relay is closed and
    the APP shows![](/media/deb54a77cdcc87d7569e8b8e46de129f.png), indicator light on the module
    goes out.

2)  Click![](/media/c54f78d819d4e6a8310eaeb79ff66910.png). The servo rotates 180° and the APP
    shows![](/media/c54f78d819d4e6a8310eaeb79ff66910.png)again, the
    APP shows ![](/media/dee12bee3866542bfe5d70a539f79f0b.png)，the servo rotates 0°.

3)  Click![](/media/5490abf5b2f8a1d9cea3055da07c251c.png). Motor (with small fan leaves)rotates
    and the APP shows![](/media/e609128934bc72a89b39ded5833d050e.png). Click
    ![](/media/5490abf5b2f8a1d9cea3055da07c251c.png) again. Turn off the motor, the APP shows
    ![](/media/4f450510172cdd7c4d8a7c6b39881a90.png).

4)  Click ![](/media/95bfbe879d2391e4e48dcae085abe5a6.png), ultrasonic sensor measures distance.
    Put an object in front of the ultrasonic sensor, and the APP
    shows![](/media/676c8a750e95c84272b0b7791f7b3cd3.png)（Different distance shows different
    numbers). It means that the distance of the object from the
    ultrasonic sensor is 14cm at this time. Click
    ![](/media/95bfbe879d2391e4e48dcae085abe5a6.png). Turn off ultrasound, the APP
    shows![](/media/b1df35af68601022e54b7e575b0a07c7.png).

5)  Click ![](/media/08c8a35841b31fa4b5327fb7b23a7af5.png),temperature and humidity sensor
    measures the temperature in the environment. The APP
    shows![](/media/2a40f3e895808a3c6d4e1f542133feba.png), which means that the temperature in
    the environment is 28℃ at this time. Click![](/media/08c8a35841b31fa4b5327fb7b23a7af5.png),
    turn off the temperature and humidity sensor, the APP
    shows![](/media/82887a1385bc7411ecbdc41f60ebd450.png).

6)  Click ![](/media/d8e3463ab2f644b3300cdeaa2a68e4c2.png), temperature and humidity sensor
    measures the humidity in the environment. The APP shows
    ![](/media/cc825e69cf073aa73e37712330f4726e.png), it means that the humidity in the
    environment is 52% at this time. Click![](/media/d8e3463ab2f644b3300cdeaa2a68e4c2.png)，turn
    off the temperature and humidity sensor, the APP
    shows![](/media/adc18d06e626af067286da9040c20252.png).

#
