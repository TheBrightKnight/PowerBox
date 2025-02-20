#include <EEPROM.h>

void setup() {
  Serial.begin(9600);
  EEPROM.begin();
  delay(2000);
  Serial.println(F("Wiping EEPROM"));
  for (int i = 0; i < 512 + 1; i++) {
    EEPROM.write(i, 0); // Write 0 to each address
  }
  EEPROM.write(1000, 0);
  EEPROM.write(1001, 0);
  EEPROM.write(1002, (270 >> 8) & 0xFF);
  EEPROM.write(1003, 270 & 0xFF);
  EEPROM.write(1004, 0);
  EEPROM.write(1005, 0);
  EEPROM.write(1023, 0);
  Serial.println(F("EEPROM wiped successfully"));
}

void loop() {
}