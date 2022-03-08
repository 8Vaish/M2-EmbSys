
- Abstract

 -This is a reliable system for safety and proper authentication before the use of Circuit Breakers.
As the world is becoming technosavy, heading towards invention of advance electronic devices so is the safety factor of technicians becoming an important matter of concern.
The life of technicians is at risk as they work on these electrical appliances.They work by switching off the circuit breakers but sometimes someone can unknowingly on the circuit breaker while they are working and this could result in massive accidents sometimes it can even result in fatal accidents.
To avoid such accidents there must be system for ensuring security of technicians.
Also, if sometimes the current of a particular electronic device exceeds its rated current, the device may get damaged.
To solve all these problems, we came up with a solution of Circuit Breaker that is authenticated.
The system is built using Arduino UNO, 4x4 Matrix Keypad, Relay, LCD Display, Battery, etc.
The whole system can be enclosed in an integrated system.


- Identifying Features
   - Ensures Safety
    - Authentication is done easily
    - No communication barriers will be there between the Techicians and Engineers
     - Smooth Working

- Who 
  - This password based Circuit Breakers will be used by Technicians and Engineers in the Industry.

- What
   - It is a system which will give authenticated use of Circuit Breakers.
- When
  - It can be used in the industry whenever there is any switch operation.
- Where
   - industries will be the main focus of use.

Here's the SWOT Analysis.
![SWOT](https://user-images.githubusercontent.com/98880241/155774439-d46c6164-edde-4908-be17-0f143f346b00.jpg)

|ID  | High Level Requirement|
|----|-----------------------|
|HLR1|There shall be a 4-4 Keypad matrix| 
|HLR2|A Display to show the password we type|
|HLR3|The system shall provide safety via. Authentication |
|HLR4|The system shall control the work of Circuit Breaker|


|ID  | Low Level Requirement |
|----|-----------------------|
|LLR1| Password shall be typed with the help of Keypad|l be shown with the help of LCD Display|
|LLR2|Entered Password can be seen on the Display|
|LLR3|  Authentication can be done using the Password. If the Password is correct only then the circuit breaker can be operated |
|LLR4| According to the Password entered the Relay will work and accordingly the Circuit Breaker shall be switched on and off |

![Operaton of Circuit Breakers using Authentication](https://user-images.githubusercontent.com/98880241/155772731-81ddc25e-1815-4113-91d0-fc2e4fc60c9f.jpeg)

- *1. Arduino:*
  - Arduino Uno Board is used for Fast processing and easy interface. Arduino is used as an interfacing device for 4×4 matrix keypad, relay module, 16×2 LCD display. In Arduino is loaded with the help of IDE software. Arduino is user-friendly as it provides user an easy option to edit the program that is to be loaded in Arduino.

- *2. Relay Module:*
  - Relay Module is used as electrically operated switch. It close and open the electric supply on the basis of commands given by Arduino. The S terminal of relay module is connected to Arduino and positive and negative pin are connected 16×2 LCD Display. And another two pins are connected to supply and load respectively.

- *3. 4×4 Keypad matrix:*
   - In this project, the 4×4 keypad matrix is used for entering the password. The password entered in 4×4 keypad matrix is used as input for Arduino to verify it. The 4×4 keypad matrix is connected to Arduino with help of connecting wires to pin 2 to pin 9
   -  
-  *4.16×2 LCD display:*
    - LCD display is used to give required instruction to the operator. It displays the status of password whether it is correct or incorrect.

- *5.Transistiors:*
      - Transistor is used as a switch. Three pins, the emitter and collector and base. Current flows in through the collector and out of the emitter. By modulating the base pin, you can control whether current is permitted to flow. When a sufficiently high voltage is applied to the base, current is allowed to flow through the transistor.
- *6.Rectifier:*
     -A rectifier used is for conversation of an Alternating current input into a direct current output. Arrangement of 4 diodes forming a bridge rectifier that delivers pulsating DC. It
