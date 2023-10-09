# Project 18：Small Fan

1.**Introduction**

In the hot summer, we need an electric fan to cool us down, so in this project, we will use the Plus control board to control 130 motor module and small blade to make a small fan.



2.**Components Required**

| ![image-20230423134601424](media/image-20230423134601424.png) | ![image-20230423134605918](media/image-20230423134605918.png) |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|                     Raspberry Pi Pico*1                      |             Raspberry Pi Pico Expansion Board*1              |
| ![image-20230423134945331](media/image-20230423134945331.png) | ![image-20230423134948208](media/image-20230423134948208.png) |
|                      130 Motor Module*1                      |                       M-F Dupont Wires                       |
| ![image-20230423134956451](media/image-20230423134956451.png) |                                                              |
|                         USB Cable*1                          |                                                              |



3.**Component Knowledge**

![](/media/a572bcde7a5e3bf01d273b3d9a024701.png)

**130 motor module:** 

The motor control module uses the HR1124S motorcontrol chip, which is a single-channel H-bridge driver chip for DC motor.

The H-bridge driving part of the HR1124S features low on-resistance PMOS and NMOS power tube. 

The low on-resistance ensures low power loss of the chip, making the chip work safely for a longer time. In addition, HR1124S has low standby current and low quiescent current, which makes HR1124S easy to be used in toy scheme.



4.**Features:**

- Working voltage: 5V

- Working current: 200MA

- Working power: 2W

- Working temperature: -10℃\~ +50℃



5.**Schematic diagram:**

![image-20230423135214591](media/image-20230423135214591.png)



6.**Circuit Diagram and Wiring Diagram**

![](/media/98c9335e5ef2e5304e2cddde04e6e168.png)

![](/media/aad9f071a4d7a6a9a62c2899c78822b8.png)



7.**Test Code：**

Go to the folder KS3020 Keyestudio Raspberry Pi Pico Learning Kit Ultimate Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 18：Small Fan\\Project\_18\_Small\_Fan

```c
//**********************************************************************************
/*
 * Filename    : Small Fan
 * Description : Fan clockwise rotation,stop,counterclockwise rotation,stop,cycle.
 * Auther      : http//www.keyestudio.com
*/
#define Motorla    17  // the Motor_IN+ pin of the motor
#define Motorlb     16  // the Motor_IN- pin of the motor

void setup(){
  pinMode(Motorla, OUTPUT);//set Motorla to OUTPUT
  pinMode(Motorlb, OUTPUT);//set Motorlb to OUTPUT
}
void loop(){
//Set to rotate for 5s anticlockwise
  digitalWrite(Motorla,HIGH);
  digitalWrite(Motorlb,LOW);
  delay(5000);
//Set to stop rotating for 2s 
  digitalWrite(Motorla,LOW);
  digitalWrite(Motorlb,LOW);
  delay(2000);
//Set to rotate for 5s clockwise
  digitalWrite(Motorla,LOW);
  digitalWrite(Motorlb,HIGH);
  delay(5000);
//Set to stop rotating for 2s 
  digitalWrite(Motorla,LOW);
  digitalWrite(Motorlb,LOW);
  delay(2000);
}
//**************************************************************************
```


![](/media/31f44f604d7d525739079df0eeefadaf.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry Pi Pico board

![](/media/a3d23191c514aac8127496546e93698a.png)

![](/media/1478ab9c8eea5ea5b404bdb718b17aad.png)



8.**Test Result**

Upload the code, power up via a USB cable. The fan will rotate clockwise for 5s, stop for 2s, anticlockwise for 5s and stop for 2s.
