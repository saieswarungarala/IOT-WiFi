#include <WiFi.h>
#include "ThingSpeak.h"
#include "Adafruit_SHT4x.h"


Adafruit_SHT4x sht4 = Adafruit_SHT4x();
const char* ssid = "Random"; 
const char* password = "12345678";   

WiFiClient  client;

unsigned long myChannelNumber = 1;
const char * myWriteAPIKey = "PU3L0IHUZIXS9COZ";

unsigned long myChannelNumber2 = 2;
const char * myWriteAPIKey2="0LXUOMKG4C46824O";

// Timer variables
unsigned long lastTime = 0;
unsigned long timerDelay = 30000;
float readings;

void setup() {
  
  Serial.begin(115200);     
  while (!Serial)
    delay(10);
  Serial.println("Adafruit SHT4x test");
  if (! sht4.begin()) 
  {
    Serial.println("Couldn't find SHT4x");
    while (1) delay(1);
  }
  Serial.println("Found SHT4x sensor");
  Serial.print("Serial number 0x");
  Serial.println(sht4.readSerial(), HEX);
  sht4.setPrecision(SHT4X_HIGH_PRECISION); 
  sht4.setHeater(SHT4X_NO_HEATER);   
  
  ThingSpeak.begin(client);  
}

void loop() {
  sensors_event_t humidity, temp;
  if ((millis() - lastTime) > timerDelay) {   
   
    if(WiFi.status() != WL_CONNECTED){
      Serial.print("Attempting to connect");
      while(WiFi.status() != WL_CONNECTED){
        WiFi.begin(ssid, password); 
        delay(5000);     
      } 
      Serial.println("\nConnected.");
    }
    sht4.getEvent(&humidity, &temp);
    float tempe = temp.temperature;
    float hum = humidity.relative_humidity; 
    //readings = random(10,100);
    Serial.print("TEMPERATURE : ");
    Serial.println(tempe);
        int x = ThingSpeak.writeField(myChannelNumber, 1, tempe, myWriteAPIKey);

    Serial.print("HUMIDITY : ");
    Serial.println(hum); 
     int y = ThingSpeak.writeField(myChannelNumber2, 1, hum, myWriteAPIKey2);  
    //if( x == 200){
     // Serial.println("Channel update successful.");
    //}
    //else{
     //Serial.println("Problem updating channel. HTTP error code " + String(x));
    //}
    lastTime = millis();
  }
}
