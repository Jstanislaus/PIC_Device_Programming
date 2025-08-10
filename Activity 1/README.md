Activity 1: Programming the microcontroller to record a sequence of colours entered by the user, and then play it back. Here is the approach:

The board starts by cycling the three LEDs, turning them on one at time, and switching every second: LED1 (green) for 1s –> LED2 (blue) for 1 sec –> LED3 (red) for 1s –> LED1 for 1 sec, etc. While the colours are cycling, the user selects a colour by pressing the button. The colour that is ON at this time is recorded. The process continues until N colours have been entered (the size of the sequence N is set in the code). Once recording is completed, the recorded sequence is played back on the LEDs.

<img width="1221" height="813" alt="Circuit_diagram drawio" src="https://github.com/user-attachments/assets/c9bc7f12-3142-4a54-ae14-54029d57c332" />
