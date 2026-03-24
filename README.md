# FreeRTOSProject
A Project completed during my FreeRTOS module in Final Year. 


The code works as follows:
Connects to internet and ubidots (subscribes to relevant topics) and prints current time
using the RTC task

If a user enters "s" in the terminal TIM6 (a two second timer), and two software timers one for ten seconds the other for fifteen will start. They will pass task notification bits to allow temperature, humidity, distance and pressure to be read when the relevant timer releases them ie humidity is read every fifteen seconds. Putting "x" in the terminal will stop the timers. Putting any other character will result in an error message being printed. The data is read and the data source is set in the task before being placed on a queue for the publish task. The publish task sets the payload Qos etc and publishes the data on ubidots.

A slider controls servo pwm. By setting the slider on ubidots the subscribe handler will put a value to a queue and the servo task will read the value from a the queue and set the pwm. The servo is set for a 50Hz pulse on TIM16.
 
 A similar function is called for setting LED brightness in accordance with distance measured via proximity sensor. The LED pulse is set for 1kHz on TIM2.
 
 Accelerometer readings require 3 event bits to be set, the button on the STM, the switch on the dashboard, and the manual input on the dashboard must send the string "test" to set the final bit. Only when all three are set will an accelerometer reading be read and published in the same format as the other data tasks.
