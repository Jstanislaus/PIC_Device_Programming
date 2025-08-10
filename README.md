# PIC_Device_Programming
This project replicates the C++ Microcontroller Programming activity for University of Cambridge 2nd Year Engineering (Part IB) coursework instead with the PIC18F14K50 MCU in C. This project was discovered courtesy of user ao561.

Activity 1: Programming the microcontroller to record a sequence of colours entered by the user, and then play it back. Here is the approach:

The board starts by cycling the three LEDs, turning them on one at time, and switching every second: LED1 (green) for 1s –> LED2 (blue) for 1 sec –> LED3 (red) for 1s –> LED1 for 1 sec, etc.
While the colours are cycling, the user selects a colour by pressing the button. The colour that is ON at this time is recorded.
The process continues until N colours have been entered (the size of the sequence N is set in the code).
Once recording is completed, the recorded sequence is played back on the LEDs.
Activity 2: Using the I2C bus and protocol, a temperature sensor, and the microcontroller:

Record a temperature value every second in an array that will contain the last minute of data (older data is replaced by new data once the array is full).
If the temperature goes above a threshold value of 28 degree Celsius, the sensor will trigger an interrupt which will get the LEDs on the microcontroller to flash an alarm signal, stop the recording, and transmit the last minute of data to your computer by USB serial communication, so that the log can be analysed.
<img width="1221" height="813" alt="Circuit_diagram drawio" src="https://github.com/user-attachments/assets/08f67acb-8bf7-495e-9858-8de10daae3d0" />
