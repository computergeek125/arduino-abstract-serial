/*
 * Written by Ryan Smith <computergeek125@gmail.com>
 * Licensed under the MIT license.  See LICENSE for details
 */

#ifndef AbstractSerial_H
#define AbstractSerial_H
#define LIBRARY_VERSION_ABSSER_H   "0.1.0-alpha"

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

/**
 * This library is intended to provide a Serial class that wraps around the 
 * various UART, USBSerial, and other interesting serial ports seen in the 
 * Arduino ecosystem.  This is done by creating an API-compliant child class to
 * this abstract class.  This child class can be passed in to a function or 
 * library in abstract, so the program does not have to maintain its own wrapper
 * code to make multiple types of serial port work.
 *
 * This base library will include code to abstract a few different serial ports
 * and other stream-like devices that need to be accessed beyond their stream-
 * like capabilities.  Basically, this library's functions wrap the actual
 * serial port's functions one-to-one.
 * 
 * This class was based on the public interface of HardwareSerial.  If there are
 * any gaping incompatibilities with other kinds of ports, please open an issue 
 * on GitHub!
 * <https://github.com/computergeek125/arduino-abstract-serial>
 */

class AbsSer : public Stream {
public:
    virtual void begin(unsigned long baud, uint8_t config);
    virtual void begin(unsigned long baud);
    virtual void end();
    virtual int available(void);
    virtual int peek(void);
    virtual int read(void);
    virtual int availableForWrite(void);
    virtual void flush(void);
    virtual size_t write(uint8_t n);
    virtual size_t write(unsigned long n);
    virtual size_t write(long n);
    virtual size_t write(unsigned int n);
    virtual size_t write(int n);
    virtual size_t write(String s);
    virtual size_t write(char* buf, size_t size);
    virtual operator bool();
}