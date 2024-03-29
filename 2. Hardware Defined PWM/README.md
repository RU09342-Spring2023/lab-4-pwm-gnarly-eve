# Hardware PWM
Now that you have done the software version of PWM, now it is time to start leveraging the other features of these Timer Modules to control several pins without needing your processor to do so.

## Task
You will need to use pins 6.0, 6.1, and 6.2 to drive an RGB LED. These will need to be configured with a PWM Period of 1ms. You need your RGB LED to cycle between the following colors in order:
- Red
- Orange (Red + Green)
- Green
- Cyan (Green + Blue)
- Blue
- Purple (Red + Blue)

You need to cover colors in between them, meaning as you transition from Red to Orange, it shouldn't be just 2 colors. The amount of colors are up to you, but is needs to appear smooth in transition. The timing for cycling is up to you to determine as well.

## Deliverables
You will need to upload the .c file and a README explaining your code and any design decisions made.

### Hints
You will need to use the CCR registers in order to accomplish this. You may also want to use a second TIMER module to determine how fast your LED colors cycle.

Section 1:
Lines 26-89:
- Includes main function for the program
- P6.0-P6.2 are set as outputs to drive RGB LED. 
- PWM Timer is set to switch color every 1s.

Section 2:
Lines 93-123:
- Change the different color states moving from red, to green, to blue, and the colors in between.
![pic1](https://user-images.githubusercontent.com/122996591/236655011-63fcaeef-b1da-4647-a706-34f6de645459.png)
