#include <AbstractSerial.h>
#include <HardwareSerialAbs.h>

HwSerAbs hwport(Serial);

void setup() {
  hwport.begin(115200);
}

void loop() {
  doAThing(hwport);
}

void doAThing(AbsSer &port) {
    if (port.available() > 0) {
        port.write(port.read());
    }
}

