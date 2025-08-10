Activity 1: Programming the microcontroller to record a sequence of colours entered by the user, and then play it back. Here is the approach:

A PIC18F14K50 MCU is used for this, programming in C with the MPLAB X IDE.
Slightly adapted from the Cambridge coursework, each button has its corresponding LED. When a button is pressed, the LED illuminates for a second before the next LED is chosen. This is repeated until the start stop switch pressed to stop the recording. The inputted sequence is then replayed back to the user.

Below is the schematic used for the task:

<img width="1221" height="813" alt="Circuit_diagram drawio" src="https://github.com/user-attachments/assets/c9bc7f12-3142-4a54-ae14-54029d57c332" />
