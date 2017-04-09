#include <AbstractSerial.h>
#include <SoftwareSerialAbs.h>

SoftwareSerial swport(2,3);
SwSerAbs absport(swport);

void setup() {
    swport.begin(115200);
    Serial.begin(115200);
}

void loop() {
    doAThing(absport);
}

void doAThing(AbsSer &port) {
    if (port.available() > 0) {
        Serial.write(port.read());
    }
    if (Serial.available() > 0) {
        port.write(port.read());
    }
}

