#include "pwm_drv_cfg.h"

pwm_drv_tst servo_1_st = {
    .cfg_st = {
        .duty_u16 = 0,
        .enabled_u8 = 1,
        .frequency_u16 = 2,
        .output_pin_en = SERVO_1_PIN
    }
};

pwm_drv_tst servo_2_st = {
    .cfg_st = {
        .duty_u16 = 0,
        .enabled_u8 = 1,
        .frequency_u16 = 2,
        .output_pin_en = SERVO_2_PIN
    }
};
pwm_drv_tst servo_3_st = {
    .cfg_st = {
        .duty_u16 = 0,
        .enabled_u8 = 1,
        .frequency_u16 = 2,
        .output_pin_en = SERVO_3_PIN
    }
};

void init_pwm_cfg(void)
{
}