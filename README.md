# IoT-WiFi
This project contains list experiments on ESP 32 WROVER -B module.All these experiments are done by using WiFi features of the ESP 32.Here are the list of experiments
# List of Experiments
<b>1.</b>Blink a two LED’s continuously on & off with delay 500milliseconds using ESP 32 development board

<b>2.</b>Scan the nearby Wi-Fi networks using ESP 32. Get the SSID, RSSI of a network and check the authentication of the network (open network or secure network)

<b>3.</b>Connection
<ul style=“list-style-type:disc”>
  <li>Connect ESP 32 to an open Wi-Fi network</li>
  <li>Connect ESP 32 to an encrypted WPA2 network </li>
  </ul>
  
<b>4.</b>Build a web server using ESP 32 and control the LED’s state at the ESP 32 from the web server.

<b>5.</b>MQTT communication protocol with ESP 32 to publish and subscribe random data 
to topics & control the state of LED at the ESP 32 by publishing on/off messages to the 
ESP 32. 

<b>6.</b>Sending SHT 40 sensor data (Humidity & Temperature) from the ESP 32 to things speak and analyze the data in terms of plots at the things speak.

# Equipment Required

<b>1.</b>ESP 32 WROVER -B Module

<b>2.</b>Arduino IDE

<b>3.</b>SHT 40 (Temperature & Humidity) sensor

<b>4.</b>MQTTlense

<b>5.</b>Things speak

<b>6.</b>Bread board

<b>7.</b>Jumper wires

<b>8.</b>LED's

<b>9.</b>Micro USB cable
# Installation
<b>1.Arduino IDE</b>   
  <i>step 1:</i> Visit https://www.arduino.cc/en/Main/Software  to download the latest Arduino IDE version for your computer’s operating system. There are versions                      forWindows, Mac, and Linux systems.Download the suitable file for your system        
  <i>step 2:</i> Save the .exe file to your hard drive.  
  <i>step 3:</i> Open the .exe file & run the file and complete the Installation. 
  
  <b>2.Installing the ESP32 Board in Arduino IDE</b>  
  <i> step 1:</i> Connect ESP 32 board to the computer through USB cable  
     <i>step 2:</i> open the Arduino IDE        
   <i>step 3:</i> Go to the file >  Preferences and then paste the below link at the Additional Boards Manager URL field
                  https://dl.espressif.com/dl/package_esp32_index.json  
  <i> step 4:</i>	Go to the Tools  >  boards  >  Board manager and then install the ESP 32 
  
  <h4 style="color:black;font-size:40px;"> <b> 3.MQTTlens </b>  </h4>
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
