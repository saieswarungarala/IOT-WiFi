
int LED_PIN = 26;
int LED_PIN2=27;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_PIN,OUTPUT);
  pinMode(LED_PIN2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN,HIGH);
  Serial.println("HIGH");
  delay(500);
  digitalWrite(LED_PIN,LOW);
   Serial.println("LOW");
  delay(500);
  digitalWrite(LED_PIN2,HIGH);
   Serial.println("HIGH");
  delay(500);
  digitalWrite(LED_PIN2,LOW);
   Serial.println("LOW");
  delay(500);

}
