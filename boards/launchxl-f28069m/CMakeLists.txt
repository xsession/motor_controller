
add_module_lib(
    NAME
        breadboard_proto
    PACKAGE 
        boards
    SOURCE 
        src/dio_drv_cfg.c
        # src/i2c_drv_cfg.c
        # src/pwm_drv_cfg.c
        # src/sys_drv_cfg.c
        # src/tmr_drv_cfg.c
    INCLUDE 
        inc
    LINK 
        rp2040_dio_drv
        # rp2040_i2c_drv
        # rp2040_pio_i2c_drv
        # rp2040_pwm_drv
        # rp2040_sys_drv
        # rp2040_tmr_drv
    DEFINES 
        NDEBUG
    STANDARD
        11
)

# set_property(TARGET breadboard_proto PROPERTY ECLIPSE_GENERATE_SOURCE_PROJECT ON)
# set_property(TARGET breadboard_proto PROPERTY ECLIPSE_GENERATE_LINKED_RESOURCES ON)