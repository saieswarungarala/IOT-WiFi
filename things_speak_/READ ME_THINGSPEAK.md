
# Sending Sensor data from ESP 32 to Things speak 
 
# Description
The main aim of this experiment is how to send the SHT 40 sensor data to the things speak and 
once we get the data at the things speak how to analyze the data at the things speak in terms of 
plots, histograms etc. 
<h4 style="color:black;font-size:40px;"> <b>Things Speak</b>  </h4>
Things speak is an IOT analytics platform that’s allow us to aggregate, visualize, analyze live 
data streams in the cloud. Things speak provide instant visualization of the data that is provided 
by our device by running the MATLAB scripts. 

## Installation 
 <h4 style="color:black;font-size:40px;"> <b> 1.Arduino IDE</b>  </h4>
  <b><i>step 1:</i></b>          
  Visit https://www.arduino.cc/en/Main/Software  to download the latest Arduino IDE version for your computer’s operating system. There are versions for Windows,     Mac, and Linux systems.
  
  <b><i>step 2:</i></b> Save the .exe file to your hard drive.  
  <b><i>step 3:</i></b>Open the .exe file & run the file and complete the Installation.       

  <b><h4 style="color:black;font-size:40px;">2.Installing the ESP32 Board in Arduino IDE  </b>  </h4>
   <b><i>step 1:</i></b> Connect ESP 32 board to the computer through USB cable  
   <b><i>step 2:</i></b> open the Arduino  
   <b><i>step 3:</i></b> 	Go to the file >  Preferences and then paste the below link at the Additional Boards Manager URL field
          https://dl.espressif.com/dl/package_esp32_index.json  
   <b><i>step 4:</i></b>	Go to the Tools  >  boards  >  Board manager and then install the ESP 32  
   
    
   

   
   
   
   
   
   
   
   
   
   
   
   
   
 
   



  
  


     


## Required Libraries 
 <h4 style="color:black;font-size:40px;"> <b>1.WiFi Library</b>  </h4>

 Include WiFi library to use WiFi funcationalities of ESP 32 WROVER -B Module

 <b>#include <WiFi.h></b> 
 
 Once we install the ESP 32 boards to the IDE it can automatically adds the WiFi library
 
 <h4 style="color:black;font-size:40px;"> <b> 2.Adafruit_SHT4x library</b>  </h4>
 
 Include Adafruit_SHT4x.h library for using the SHT 40 sensor
 
 <b>#include "Adafruit_SHT4x.h"</b>
 
 For installing Adafruit_SHT4x.h library,in arduino go to <b>Tools</b> --> <b>manage libraries</b>-->install <b>Adafruit_SHT4x</b> library
 
 <h4 style="color:black;font-size:40px;"> <b> 3.ThingSpeak </b>  </h4>
 
 Include ThingSpeak.h library for using MQTT protocol
 
 <b>#include <ThingSpeak.h></b>
 
 For installing ThingSpeak.h library,in arduino go to <b>Tools</b> --> <b>manage libraries</b>-->install <b>ThingSpeak</b> library

 






## Documents
1.Installing guide for Arduino IDE
          https://www.circuitbasics.com/arduino-basics-installing-software/ 
          
2.ESP 32 WROVER Module
 https://www.espressif.com/sites/default/files/documentation/esp32-wrover-b_datasheet_en.pdf

3.SHT 40(Temperature & Humidity)Sensor
  https://wiki.dfrobot.com/SHT40_Humidity_and_Temperature_Sensor_SKU_S
  
4.Things Speak
  https://thingspeak.com/
  


  
  





