#pragma once

// Split Keeb Stuff

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP8
#define SERIAL_USART_RX_PIN GP9

#define MASTER_LEFT

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_OLED_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_POINTING_ENABLE
#define SPLIT_WPM_ENABLE
#define OLED_TIMEOUT 60000

// Bootmagic 
#define BOOTMAGIC_ROW_LEFT 0
#define BOOTMAGIC_COLUMN_LEFT 6

#define BOOTMAGIC_ROW_RIGHT 6
#define BOOTMAGIC_COLUMN_RIGHT 1

// Pointing Device

#define ANALOG_JOYSTICK_X_AXIS_PIN GP28
#define ANALOG_JOYSTICK_Y_AXIS_PIN GP29
#define ANALOG_JOYSTICK_CLICK_PIN GP15
#define ANALOG_JOYSTICK_AXIS_MIN 0
#define ANALOG_JOYSTICK_AXIS_MAX 1023
#define ANALOG_JOYSTICK_SPEED_REGULATOR 40
#define ANALOG_JOYSTICK_READ_INTERVAL 10
#define ANALOG_JOYSTICK_SPEED_MAX 2
#define POINTING_DEVICE_LEFT
#define POINTING_DEVICE_INVERT_X

//Joystick : WIP
/* 
#define JOYSTICK_BUTTON_COUNT 1
#define JOYSTICK_AXES_COUNT 2
*/
#define EE_HANDS
// OLEDS
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP27
#define I2C1_SDA_PIN GP26
