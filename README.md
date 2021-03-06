# simpleBBB-lib
A very simple C library to handle the peripherals of the BeagleBone Black (and Wireless) board -- GPIO - I2C - SPI - etc

## Motivation
The library was born because I wanted to find a library as similar as possible to ***"WiringPi"*** on *Raspberry Pi*, so that I could reuse my Raspberry codes.

As I did not find anything that I liked, **I made my own library** achieving the expected results.

## Install
To install the library (in Linux) just go to the root of the repository and run:
```
bash install.sh
```
If you don't want to install it just copy the lib files into the `/src` folder in your code.

## Library details
### GPIO
The GPIO library is extremely basic, it consists of 3 main functions:
- `simpleBBB_GPIOset(int gpio, int d)`  //   Set Direction     0 - OUTPUT      ----      1 - INPUT
- `simpleBBB_GPIOwrite(int gpio, bool l)`  //   Write Digital Logic     false - Low      ----      true - High
- `simpleBBB_GPIOread(int gpio)`  //   Read GPIO value     0 (Low)    ----     1 (High)

### I2C
As mentioned before, this library is inspired by ***Raspberry's "WiringPi" lib***, in the case of *I2C* **the functions are TOTALLY compatible with this library**, only the names are changed but the functionality is the same.

Main I2C lib functions:
- `simpleBBB_I2CSetupInterface(const char *device, int devId)`
- `simpleBBB_I2CSetup(const int p, const int devId)`   // The only one just a little different to WiringPi function, to fit BeagleBone board. `p` has been added, which is the I2C bus number chosen by you on the board (normally `2` is used).
- `simpleBBB_I2CWrite(int fd, int data)`
- `simpleBBB_I2CWriteReg8(int fd, int reg, int value)`
- `simpleBBB_I2CWriteReg16(int fd, int reg, int value)`
- `simpleBBB_I2CRead(int fd, int data)`
- `simpleBBB_I2CReadReg8(int fd, int reg, int value)`
- `simpleBBB_I2CReadReg16(int fd, int reg, int value)`

If you want to adapt *Raspberry Pi code*, if in your Raspberry code you had the `wiringPiI2CWrite()` function, you just have to rename to `simpleBBB_I2CWrite()`, it's just that simple.

### SPI
Not ready yet.

## Future improvements
- More examples.
- Add SPI library
- Add more functions and features to GPIO lib because it might be too simple.


*If you have any question about this repository, do not hesitate to contact me: gustavobelbruno@gmail.com or open an issue on GitHub.*
