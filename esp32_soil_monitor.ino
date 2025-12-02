#include <WiFi.h>

int soilPin = 34;
int tempPin = 35;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int soil = analogRead(soilPin);
  int temp = analogRead(tempPin);

  Serial.print("Soil Moisture: ");
  Serial.println(soil);

  Serial.print("Temperature Sensor Value: ");
  Serial.println(temp);

  delay(2000);
}
