# start timed vaccum cleaner robot

## overview
A Script to auto start the RoboVac with a time schedule.
We used the RoboVac 11:
You can find more information on their website:

https://www.eufylife.com/products/robovac-11

What is this project about?
  - an ESP8266 based IR remote control 
  - time schedules for your RoboVac to start cleaning
  - real time clock for precise timing
  - control RoboVac via webinterface
  - control RoboVac via MQTT
  - set up file for Home Assistant (https://www.home-assistant.io)
  - update via OTA 

Make sure to place the IR LED close to the robot to make sure the commands reach its reciever diode.
  
## Layout:
  
![layout](https://github.com/3DMech/start_timed_vacuum_cleaner_robot/blob/master/Media/Pictures/Circuit_diagram.png)

## Partlist:
  - Wemos D1 mini
  - IR LED (940nm, connect to pin D5)
  - current limiting resistor (220 Ohm)
  
  ## Future updates
  - control RoboVac via joystick
