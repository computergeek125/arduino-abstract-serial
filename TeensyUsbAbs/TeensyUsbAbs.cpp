/*
 * Written by Ryan Smith <computergeek125@gmail.com>
 * Licensed under the MIT license.  See LICENSE for details
 */

#include "TeensyUsbAbs.h"

void TeensyUsbAbs::begin(unsigned long baud, uint8_t config) {
    return;
}

void TeensyUsbAbs::begin(unsigned long baud) {
    return;
}

void TeensyUsbAbs::end() {
    port->end();
}

int TeensyUsbAbs::available(void) {
    return port->available();
}

int TeensyUsbAbs::peek(void) {
    return port->peek();
}

int TeensyUsbAbs::read(void) {
    return port->read();
}

int TeensyUsbAbs::availableForWrite(void) {
    return port->availableForWrite();
}

void TeensyUsbAbs::flush(void) {
    port->flush();
}

size_t TeensyUsbAbs::write(uint8_t n) {
    return port->write(n);
}

size_t TeensyUsbAbs::write(unsigned long n) {
    return port->write(n);
}

size_t TeensyUsbAbs::write(long n) {
    return port->write(n);
}

size_t TeensyUsbAbs::write(unsigned int n) {
    return port->write(n);
}

size_t TeensyUsbAbs::write(int n) {
    return port->write(n);
}