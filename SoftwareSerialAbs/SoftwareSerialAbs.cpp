/*
 * Written by Ryan Smith <computergeek125@gmail.com>
 * Licensed under the MIT license.  See LICENSE for details
 */

#include "SoftwareSerialAbs.h"

void SwSerAbs::begin(unsigned long baud, uint8_t config) {
    port->begin(baud);
}

void SwSerAbs::begin(unsigned long baud) {
    port->begin(baud);
}

void SwSerAbs::end() {
    port->end();
}

int SwSerAbs::available(void) {
    return port->available();
}

int SwSerAbs::peek(void) {
    return port->peek();
}

int SwSerAbs::read(void) {
    return port->read();
}

int SwSerAbs::availableForWrite(void) {
    return 0;
}

void SwSerAbs::flush(void) {
    port->flush();
}

size_t SwSerAbs::write(uint8_t n) {
    return port->write(n);
}

size_t SwSerAbs::write(unsigned long n) {
    return port->write(n);
}

size_t SwSerAbs::write(long n) {
    return port->write(n);
}

size_t SwSerAbs::write(unsigned int n) {
    return port->write(n);
}

size_t SwSerAbs::write(int n) {
    return port->write(n);
}