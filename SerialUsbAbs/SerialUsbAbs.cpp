/*
 * Written by Ryan Smith <computergeek125@gmail.com>
 * Licensed under the MIT license.  See LICENSE for details
 */

#include "SerialUsbAbs.h"

void SerialUsbAbs::begin(unsigned long baud, uint8_t config) {
    port->begin(baud, config);
}

void SerialUsbAbs::begin(unsigned long baud) {
    port->begin(baud);
}

void SerialUsbAbs::end() {
    port->end();
}

int SerialUsbAbs::available(void) {
    return port->available();
}

int SerialUsbAbs::peek(void) {
    return port->peek();
}

int SerialUsbAbs::read(void) {
    return port->read();
}

int SerialUsbAbs::availableForWrite(void) {
    return port->availableForWrite();
}

void SerialUsbAbs::flush(void) {
    port->flush();
}

size_t SerialUsbAbs::write(uint8_t n) {
    return port->write(n);
}

size_t SerialUsbAbs::write(unsigned long n) {
    return port->write(n);
}

size_t SerialUsbAbs::write(long n) {
    return port->write(n);
}

size_t SerialUsbAbs::write(unsigned int n) {
    return port->write(n);
}

size_t SerialUsbAbs::write(int n) {
    return port->write(n);
}