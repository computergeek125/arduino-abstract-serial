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
