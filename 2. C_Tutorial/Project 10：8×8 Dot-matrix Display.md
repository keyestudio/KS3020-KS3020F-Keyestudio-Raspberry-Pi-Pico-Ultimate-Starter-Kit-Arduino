# Project 10：8×8 Dot-matrix Display

1.  **Introduction**

The dot-matrix display is an electronic digital display device that can
show information on machines, clocks and many other devices. In this
project, we will use the pico board control the 8x8 LED dot matrix to
make a“❤”pattern.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/b18fe281156b29c44796f72222718d58.jpeg" style="width:2.37431in;height:0.94514in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/fa4eb4c55bbbb4ae7fcde8298a903b5a.png" style="width:2.06736in;height:1.03056in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/ece3c38dc9a9e6428b122481d6bb0d4d.png" style="width:1.39792in;height:1.18125in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3020-KS3020F-Keyestudio-Raspberry-Pi-Pico-Ultimate-Starter-Kit-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>8*8 Dot-matrix Display *1</td>
<td>M-F Dupont Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

**8\*8 Dot-matrix display module:**

The 8\*8 dot matrix is composed of 64 LEDs, and each LED is placed at
the intersection of a row and a column. When using a single-chip
microcomputer to drive an 8\*8 dot matrix, we need to use a total of 16
digital ports, which greatly wastes the data of the single-chip
microcomputer. For this reason, we specially designed this module, using
the HT16K33 chip to drive an 8\*8 dot matrix, and only need to use the
I2C communication port of the single-chip microcomputer to control the
dot matrix, which greatly saves the microcontroller resources.

4.  **Specifications:**

Working voltage: DC 5V

Current: 200MA

Maximum power: 1W

5.  **Schematic diagram:**

![](/media/b04fe5e60695365a23644395aaef5085.png)

Some modules come with 3 DIP switches which allow you to toggle the
switches at will. They are used to set the I2C communication address.
The setting method is as follows. In our module, the module has fixed
the communication address, A0, A1, A2 are all grounded, that is, the
address is 0x70.

<table>
<tbody>
<tr class="odd">
<td>A0（1）</td>
<td>A1（2）</td>
<td>A2（3）</td>
<td>A0（1）</td>
<td>A1（2）</td>
<td>A2（3）</td>
<td>A0（1）</td>
<td>A1（2）</td>
<td>A2（3）</td>
</tr>
<tr class="even">
<td>0（OFF）</td>
<td>0（OFF）</td>
<td>0（OFF）</td>
<td>1（ON）</td>
<td>0（OFF）</td>
<td>0（OFF）</td>
<td>0（OFF）</td>
<td>1（ON）</td>
<td>0（OFF）</td>
</tr>
<tr class="odd">
<td>OX70</td>
<td>OX71</td>
<td>OX72</td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td>A0（1）</td>
<td>A1（2）</td>
<td>A2（3）</td>
<td>A0（1）</td>
<td>A1（2）</td>
<td>A2（3）</td>
<td>A0（1）</td>
<td>A1（2）</td>
<td>A2（3）</td>
</tr>
<tr class="odd">
<td>1（ON）</td>
<td>1（ON）</td>
<td>0（OFF）</td>
<td>0（OFF）</td>
<td>0（OFF）</td>
<td>1（ON）</td>
<td>1（ON）</td>
<td>0（OFF）</td>
<td>1（ON）</td>
</tr>
<tr class="even">
<td>OX73</td>
<td>OX74</td>
<td>OX75</td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="odd">
<td>A0（1）</td>
<td>A1（2）</td>
<td>A2（3）</td>
<td>A0（1）</td>
<td>A1（2）</td>
<td>A2（3）</td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td>0（OFF）</td>
<td>1（ON）</td>
<td>1（ON）</td>
<td>1（ON）</td>
<td>1（ON）</td>
<td>1（ON）</td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="odd">
<td>OX76</td>
<td>OX77</td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
</tbody>
</table>

6.  **Circuit diagram and wiring diagram:**
    
    ![](/media/f4fc6111c35b571928d0f0a4a4bf45b3.png)
    
    ![](/media/ad529b82657cd9c7ddcd4b8828a0b1e8.png)
    
    **7. Adding the Matrix library：**
    
    The project code uses a library called Matrix. If you haven't added
    it yet, add it before you study. If you want to add a third-party
    library, please perform the following steps:
    
    Open the **Arduino IDE** and click “**Sketch**” → “**Include
    Library**” → “**Add.zip Library**...”. Find the directory named
    KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate
    Edition\\2. Windows System\\2. C\_Tutorial\\3. Libraries\\Matrix.Zip
    in the pop-up window, select the **Matrix.Zip and** click“**Open”.**

![](/media/625e9d05fa3662eb51e89e322395d29e.png)

![](/media/b174724155c46aebdfd15ab460c1470f.png)

**8. Test Code**

**After adding the Matrix library.**

You can open the code we provide:

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit
Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 10：8×8 Dot-matrix
Display\\Project\_10\_8\_8\_Dot\_Matrix\_Display.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : 8×8 Dot-matrix Display</p>
<p>* Description : 8x8 LED dot matrix display“Heart” pattern.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include &lt;Matrix.h&gt;</p>
<p>Matrix myMatrix(20,21);</p>
<p>uint8_t LedArray1[8]=;</p>
<p>uint8_t LEDArray[8];</p>
<p>void setup()</p>
<p>void loop()</p>
<p>}</p>
<p>myMatrix.writeDisplay();</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/8134a27692568db027c49899a0fe6067.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/47ef1cebb6ce160d2364f3de4e724799.png)

![](/media/7841abba9b2d2d5f475359be239dc26c.png)

9.  **Test Result：**

You will view the 8\*8 dot matrix show the“❤”pattern.
