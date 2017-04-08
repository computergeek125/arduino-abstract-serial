/*
 * Written by Ryan Smith <computergeek125@gmail.com>
 * Licensed under the MIT license.  See LICENSE for details
 */

HwSerAbs::begin(unsigned long baud, uint8_t config) {
    port.begin(baud, config);
}

HwSerAbs::begin(unsigned long baud) {
    port.begin(baud);
}

HwSerAbs::end() {
    port.end();
}

HwSerAbs::available(void) {
    return port.available()
}

HwSerAbs::peek(void) {
    return port.peek();
}

HwSerAbs::read(void) {
    return port.read();
}

HwSerAbs::availableForWrite(void) {
    return port.availableForWrite();
}

HwSerAbs::flush(void) {
    port.flush();
}

HwSerAbs::write(uint8_t n) {
    return port.write(n);
}

HwSerAbs::write(unsigned long n) {
    return port.write(n);
}

HwSerAbs::write(long n) {
    return port.write(n);
}

HwSerAbs::write(unsigned int n) {
    return port.write(n);
}

HwSerAbs::write(int n); {
    return port.write(n);
}

HwSerAbs::write(String s) {
    return port.write(s);
}

HwSerAbs::write(char* buf, size_t size) {
    return port.write(buf, size);
}