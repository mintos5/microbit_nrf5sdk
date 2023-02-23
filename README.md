# Example Blinky App for Microbit

Example blinky app from Nordic's NRF5 SDK.
Layout of project inspired from other github project:
https://github.com/bluekitchen/raccoon

## Supported Devices

Example was successfully tested on??: 
 - Adafruit [Bluefruit LE Friend](https://www.adafruit.com/product/2267) with nRF51822
 - BBC micro:bit [BBC micro:bit](https://tech.microbit.org/hardware/1-3-revision/) with nRF51822

## Dependencies

The firmware requires the regular ARM-EABI-NONE toolchain.
It requires the nRF5 SDK. If not installed locally, the build system can automatically download it into the project folder.

## Build

With the dependencies in place, run `make` in the main project folder. Make will download the nRF5 SDK if needed.

## Flash

Flashing depends on the used device.

### Adafruit Bluefruit LE Friend

There's no support to update via the BLE DFU. However, the LE Friend provides the regular SWD interface to upload the firmware with an JTAG/SWD programmer (e.g. a ST-Link or a SEGGER J-Link). Config files for OpenOCD are provided int the `firmware/nrf/blefriend32` folder.
