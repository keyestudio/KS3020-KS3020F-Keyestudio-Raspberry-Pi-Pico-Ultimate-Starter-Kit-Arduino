# **Download Arduino, Drivers and Libraries**

## Content

1\. Install Windows Drivers 1

[1.1 Download and install Arduino software 2](\\l)

[1.2 Install the drivers on the Windows system 7](\\l)

[1.3 Arduino IDE setting 13](\\l)

[1.4 Start first program 17](\\l)

[2. Install the Drivers on the MAC System 23](\\l)

[2.1 Download and install Arduino software 23](\\l)

[2.2 Download the drivers of CP2102 24](\\l)

[2.3 How to install the drivers of CP2102 24](\\l)

[3. Install Library Files to Arduino 37](\\l)

[3.1 Manual installation 38](\\l)

## **1. Install Windows Drivers**

![](/media/6cf6312dc7c7db27794b54d58a8bf80c.png)

### 1.1 Download and install Arduino software

Enter the Arduino official website: [<span class="underline">https://www.arduino.cc/</span>](https://www.arduino.cc/) and click "SOFTWARE" to enter the download page, as shown in the following figure.

![](/media/bfe8c9e405c71123dee7921eddff86d3.png)

![](/media/7250961db41ba42e4b881d77bd76a319.png) Then, select and download the corresponding installer according to your operating system. If you are a Windows user, please select "Windows Installer" to download the correct installation driver.

![](/media/894116c5cf0023dd9720946cfb441790.png)

Click **Windows Win7 and newer** to download the installer for Arduino 1.8.16, which needs to be installed manually. And when clicking on the **Windows ZIP file**, the zip file of the Arduino 1.8.16 will be downloaded directly, and you only need to unzip it to complete the installation.

![](/media/a983a2f2eceb968afbff8ba0f0376240.png)

Generally, you can download it by clicking **JUST DOWNLOAD**. Of course, if you like, you can choose a small sponsorship to help the great Arduino open source.

(3) Once the Arduino software is downloaded, continue to install. When you receive  **a warning from your operating system, allow the driver to install.** Click on **I Agree**, select the components you want to install and then click **Next**.

![](/media/00e334d3c756a2495da6f0d1b2db680a.png)

![](/media/de541d90a1cda992ad8e3f0cbaf95f94.png)

4)  Select the installation directory (The default directory is recommended.), then click **Install**.

![](/media/7da9aca1e8432c59372e7c7ab2574bd9.png)

5)  If the following interface appears, you should select **Install**.

![](/media/85b29de2aa791ecc77280ccde91e53c5.png)

This process will extract and install all the necessary files to properly execute the Arduino software (IDE).

![](/media/739c41701fbcab202f0e587f534bad30.png)

After the installation is complete, an Arduino software shortcut will be created on the desktop.

![](/media/d28223c55a30f949760779720fe4ec24.png)

### 1.2.Install the Pico development board

**Open Arduino IDE**，and click **Tools**→**Board**→**Boards Manager...**

![](/media/cc974af6f0b434a21d56bb0a00c8594e.png)

Enter Pico and select Arduino Mbed OS RP2040 Boards and click Install

![](/media/f28ae2a19124bca76f70c3d5cbe1cbec.png)

Then click **Install**

![](/media/32b8ade56a0e1da272a17abbfd5da41f.png)

![](/media/36e0d1363908ff71cecbdee4b9e4e421.png)

Then click **Close**

![](/media/2c0d5af2d55f5796444cc6349585e920.png)

### 1.3 Upload the pico firmware compatible with Arduino

You need to upload a pico firmware compatible with Arduino.

Disconnect the computer with the pico board.

Hold down the button BOOTSEL, connect them again before releasing the button.

Keep holding down the button before connecting the pico board with your computer; otherwise, the firmware can’t be downloaded

![](/media/33c91d51b2aeb2c943691706354aaad1.png)

（2）Open Arduino IDE and **File**→**Examples**→**01.Basics**→**Blink**

![](/media/0911ade4582bd015f4cd518a5f65253f.png)

Click **Tools**→**Board**→**Arduino Mbed OS RP2040 Boards**→**Raspberry Pi Pico**

![](/media/b5a2d5b5c4b2adb2a6ced1321aadd709.png)

Upload the script（Blink）to the Raspberry Pi Pico

![](/media/27763aed4103e97b05209c747e53e8ee.png)

![](/media/4a143c3abe363648730e40181a0e2050.png)

Then the indicator on the Raspberry Pi Pico will flash.

![](/media/529c3be102eb7414ac1e5e66fb203b6e.png)

Click **Tools**→**Port**→**COMx(Raspberry Pi Pico)**

Com port is different on the computers.

Please select your correct COM port. In this tutorial, the com port is Com15.

![](/media/dd5f48649f98d0e8ac5570e83eb7e186.png)

**Don’t select the port if it’s your first time to upload scripts to the pico board .**

**Select if the com port is correct when uploading the script each time; otherwise the code will fail to upload.**

**Sometimes, Raspberry Pi Pico can’t work in light of the loss of code. At this time, you need to upload the firmware of the pico board in accordance with above steps**



## **2. Install the driver on MAC**

![](/media/a6fc83596009c574d8e29ef383748549.png)

Download Arduino IDE:

![](/media/5d58d3cf67b308423ddb9f286f6cb697.png)

Just refer to the Windows system
