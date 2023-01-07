# Smart-Irrigation-System
This Project was done under the guidance of Professor Saurav Verma as part of Semester 4(Jan 2019-May 2019) project for the subject Microcontrollers and Microprocessors at SVKM's NMIMS Mukesh Patel School Of Technology, Mumbai.

Team Members: Soham Nanavati, Raj Mehta]

Technologies used: Android Studio , Arduino IDE, Arduino Circuit board
 
SMART IRRIGATION System

RAJ MEHTA| BTECH IT | A036

SOHAM NANAVATI| BTECH IT | A039


MUKESH PATEL SCHOOL OF TECHNOLOGY MANAGEMENT & ENGINEERING
Bhakti Vedant Swami Marg,
Near Cooper Hospital, JVPD Scheme, 
Vile Parle (West), Mumbai.
Maharashtra- 400 056, India  





# Introduction
Smart irrigation systems tailor watering schedules and run times automatically to meet specific landscape needs. These controllers significantly improve outdoor water use efficiencies.
Unlike traditional irrigation controllers that operate on a pre-set programmed schedule and timers, smart irrigation controllers monitor weather, soil conditions, evaporation and plant water use to automatically adjust the watering schedule to actual conditions of the site.
For example, as outdoor temperatures increase or rainfall decreases, smart irrigation controllers consider on site-specific variables, such as soil type, sprinklers’ application rate, etc. to adjust the watering run times or schedules. There are several options for smart irrigation controllers.
Soil moisture sensor-based smart irrigation controllers use one of several well-established technologies to measure soil moisture content. When buried in the root zone of turf, trees or shrubs, the sensors accurately determine the moisture level in the soil and transmit this reading to the controller.




# Literature Survey
  1. Sensors:-
  (a) Soil moisture sensor
      The soil moisture sensor is used to measure the volumetric water content of soil. It is used to monitor soil moisture content to control irrigation in greenhouses. A moisture sensor is used to sense the level of moisture content present in irrigation field. It has a level detection module in which we can set a reference value.
  (b) Temperature and Humidity Sensor
  The temperature and humidity sensor is necessary to reduce the watering frequency. That is when the weather gets cooler, less water is needed whereas vice versa in the other case.
  2. Relay Module:-
  The relay module is an electrically operated switch that allows you to turn ON or OFF a circuit using voltage and/or current much higher than a Microcontroller could handle. There is no connection between the low voltage circuit operated by the Microcontroller and the high power circuit. The relay protects each circuit from the other. Each channel in the module has three connections named NC, COM, and NO. Depending on the input signal trigger mode, the jumper cap can be placed at high level effective mode which ‘closes’ the normally open (NO) switch at high level input and at low level effective mode which operates the same but at low level input.
  3. Peristaltic Pump:-
  A peristaltic pump is a type of positive displacement pump used for pumping a variety of fluids. The fluid is contained within a flexible tube fitted inside a circular pump casing. It is reputed to pump water from a depth of about 31 feet.
  4.Arduino:-
  Arduino is an open-source hardware and software company, project and user community that designs and manufactures single-board microcontrollers and microcontroller kits for building digital devices and interactive objects that can sense and control both physically and digitally. 

  5.Bluetooth Module HC-05:-
  HC‐05 module is an easy to use Bluetooth SPP (Serial Port Protocol) module, designed for transparent wireless serial connection setup. The HC-05 Bluetooth Module can be used in a Master or Slave configuration, making it a great solution for wireless communication.

  6.Android App Development-
  Through this project we understood how to design an Android App and how to link it to components like Arduino Uno etc.


# Block Diagram
						
 ![image](https://user-images.githubusercontent.com/37181092/211168663-09b0d928-82ba-48de-b720-c72f89fa385d.png)





# Flowchart
![image](https://user-images.githubusercontent.com/37181092/211168652-42bcf2c0-aea8-4845-bb8c-d6b9e517d8ce.png)

 



# Explanation:-
•	We send the data to the Arduino via the App
•	The sensors DHT11 measures the temperature and the humidity of the surroundings
•	The moisture sensor checks the moisture of the soil
•	Then the data is compared with the threshold data stored in the Arduino
•	If any one of the three conditions related to the temperature, humidity or moisture is satisfied, the relay module will switch the pump on.
•	The pump will pull the water from the container and water the soil.
•	If the comparisons are valid, then the pump will remain off.






# Result:-
Hence we successfully implemented the system of smart irrigation using Arduino and Android app where we used Bluetooth to connect the Arduino Uno and the app. And we controlled the pump via the App.

![image](https://user-images.githubusercontent.com/37181092/211168680-81b26ece-709d-40cd-9f9c-9e8058398714.png)


 


# Conclusion
Working on this project helps us learn how Arduino, relay module, temperature and humidity sensor, moisture sensor work and how they can be successfully used to help farmers and other farming industries to farm their respective crops with adequate amount of water based on the temperature, moisture and humidity at that particular time. Also we learned about android app development and how to link the app to components like Arduino Uno.

References
•	https://electronicsforu.com/electronics-projects/prototypes/smart-irrigation-system
•	https://en.wikipedia.org/wiki/Special:Search?search=smart+irrigation&go=Go
•	https://www.hydropoint.com/what-is-smart-irrigation/
•	https://www.arduino.cc/en/Main/Software




