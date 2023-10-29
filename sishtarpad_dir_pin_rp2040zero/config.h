#pragma once

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

#define HAL_USE_I2C TRUE
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 TRUE
#define I2C1_SCL_PIN GP7
#define I2C1_SDA_PIN GP6

// #undef RP_SPI_USE_SPI0
// #define RP_SPI_USE_SPI0 TRUE
// #define SPI_DRIVER SPID0
// #define SPI_SCK_PIN GP2
// #define SPI_MOSI_PIN GP3
// #define SPI_MISO_PIN GP0

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP16

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10
// #define ENCODER_DIRECTION_FLIP

// #define ENCODER_RESOLUTION 1
#define ENCODER_DEFAULT_POS 0x3

#define OLED_DISPLAY_128X64
#define MK_3_SPEED

#define OLED_UPDATE_INTERVAL 200

// #define NOP_FUDGE 1
#define RGBLIGHT_LED_MAP { 0, 1, 2, 3 }

// #define ST7789_NUM_DEVICES 1

// #define QUANTUM_PAINTER_DISPLAY_TIMEOUT 0
// #define QUANTUM_PAINTER_SUPPORTS_NATIVE_COLORS TRUE

// #define IPS_CS_PIN GP1
// #define IPS_DC_PIN GP8
// #define IPS_RST_PIN GP6