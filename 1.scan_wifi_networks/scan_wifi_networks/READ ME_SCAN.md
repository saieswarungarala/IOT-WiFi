
# Scan WiFi networks 
# Description
 Scan the nearby Wi-Fi networks using ESP 32. Get the SSID, RSSI of a network 
 and check the authentication of the network (open network or secure network). ESP 32 has built in Wi-Fi (802.11 b/g/n (802.11n up to 150Mbps) protocol .Center frequency range of operating channel 2412 ~ 2484 MHz’s.    
 
<h4 style="color:black;font-size:40px;"> <i><b>ESP32 Wi-Fi Modes:</b></i></h4>

ESP 32 can operate under any of below mentioned modes 
 1. Station Mode 
 2. Access Point Mode 
 
 <b><i>Station mode: </i></b>

 When ESP 32 is in station mode it can connect to othe WiFi networks like WiFi router
 
 <b><i>Access Point Mode </i></b>
 
 When we set ESP32 as in access point mode, we can be connected using any device with Wi-Fi capabilities 
 without connecting to the router. When we set the ESP32 as an access point, we can create its own 
Wi-Fi network, and nearby Wi-Fi devices (stations) can connect to it, like Smartphone or computer.



## Installation 
 <h4 style="color:black;font-size:40px;"> <b> 1.Arduino IDE</b>  </h4>
  <i>step 1:</i>          
  Visit https://www.arduino.cc/en/Main/Software  to download the latest Arduino IDE version for your computer’s operating system. There are versions for Windows, Mac, and Linux systems.  
  <i>step 2:</i> Save the .exe file to your hard drive.  
  <i>step 3:</i>Open the .exe file & run the file and complete the Installation.       

  <b><h4 style="color:black;font-size:40px;">2.Installing the ESP32 Board in Arduino IDE  </b>  </h4>
   <i>step 1:</i> Connect ESP 32 board to the computer through USB cable  
   <i>step 2:</i> open the Arduino  
   <i>step 3:</i> 	Go to the file >  Preferences and then paste the below link at the Additional Boards Manager URL field
   https://dl.espressif.com/dl/package_esp32_index.json  
   <i>step 4:</i>	Go to the Tools  >  boards  >  Board manager and then install the ESP 32  



  
  


     


# Required Libraries
We need to include WiFi library to use WiFi funcationalities of ESP 32 WROVER -B Module
#inclue <WiFi.h>
Once we install the ESP 32 boards to the IDE it can automatically adds the WiFi library






## Documents
1.Installing guide for Arduino IDE
          https://www.circuitbasics.com/arduino-basics-installing-software/ 
          
2.ESP 32 WROVER Module
 https://www.espressif.com/sites/default/files/documentation/esp32-wrover-b_datasheet_en.pdf
