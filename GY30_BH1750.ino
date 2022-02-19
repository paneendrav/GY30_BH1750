#include <Wire.h>
#include <BH1750.h>

BH1750 lightIntensitySensor;

void setup() {
  Serial.begin(9600);
  Serial.println(F("BH1750 Booting"));

  Wire.begin();

  lightIntensitySensor.begin();

  Serial.println(F("BH1750 Starting"));
}

void loop() {
  float lux = lightIntensitySensor.readLightLevel();
  Serial.print("Light: ");
  Serial.print(lux);
  Serial.println(" luminous flux per unit area:lx");
  delay(1000);
}
