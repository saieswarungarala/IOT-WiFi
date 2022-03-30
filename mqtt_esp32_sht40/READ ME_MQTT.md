
#  MQTT Protocol with ESP 32
 
# Description
The main of this experiment is getting some intuition about how MQTT communication is working.Using MQTT communication protocol with ESP 32 to publish and subscribe SHT40 (Temperature & Humidity) sensor data to topics & control the state of LED at the ESP 32 by publishing on/off messages to the ESP 32.We are using MQTTlens.MQTT Lens is an add-on for the chrome browser that lets you publish messages to an MQTT broker, subscribe to MQTT topics, and receive messages using the chrome web 
browser. 


## Installation 
 <h4 style="color:black;font-size:40px;"> <b> I.Arduino IDE</b>  </h4>
  <b><i>step 1:</i></b>          
  Visit https://www.arduino.cc/en/Main/Software  to download the latest Arduino IDE version for your computer’s operating system. There are versions for Windows, Mac, and Linux systems.  
  <b><i>step 2:</i></b> Save the .exe file to your hard drive.  
  <b><i>step 3:</i></b>Open the .exe file & run the file and complete the Installation.       

  <b><h4 style="color:black;font-size:40px;">II.Installing the ESP32 Board in Arduino IDE  </b>  </h4>
   <b><i>step 1:</i></b> Connect ESP 32 board to the computer through USB cable  
   <b><i>step 2:</i></b> open the Arduino  
   <b><i>step 3:</i></b> 	Go to the file >  Preferences and then paste the below link at the Additional Boards Manager URL field
          https://dl.espressif.com/dl/package_esp32_index.json  
   <b><i>step 4:</i></b>	Go to the Tools  >  boards  >  Board manager and then install the ESP 32  
   
   <h4 style="color:black;font-size:40px;"> <b> III.MQTTlens </b>  </h4>
   <b><i>Step 1:</i></b>For launching MQTTlens first just type MQTTlens in the Google chrome browser and click the option launch app after that it will      automatically add on to the Google chrome
   
   <b><i>Step 2:</i></b>After launching add a new connection and provide required connection details such as
   
   <ul style=“list-style-type:disc”>

   <li>Connection name --> provide a relevant name for your connection  You can choose your connection colour scheme </li>
   <li>Type host name as tcp://broker.hivemq.com </li>
   <li>Port is 1883</li>
   <li>Provide your user name and password these are getting when you add MQTTlens to the browser</li>
   </ul>
   <b><i>Step 3:</i></b>After creating the connection now you can give a topic name to subscribe messages 
   from client 

   
   
   
   
   
   
   
   
   
   
   
   
   
 
   



  
  


     


## Required Libraries
We need to include WiFi library to use WiFi funcationalities of ESP 32 WROVER -B Module

<b>#include <WiFi.h></b>

Once we install the ESP 32 boards to the IDE it can automatically adds the WiFi library






## Documents
1.Installing guide for Arduino IDE
          https://www.circuitbasics.com/arduino-basics-installing-software/ 
          
2.ESP 32 WROVER Module
 https://www.espressif.com/sites/default/files/documentation/esp32-wrover-b_datasheet_en.pdf



