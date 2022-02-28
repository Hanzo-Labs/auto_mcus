#include "sam3x8e/sam3x8e.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(1000);
  auto_os::mcu::chip_id_cidr chip_id;

  chip_id.print();
}

