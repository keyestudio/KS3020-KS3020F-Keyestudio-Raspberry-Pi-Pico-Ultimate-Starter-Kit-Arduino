# Project 35：WiFi Test

1.  **Introduction**
    
    ESP8266 serial WiFi ESP-01 module is an ultra-low-power UART-WiFi
    transparent transmission module and designed for mobile devices and
    IoT applications. The physical device of the user can be connected
    to Wi-Fi wireless network for Internet or LAN communication to
    realize networking functions.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/408f9f823aab6078768f08462eda209b.png" style="width:0.62014in;height:1.01875in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/54668bc6799d314c47c7ffd29dcaa013.jpeg" style="width:3.05486in;height:1.03194in" /></td>
</tr>
<tr class="even">
<td>ESP8266 Serial WiFi ESP-01 Module*1</td>
<td>USB to ESP-01S WiFi Module Serial Shield*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/54668bc6799d314c47c7ffd29dcaa013.jpeg)

**USB to ESP-01S WiFi module serial shield:**

It is suitable for the ESP-01S WiFi module. Turn the DIP switch on the
USB to ESP-01S WiFi module serial shield to Flash Boot, and plug into
computer’s USB port. You can use serial debugging tool to test the AT
command.

Turn the DIP switch on the USB to ESP-01S WiFi module serial shield to
the UartDownload, ESP-01 module is at download mode. You can download
the firmware to ESP-01 module using AT firmware.

![](/media/408f9f823aab6078768f08462eda209b.png)

**ESP8266 serial WiFi ESP-01:** ESP8266 serial WiFi ESP-01 is an
ultra-low-power UART-WiFi transparent transmission module. It can be
widely used in smart grids, intelligent transportation, smart furniture,
handheld devices, industrial control and other fields.

4.  **Interface the Shield with the Computer**

<!-- end list -->

1.  Insert the ESP8266 serial WiFi ESP-01 module in the correct
    orientation into the USB to ESP-01S WiFi module serial shield.
    
    ![](/media/a819a91a024eacd8fb5ffd368b7ccad2.png)

2.  First, turn the DIP switch on the USB to ESP-01S WiFi module serial
    shield to the UartDownload, and then insert the shield into the USB
    port of the computer.
    
    ![](/media/88aeb7b568eee84038260ae898070e60.jpeg)
    
    The USB to serial port chip of this shield is CH340, We need to
    install the chip driver. The driver is usb\_ch341\_3.1.2009.06. We
    put this driver on the D: drive (i.e.: copy![](/media/1eed4f581666dff705907f36e1735b1a.png)to
    D: drive). Then start installing the driver. The way to install
    drivers in different systems is pretty much the same, we will start
    installing drivers on the Windows 10.

<!-- end list -->

1.  When you connect the shield to your computer at the first time,
    right click“Computer”—\>“Properties”—\>“Device manager”, you can
    see“**USB-Serial**”.

![](/media/9589e89d6bf94221680c33d808199dc1.png)

2.  Click“**USB-Serial**”and select“**Update Driver** ”.

![](/media/bcaaa2ab7f1066fc5b00bae45ad9a42b.png)

C. Then click on "**Browse my computer for drivers**".

![](/media/a7d3577f35b9f1e19d62a8b7098bc9e2.png)

D. Find the "**Drive File**" folder provided.(Here I put the driver file
USb\_CH341\_3.1.2009.06 on disk D)

![](/media/f9860a7612e0da4559aef589650a0e93.png)

5.  > Click "**Close**" when installation is complete.

![](/media/85c49e43b19aae4f9524dbfbd54d7247.png)

6.  > After the driver installation is complete, right
    > click“Computer”—\>“Properties”—\>“Device manager”, you can
    > see that the CH340 driver has been successfully installed on your
    > computer, as follows.

![](/media/b789da49848ee630fdfda5f26edf7dde.png)

5.  **Set up** **the Development Environment**
    
    Insert the ESP8266 serial WiFi ESP-01 module into the USB to ESP-01S
    WiFi module serial shield correctly, and then plug the shield into
    the USB port of the computer. Click to enter the arduino-1.8.16
    folder (you can also use the latest version). Find
    ![](/media/4bb50da9c1d2b944fbee752f56ecb966.png)and click to enter the 1.8.16 version of the
    IDE interface.
    
    ![](/media/3b2c891eea08c2454fca64d1c9322fbd.png)
    
    A. Click **File** →**Preferences**, copy and paste this address
    (http://arduino.esp8266.com/stable/package\_esp8266com\_index.json)
    in the ”**Additional Boards Manager URLs:**”, then click "**OK**" to
    save this address.

![](/media/c113e8981781a98473d312824c727b7e.png)

2.  Click“**Tools**”→“**Board:**”, then click on "**Board Manager...**"
    to enter the "**Board Manager**" page, type "ESP8266" in the space
    after "All". Then click the following search content, select the
    latest version to install. The installation package is not large,
    click "**Install**" to start to install the relevant plug-ins.
    (There may be an error in downloading and installing, possibly due
    to the server, so you need to click "Install" again. However, due to
    network reasons, most users may not be able to search esp8266 by
    esp8266 Community, so this method is not recommended for beginners,
    and **the following method 2 is recommended**.)
    
    ![](/media/aac58a8ed112e677c718a2b2752eb21d.png)
    
    ![](/media/1367916ce9525bc52d1d2554500b72e5.png)

3.  After successful installation, Click“**Close**”to close the page,
    and then click“**Tools**”→“**Board:**”, you can view different
    models of ESP8266 development boards in it. Select the corresponding
    ESP8266 development board model and COM port to program ESP8266.
    
    ![](/media/8791a04893d6a593c81cadda21674fb1.png)
    
    ![](/media/4d16263f0f021de1c3389c43d49fcac2.png)
    
    ![](/media/61034b65f0fccc208e866103750c8a7c.png)

<!-- end list -->

1)  **Installation of ESP8266 by tools** **(Recommended)**
    
    Click “**File”** →“**Preferences**”, copy
    http://arduino.esp8266.com/stable/package\_esp8266com\_index.json as
    follows; and click “**OK**”

