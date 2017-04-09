/*
 * Written by Ryan Smith <computergeek125@gmail.com>
 * Licensed under the MIT license.  See LICENSE for details
 */

#ifndef SoftwareSerialAbs_H
#define SoftwareSerialAbs_H
#define LIBRARY_VERSION_SWSERABS_H   "0.1.0-alpha"

#include <inttypes.h>
#include <AbstractSerial.h>
#include <SoftwareSerial.h>

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class SwSerAbs : public AbsSer {
public:
    inline SwSerAbs(SoftwareSerial &swport) {
        port = &swport;
        constructed = false;
    }
    inline SwSerAbs(int rxpin, int txpin, unsigned long baud) {
        port = new SoftwareSerial(rxpin, txpin);
        port->begin(baud);
        constructed = true;
    }
    inline ~SwSerAbs() {
        if (constructed) {
            delete port;
        }
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
    inline SoftwareSerial* getPort() {
        return port;
    }

private:
    bool constructed;
    SoftwareSerial* port;
};
#endif