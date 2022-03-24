#include <WiFi.h>
#include <PubSubClient.h>
#include "Adafruit_SHT4x.h"
 
Adafruit_SHT4x sht4 = Adafruit_SHT4x();
const char *ssid = "Random";
const char *PWD = "12345678";


long last_time = 0;
char data[100];
int led_pin=26;

// MQTT client
WiFiClient wifiClient;
PubSubClient mqttClient(wifiClient); 

char *mqttServer = "broker.hivemq.com";
const char *mqtt_username = "sai eswar";
const char *mqtt_password = "1234567890";
int mqttPort = 1883;

//--------------------first-------------
void connectToWiFi() {
  Serial.print("Connectiog to "); 
  WiFi.begin(ssid, PWD);
  Serial.println(ssid);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.print("Connected."); 
} 
//---------------second----------------
void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Callback - ");
  Serial.print("Message:");
  String msg;
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
    msg += (char)payload[i];
  }
  Serial.println();
  if(String(topic) == "/swa/commands")
  {
    if (msg == "on")
    {
      Serial.println("on");
      digitalWrite(led_pin,HIGH);
      delay(500);
      
    }
    else if(msg == "off")
    {
      Serial.println("off");
      digitalWrite(led_pin,LOW);
      delay(500);
    }
    else
    {
      Serial.println(msg);
    }
    
  }
}
//------------------------third-------------------
void setupMQTT() {
  mqttClient.setServer(mqttServer, mqttPort);
  // set the callback function
  mqttClient.setCallback(callback);
}
//--------------------fourth---------------
void setup() {
  Serial.begin(115200);
  pinMode(26,OUTPUT);
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
  connectToWiFi();
  setupMQTT();   
}
//---------------------fifith---------------
void reconnect() {
  Serial.println("Connecting to MQTT Broker...");
  while (!mqttClient.connected()) {
      Serial.println("Reconnecting to MQTT Broker..");
      String clientId = "ESP32Client-";
      //clientId += String(random(0xffff), HEX);
       clientId += String(WiFi.macAddress());
      
      if (mqttClient.connect(clientId.c_str(),mqtt_username,mqtt_password)) {
        Serial.println("Connected.");
        // subscribe to topic
        mqttClient.subscribe("/swa/commands");
      }   
  }
}
//----------------------sixth--------------------
void loop() {
  sensors_event_t humidity, temp;
  if (!mqttClient.connected())
  reconnect();
  mqttClient.loop();   
  long now = millis();
  if (now - last_time > 60000) {
    // Send data
    sht4.getEvent(&humidity, &temp);
    float tempe = temp.temperature;
    float hum = humidity.relative_humidity;
    // Publishing data throgh MQTT
    sprintf(data, "%f", tempe);
    Serial.println(data);
    mqttClient.publish("/swa/temperatures", data);
    sprintf(data, "%f", hum);
    Serial.println(data);
    mqttClient.publish("/swa/humidity", data);
    last_time = now;
  }
 }
