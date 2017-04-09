/*
 * Written by Ryan Smith <computergeek125@gmail.com>
 * Licensed under the MIT license.  See LICENSE for details
 */

#include "UartSerialAbs.h"

void UartAbs::begin(unsigned long baud, uint8_t config) {
    port->begin(baud, config);
}

void UartAbs::begin(unsigned long baud) {
    port->begin(baud);
}

void UartAbs::end() {
    port->end();
}

int UartAbs::available(void) {
    return port->available();
}

int UartAbs::peek(void) {
    return port->peek();
}

int UartAbs::read(void) {
    return port->read();
}

int UartAbs::availableForWrite(void) {
    return port->availableForWrite();
}

void UartAbs::flush(void) {
    port->flush();
}

size_t UartAbs::write(uint8_t n) {
    return port->write(n);
}

size_t UartAbs::write(unsigned long n) {
    return port->write(n);
}

size_t UartAbs::write(long n) {
    return port->write(n);
}

size_t UartAbs::write(unsigned int n) {
    return port->write(n);
}

size_t UartAbs::write(int n) {
    return port->write(n);
}