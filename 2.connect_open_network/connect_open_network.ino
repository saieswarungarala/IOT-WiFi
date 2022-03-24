#include <WiFi.h>

const char * ssid = "Random";
const char * password = "";

void initWiFi()
{
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid,password);
  Serial.println("connecting...");
  while (WiFi.status() !=  WL_CONNECTED)
  {
    Serial.println(".");
    delay(1000); 
  }
  Serial.println(WiFi.localIP());
}
void setup ()
{
  Serial.begin(115200);
  initWiFi();
  Serial.println("RSSI:");
  Serial.println(WiFi.RSSI());
  
}
void loop()
{

}
