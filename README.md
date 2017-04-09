# arduino-abstract-serial
Abstract serial class for all the various HardwareSerial, SoftwareSerial, SerialUSB, 
etc. so that they can be easily passed by reference into a function

This library is intended to provide a Serial class that wraps around the 
various UART, USBSerial, and other interesting serial ports seen in the 
Arduino ecosystem.  This is done by creating an API-compliant child class to
this abstract class.  This child class can be passed in to a function or 
library in abstract, so the program does not have to maintain its own wrapper
code to make multiple types of serial port work.

This base library will include code to abstract a few different serial ports
and other stream-like devices that need to be accessed beyond their stream-
like capabilities.  Basically, this library's functions wrap the actual
serial port's functions one-to-one.  In cases where functionality is not available,
like SoftwareSerial's `availableForWrite` and Teensy's USB Serial port's `begin`, 
this library will return a constant.

This class was based on the public interface of HardwareSerial.  If there are
any gaping incompatibilities with other kinds of ports, please open an issue 
on GitHub!
<https://github.com/computergeek125/arduino-abstract-serial>

## How it works
`AbstractSerial` is the root class.  Like other Serial ports in Arduino, it
inherits from `Stream`.  It defines a common interface for serial ports.  The 
other files inherit from it, and wrap the actual serial port being used.  When
using these in a function or class, pass the child object as a reference of 
type `AbsSer`.  See `./examples/` in this repo for examples.

## Things to know
Most hardware serial ports behave similarly.  But in the case of some direct 
USB serial ports, there are some functions that aren't used.  In the case of
SoftwareSerial, `availableForWrite` and `begin(unsigned long baud, uint8_t 
config)` do not exist.

In these cases where it is functionality that most other serial ports use, 
the library masks this.  SoftwareSerial's `availableForWrite` always returns
`0` as data is transmitted synchronously.  In the case of the Teensy's 
`Serial`, which points to a special USB port, the `begin` function in this
wrapper returns without modifying the wrapped object.
