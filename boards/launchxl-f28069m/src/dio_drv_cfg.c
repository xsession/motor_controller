#include "dio_drv_cfg.h"

dio_drv_tst green_led_st = {
    .cfg_st = {.pin_u8 = GREEN_LED_PIN,
               .direction_u1 = DIO_OUTPUT,
               .callback_time_ms_u16 = 0,
               .filter_time_ms_u16 = 0,
               .mode_u8 = DIO_MODE_NORMAL,
               .state_u1 = DIO_LOW,
               .polarity_u1 = DIO_ACTIVE_HIGH,
               .pulldown_u1 = DIO_PULLDOWN_DISABLE,
               .pullup_u1 = DIO_PULLUP_DISABLE}};

dio_drv_tst i2c1_scl_pin_st = {
    .cfg_st = {.pin_u8 = I2C_1_SCL_PIN,
               .direction_u1 = DIO_OUTPUT,
               .callback_time_ms_u16 = 0,
               .filter_time_ms_u16 = 0,
               .mode_u8 = DIO_MODE_I2C,
               .state_u1 = DIO_HIGH,
               .polarity_u1 = DIO_ACTIVE_HIGH,
               .pulldown_u1 = DIO_PULLDOWN_DISABLE,
               .pullup_u1 = DIO_PULLUP_DISABLE}};

dio_drv_tst i2c1_sda_pin_st = {
    .cfg_st = {.pin_u8 = I2C_1_SDA_PIN,
               .direction_u1 = DIO_OUTPUT,
               .callback_time_ms_u16 = 0,
               .filter_time_ms_u16 = 0,
               .mode_u8 = DIO_MODE_I2C,
               .state_u1 = DIO_HIGH,
               .polarity_u1 = DIO_ACTIVE_HIGH,
               .pulldown_u1 = DIO_PULLDOWN_DISABLE,
               .pullup_u1 = DIO_PULLUP_DISABLE}};

dio_drv_tst i2c2_scl_pin_st = {
    .cfg_st = {.pin_u8 = I2C_2_SCL_PIN,
               .direction_u1 = DIO_OUTPUT,
               .callback_time_ms_u16 = 0,
               .filter_time_ms_u16 = 0,
               .mode_u8 = DIO_MODE_I2C,
               .state_u1 = DIO_HIGH,
               .polarity_u1 = DIO_ACTIVE_HIGH,
               .pulldown_u1 = DIO_PULLDOWN_DISABLE,
               .pullup_u1 = DIO_PULLUP_DISABLE}};

dio_drv_tst i2c2_sda_pin_st = {
    .cfg_st = {.pin_u8 = I2C_2_SDA_PIN,
               .direction_u1 = DIO_OUTPUT,
               .callback_time_ms_u16 = 0,
               .filter_time_ms_u16 = 0,
               .mode_u8 = DIO_MODE_I2C,
               .state_u1 = DIO_HIGH,
               .polarity_u1 = DIO_ACTIVE_HIGH,
               .pulldown_u1 = DIO_PULLDOWN_DISABLE,
               .pullup_u1 = DIO_PULLUP_DISABLE}};

dio_drv_tst i2c3_scl_pin_st = {
    .cfg_st = {.pin_u8 = I2C_3_SCL_PIN,
               .direction_u1 = DIO_OUTPUT,
               .callback_time_ms_u16 = 0,
               .filter_time_ms_u16 = 0,
               .mode_u8 = DIO_MODE_I2C,
               .state_u1 = DIO_HIGH,
               .polarity_u1 = DIO_ACTIVE_HIGH,
               .pulldown_u1 = DIO_PULLDOWN_DISABLE,
               .pullup_u1 = DIO_PULLUP_DISABLE}};

dio_drv_tst i2c3_sda_pin_st = {
    .cfg_st = {.pin_u8 = I2C_3_SDA_PIN,
               .direction_u1 = DIO_OUTPUT,
               .callback_time_ms_u16 = 0,
               .filter_time_ms_u16 = 0,
               .mode_u8 = DIO_MODE_I2C,
               .state_u1 = DIO_HIGH,
               .polarity_u1 = DIO_ACTIVE_HIGH,
               .pulldown_u1 = DIO_PULLDOWN_DISABLE,
               .pullup_u1 = DIO_PULLUP_DISABLE}};

dio_drv_tst servo_1_pin_st = {
    .cfg_st = {.pin_u8 = SERVO_1_PIN,
               .direction_u1 = DIO_OUTPUT,
               .callback_time_ms_u16 = 0,
               .filter_time_ms_u16 = 0,
               .mode_u8 = DIO_MODE_PWM,
               .state_u1 = DIO_LOW,
               .polarity_u1 = DIO_ACTIVE_HIGH,
               .pulldown_u1 = DIO_PULLDOWN_DISABLE,
               .pullup_u1 = DIO_PULLUP_DISABLE}};

dio_drv_tst servo_2_pin_st = {
    .cfg_st = {.pin_u8 = SERVO_2_PIN,
               .direction_u1 = DIO_OUTPUT,
               .callback_time_ms_u16 = 0,
               .filter_time_ms_u16 = 0,
               .mode_u8 = DIO_MODE_PWM,
               .state_u1 = DIO_LOW,
               .polarity_u1 = DIO_ACTIVE_HIGH,
               .pulldown_u1 = DIO_PULLDOWN_DISABLE,
               .pullup_u1 = DIO_PULLUP_DISABLE}};

dio_drv_tst servo_3_pin_st = {
    .cfg_st = {.pin_u8 = SERVO_3_PIN,
               .direction_u1 = DIO_OUTPUT,
               .callback_time_ms_u16 = 0,
               .filter_time_ms_u16 = 0,
               .mode_u8 = DIO_MODE_PWM,
               .state_u1 = DIO_LOW,
               .polarity_u1 = DIO_ACTIVE_HIGH,
               .pulldown_u1 = DIO_PULLDOWN_DISABLE,
               .pullup_u1 = DIO_PULLUP_DISABLE}};

void init_dio_cfg()
{
	init_dio_drv(&green_led_st);

	init_dio_drv(&i2c1_scl_pin_st);
	init_dio_drv(&i2c1_sda_pin_st);

	init_dio_drv(&i2c2_scl_pin_st);
	init_dio_drv(&i2c2_sda_pin_st);

	init_dio_drv(&i2c3_scl_pin_st);
	init_dio_drv(&i2c3_sda_pin_st);

	init_dio_drv(&servo_1_pin_st);
	init_dio_drv(&servo_2_pin_st);
	init_dio_drv(&servo_3_pin_st);
}



