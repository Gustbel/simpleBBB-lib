/*
 *	simpleBBB_I2C.c:
 *		Simplified I2C lib for BeagleBone Black - BeagleBone Black Wireless
 *	Copyright (c) 2021 Gustavo Belbruno
 */

#ifdef __cplusplus
extern "C" {
#endif

extern int simpleBBB_I2CRead           (int fd) ;
extern int simpleBBB_I2CReadReg8       (int fd, int reg) ;
extern int simpleBBB_I2CReadReg16      (int fd, int reg) ;

extern int simpleBBB_I2CWrite          (int fd, int data) ;
extern int simpleBBB_I2CWriteReg8      (int fd, int reg, int data) ;
extern int simpleBBB_I2CWriteReg16     (int fd, int reg, int data) ;

extern int simpleBBB_I2CSetupInterface (const char *device, int devId) ;
extern int simpleBBB_I2CSetup          (const int devId) ;

#ifdef __cplusplus
}
#endif
