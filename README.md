About this project
This project is a wearable robotic fashion piece inspired by fashion tech designer Anouk Wipprecht and anthropologist Edward T. Hall. The device is a leg harness that is comprised of custom made rail system, moving cart, and quill integrated with an Arduino Uno microcontroller with peripherals. The device is able to sense incoming objects approaching the user and react to these objects by moving the cart along the rail system and moving the quill along an axis of rotation. This device is an embodiment of proxemics, a term coined by Edward T. Hall describing the social and personal boundaries that people set between themselves and others. Different people define their social and personal spaces differently, and often times it is hard to establish a clear boundary when interacting with people from different backgrounds and experiences. This device not only allows the user to regain control of his/her own space, but also showcases the opporunities for innovation when combining STEM and the creative arts.

Components of Device
The device is comprised of mechanical, electrical, and software based components. These 3 components are defined as follows:

Mechanical
Many of the mechanical components of this device are custom made through CAD using SolidWorks. These pieces include the rail system, the moving cart, the quill, and brackets/holders for pulleys and motors. These CAD files are contained in a seperate repository (https://github.com/shankhan247/Winter_Project_2020_CAD) and you can find further information on the design of the mechanical components in the README. Non-custom mechanical components are also used, such as a 2T timing pulley belt, a 6mm wide pulley wheel, cart v-wheels, and screws/nuts/bolts. The pulley and rail system are integrated together to allow the cart to move along the v rails, driven by electrical components.

Electrical
Eletrical peripherals including a stepper motor, servo motor, and infrared obtsacle avoidance sensor are directly integrated with the 3D printed mechanical components and an Arduino Uno R3. The stepper motor is attached to the rail/pulley system and is involved in generating cart movement by pulling/pushing the pulley. The servo motor is attached to the quill, which is responsible in rotating the quill along an axis of rotation. The infrared sensor measures proximity of an incoming object. All of these electrical peripherals are integrated with Arduino software that acquires measurement data and translates that into motion between the two motors. Details of the circuit are shown in the circuit diagram included within this repository (circuit_diagram_bb.jpg). The circuitry components are listed below:
Arduino Uno R3 Microcontroller
Nema 8 stepper motor
Micro servo motor (SG90)
5V regulator (LM7805)
Stepper motor driver (A4988)
IR obstacle avoidance sensor 
9V battery
2 0.22uF capacitors, 1 47uF capacitor (for decoupling)

Software
The software was written in the Arduino IDE and is responsible to read measurements from the IR sesnor and control motor movements. Software is based on open source templates provided by Arduino and is included in the src folder of this respitory. First iteration of software moves motor in random directions and reads measurements values. Second iteration of software will dictate precise motor movements in the direction of the incoming obstacle. 

