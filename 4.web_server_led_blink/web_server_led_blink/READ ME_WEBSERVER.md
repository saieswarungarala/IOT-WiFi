
#  web server using ESP 32 
 
# Description
The main aim of this experiment is get some understanding about building a web server with 
ESP 32 and control the LED’s state by using arduino programming environment. The web server 
we build that controls the LED’s which is connected to the ESP 32 GPIO 26 pin and also we 
can access the ESP 32 web server at anywhere by just typing ESP 32 IP address on a browser. 
By clicking buttons on the web server we can control the state of LED’s at ESP 32 side.


## Installation 
 <h4 style="color:black;font-size:40px;"> <b> I.Arduino IDE</b>  </h4>
  <i>step 1:</i>          
  Visit https://www.arduino.cc/en/Main/Software  to download the latest Arduino IDE version for your computer’s operating system. There are versions for Windows, Mac, and Linux systems.  
  <i>step 2:</i> Save the .exe file to your hard drive.  
  <i>step 3:</i>Open the .exe file & run the file and complete the Installation.       

  <b><h4 style="color:black;font-size:40px;">II.Installing the ESP32 Board in Arduino IDE  </b>  </h4>
   <i>step 1:</i> Connect ESP 32 board to the computer through USB cable  
   <i>step 2:</i> open the Arduino  
   <i>step 3:</i> 	Go to the file >  Preferences and then paste the below link at the Additional Boards Manager URL field
          https://dl.espressif.com/dl/package_esp32_index.json  
   <i>step 4:</i>	Go to the Tools  >  boards  >  Board manager and then install the ESP 32  



  
  


     


## Required Libraries
We need to include WiFi library to use WiFi funcationalities of ESP 32 WROVER -B Module

<b>#include <WiFi.h></b>

Once we install the ESP 32 boards to the IDE it can automatically adds the WiFi library






## Documents
1.Installing guide for Arduino IDE
          https://www.circuitbasics.com/arduino-basics-installing-software/ 
          
2.ESP 32 WROVER Module
 https://www.espressif.com/sites/default/files/documentation/esp32-wrover-b_datasheet_en.pdf