![](/media/c113e8981781a98473d312824c727b7e.png)

![](/media/cc470b5308ddf737e35e1d0c862df1e0.png)

1.  Double click“ESP8266 one-click installation of Arduino board version
    2.5.0.exe”, then the installation is finished.
    
    ![](/media/26132cf19a193d5ef2396a62de5dab89.png)

2.  After the above tool is installed, restart the Arduino IDE software
    and click on the Arduino menu bar**“Tools”→“Board:” **, you can view
    different models of ESP8266 development boards in it. Select the
    corresponding ESP8266 development board model and COM port to
    program ESP8266.
    
    ![](/media/8791a04893d6a593c81cadda21674fb1.png)
    
    ![](/media/fd187cd8089a13bc6b364caef720de70.png)
    
    ![](/media/61034b65f0fccc208e866103750c8a7c.png)

<!-- end list -->

6.  **WiFi Test Code**

Note: After opening the IDE, set the board type and COM port first. If
you don't have WiFi at home, you can turn your phone hotspot on to share
WiFi.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Wifi test</p>
<p>* Description : Wifi module test the ip of Wifi</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include &lt;ESP8266WiFi.h&gt;</p>
<p>#include &lt;ESP8266mDNS.h&gt;</p>
<p>#include &lt;WiFiClient.h&gt;</p>
<p>#ifndef STASSID</p>
<p>//#define STASSID "your-ssid"</p>
<p>//#define STAPSK "your-password"</p>
<p>#define STASSID "ChinaNet-2.4G-0DF0" //the name of user's wifi</p>
<p>#define STAPSK "ChinaNet@233" //the password of user's wifi</p>
<p>#endif</p>
<p>const char* ssid = STASSID;</p>
<p>const char* password = STAPSK;</p>
<p>// TCP server at port 80 will response the HTTP requirement</p>
<p>WiFiServer server(80);</p>
<p>void setup(void) </p>
<p>Serial.println("");</p>
<p>Serial.print("Connected to ");</p>
<p>Serial.println(ssid);</p>
<p>Serial.print("IP address: ");</p>
<p>Serial.println(WiFi.localIP());</p>
<p>// set the mDNS responder::</p>
<p>// - in this example. the first parameter is domain name</p>
<p>// The fully qualified domain name is “esp8266.local”</p>
<p>// - the second parameter is IP address</p>
<p>// send the IP address via WiFi</p>
<p>if (!MDNS.begin("esp8266")) </p>
<p>}</p>
<p>Serial.println("mDNS responder started");</p>
<p>// activate TCP (HTTP) server</p>
<p>server.begin();</p>
<p>Serial.println("TCP server started");</p>
<p>// add the server to MDNS-SD</p>
<p>MDNS.addService("http", "tcp", 80);</p>
<p>}</p>
<p>void loop(void) </p>
<p>Serial.println("");</p>
<p>Serial.println("New client");</p>
<p>// wait the effective data from the client side</p>
<p>while (client.connected() &amp;&amp; !client.available()) </p>
<p>// read the first row of HTTP requirement</p>
<p>String req = client.readStringUntil('\r');</p>
<p>// the first row of the HTTP requirement is shown below: "GET /path HTTP/1.1"</p>
<p>// Retrieve the "/path" part by finding the spaces</p>
<p>int addr_start = req.indexOf(' ');</p>
<p>int addr_end = req.indexOf(' ', addr_start + 1);</p>
<p>if (addr_start == -1 || addr_end == -1) </p>
<p>req = req.substring(addr_start + 1, addr_end);</p>
<p>Serial.print("Request: ");</p>
<p>Serial.println(req);</p>
<p>client.flush();</p>
<p>String s;</p>
<p>if (req == "/")  else </p>
<p>client.print(s);</p>
<p>Serial.println("Done with client");</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

7.  **Result**
    
    Note: You need to change the user WiFi name and user WiFi password
    in the project code to your own WiFi name and WiFi password.
    
    ![](/media/aa8ea7dfd768e762cb7805198eb9b732.png)
    
    Next, turn the DIP switch of the shield to the UartDownload end and
    interface the shield to the USB port of a computer.
    
    Then set the board type and COM port.
    
    The corresponding board type and COM port are displayed in the lower
    right corner of the IDE. Click ![](/media/b1feab597beaa43e4293f7cb6d085551.png) to upload the
    test code to the ESP8266 serial WiFi ESP-01 module, the upload is
    complete.（Note: If uploading unsuccessfully, reconnect the shield to
    the computer）
    
    ![](/media/2fcc95e88037345a7ecdf67504a14fab.png)
    
    After the test code is uploaded successfully, first unplug the
    shield from the USB port of the computer, then turn DIP switch on
    the shield to the Flash Boot , and interface the shield to your PC.
    Open the serial monitor, set the baud rate to **115200**, and you
    can see your WiFi information, as shown below.
    
    ![](/media/d86715f4fc5bdc64b6b6708bc466d654.png)
