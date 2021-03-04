/*
 *	simpleBBB_I2C.c:
 *		Simplified I2C lib for BeagleBone Black - BeagleBone Black Wireless
 *	Copyright (c) 2021 Gustavo Belbruno
 */

#ifdef __cplusplus
extern "C" {
#endif

extern int wiringPiI2CRead           (int fd) ;
extern int wiringPiI2CReadReg8       (int fd, int reg) ;
extern int wiringPiI2CReadReg16      (int fd, int reg) ;

extern int wiringPiI2CWrite          (int fd, int data) ;
extern int wiringPiI2CWriteReg8      (int fd, int reg, int data) ;
extern int wiringPiI2CWriteReg16     (int fd, int reg, int data) ;

extern int wiringPiI2CSetupInterface (const char *device, int devId) ;
extern int wiringPiI2CSetup          (const int devId) ;

#ifdef __cplusplus
}
#endif
