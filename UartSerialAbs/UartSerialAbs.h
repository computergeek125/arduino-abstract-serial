/*
 * Written by Ryan Smith <computergeek125@gmail.com>
 * Licensed under the MIT license.  See LICENSE for details
 */

#ifndef UartSerialAbs_H
#define UartSerialAbs_H
#define LIBRARY_VERSION_UARTABS_H   "0.1.0-alpha"

#include <inttypes.h>
#include <AbstractSerial.h>

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class UartAbs : public AbsSer {
public:
    inline UartAbs(Uart &hsport) {
        port = &hsport;
    }
    void begin(unsigned long baud, uint8_t config);
    void begin(unsigned long baud);
    void end();
    int available(void);
    int peek(void);
    int read(void);
    int availableForWrite(void);
    void flush(void);
    using Print::write;
    size_t write(uint8_t n);
    size_t write(unsigned long n);
    size_t write(long n);
    size_t write(unsigned int n);
    size_t write(int n);
    inline operator bool() {return port;}

private:
    Uart* port;
};
#endif