# Servo Control
Servos can be controlled with PWM, determining which angle should be taken by how wide the duty cycle is. You will need to build a manual control for a servo using the two buttons on the development board.

## Task
You can chose whichever pin you want to control your Servo (but I might recommend one with hardware PWM control). Your will use the two buttons on your development board to control the position of your servo. The button on the left side of the board should turn the servo counterclockwise, the button on the right side of the board should turn it clockwise.

The servo will have a limit to the amount of degree it can rotate, so make sure you take a look at that before coding.

The servo will need to be most likely powered from the power supply on the bench. If you do this, you need to make sure you connect common ground between the supply and your board. Otherwise, your system will not work or you risk damaging your board.

## Deliverables
You will need to upload the .c file and a README explaining your code and any design decisions made.

Section 1:
Lines 8-23 :
- the main funtion and set up of the program
![pic1](https://user-images.githubusercontent.com/122996591/236654872-93601645-760b-4420-8cd0-7896549d8fc1.png)

Section 2:
Lines 26-53:
- P6.0 drives the DC motor. 
- Buttons P2.3 and P4.1 rotate the motor.
- Timer determines how fast the motor turns.
![pic2](https://user-images.githubusercontent.com/122996591/236654870-4a513c41-7f2b-40b0-9177-16879a08c1b5.png)

Section 3:
Lines 58-80:
- P2.3 will move servo left
- P4.1 will move servo right. 
![pic3](https://user-images.githubusercontent.com/122996591/236654866-d29fda7f-279d-4a3b-a7df-e4fa488a6e07.png)

Section 4:
Lines 86-95:
- Reset PWM cycle
![pic4](https://user-images.githubusercontent.com/122996591/236654861-432cea2e-2c12-4e98-97e1-6ac81cbee115.png)

