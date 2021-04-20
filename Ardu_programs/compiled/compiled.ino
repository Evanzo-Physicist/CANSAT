#include "./BMP280/BMP280.h"

 //BMP280 sensor
BMP280 b28;
  
void setup()
{
  b28.startup();
}
void loop()
{
  float pressureVal = b28.get();
  Serial.println("Pressure: ");
  Serial.println(pressureVal);
  Serial.println(" Pa");
}
