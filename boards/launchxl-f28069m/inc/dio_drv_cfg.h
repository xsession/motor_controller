#ifndef DIO_CFG_LAUNCHXL_F28069M_H
#define DIO_CFG_LAUNCHXL_F28069M_H

#include "dio_drv.h"

// ----- Pin naming --------------------------------

#define GREEN_LED_PIN GPIO_25
#define GREEN_LED_PIN GPIO_25
#define GREEN_LED_PIN GPIO_25

#define I2C_1_SCL_PIN GPIO_0
#define I2C_1_SDA_PIN GPIO_1

#define SERVO_1_PIN GPIO_13
#define SERVO_2_PIN GPIO_14
#define SERVO_3_PIN GPIO_15

// ------- DIO inctances ---------------------------

extern dio_drv_tst green_led_st;

extern dio_drv_tst i2c1_scl_pin_st;
extern dio_drv_tst i2c1_sda_pin_st;

extern dio_drv_tst i2c2_scl_pin_st;
extern dio_drv_tst i2c2_sda_pin_st;

extern dio_drv_tst i2c3_scl_pin_st;
extern dio_drv_tst i2c3_sda_pin_st;

extern dio_drv_tst servo_1_pin_st;
extern dio_drv_tst servo_2_pin_st;
extern dio_drv_tst servo_3_pin_st;

// ------- Inicialitor for all DIO inctance ---------

void init_dio_cfg(void);


#endif // DIO_CFG_LAUNCHXL_F28069M_H
