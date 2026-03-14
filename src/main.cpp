//This is meant to run on arduino 
#include <Arduino.h>
#include "current_mapping.h"

//Pin should change based on the hardware setup
int const voltagePin = A0;

void setup() {
  Serial.begin(115200); 
  //analogReadResolution(12);
}

//Just a loop that reads the voltage from the custom 
//Current sensor (electrical) and maps it to current
void loop() {
  int rawADC = analogRead(voltagePin);
  
  double input_voltage = (rawADC * 3.3) / 4095.0;

  double output_current = current_to_voltage(input_voltage);

  Serial.print("V | current: "); 
  Serial.println(output_current);

  delay(100);
}