#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

//
// USB identity (TinyUSB)
// USB_PID 0x81FF is TEMPORARY: replace with the PID assigned by Espressif
// and keep it identical to upload_port.0.pid in boards.txt
//
#define USB_VID          0x303A
#define USB_PID          0x81FF
#define USB_MANUFACTURER "Moovma"
#define USB_PRODUCT      "Elyssa"

//
// Elyssa board functions (implemented in variant.cpp)
//
#ifdef __cplusplus
void hello_elyssa();

bool    elyssa_imu_begin();
bool    elyssa_imu_ready();
uint8_t elyssa_imu_whoami();
uint8_t elyssa_imu_read_reg(uint8_t reg);

float gyro_return_ax();
float gyro_return_ay();
float gyro_return_az();

float accel_return_ax();
float accel_return_ay();
float accel_return_az();

float elyssa_imu_temperature();
#endif

//
// IOs (header J12, names = silkscreen)
//
static const uint8_t IO0 = 1;
static const uint8_t IO1 = 2;
static const uint8_t IO2 = 3;
static const uint8_t IO3 = 4;
static const uint8_t IO4 = 5;
static const uint8_t IO5 = 6;
static const uint8_t IO6 = 7;   // shared with BAT_SENSE when JP3 is bridged

//
// Board functions
//
static const uint8_t BUTTON_BUILTIN = 0;   // BOOT button (SW5), LOW when pressed
static const uint8_t BAT_SENSE      = 7;   // VBAT/2 via R64/R65, only when JP3 is bridged
                                           // WARNING: same pin as header IO6

//
// UART
//
static const uint8_t TX = 43;
static const uint8_t RX = 44;

//
// IMU (LSM6DSV, dedicated I2C bus)
//
static const uint8_t SDA_gyro = 17;
static const uint8_t SCL_gyro = 18;
static const uint8_t INT_gyro = 21;
#define GYRO_ADDR 0x6A

//
// I2C (header J12 + Qwiic J11)
//
static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

//
// SPI (default bus = header J12)
// Internal flash pins are NOT exposed
//
static const uint8_t SS   = 34;
static const uint8_t MOSI = 35;
static const uint8_t MISO = 37;
static const uint8_t SCK  = 36;
static const uint8_t CS   = SS;    // name printed on the board
static const uint8_t CLK  = SCK;   // name printed on the board

//
// SPI (microSD, separate bus)
//
static const uint8_t SD_CS   = 10;
static const uint8_t SD_MOSI = 11;
static const uint8_t SD_SCK  = 12;
static const uint8_t SD_MISO = 13;

//
// Analog (all on ADC1: usable while Wi-Fi is on)
//
static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;
static const uint8_t A6 = 7;
#define A7 SDA
#define A8 SCL

//
// Touch
// T0..T6 = header IO0..IO6 (GPIO1..7)
// T7/T8  = SDA/SCL: avoid for touch when I2C is used (4.7k pull-ups)
//
static const uint8_t T0 = 1;
static const uint8_t T1 = 2;
static const uint8_t T2 = 3;
static const uint8_t T3 = 4;
static const uint8_t T4 = 5;
static const uint8_t T5 = 6;
static const uint8_t T6 = 7;
static const uint8_t T7 = 8;
static const uint8_t T8 = 9;

//
// PWM (names = silkscreen; nets PWM2/PWM3 are crossed on J12)
//
static const uint8_t PWM1 = 14;
static const uint8_t PWM2 = 47;   // header pin 16, printed "PWM2"
static const uint8_t PWM3 = 48;   // header pin 17, printed "PWM3"

//
// LEDs
//
static const uint8_t LED_BUILTIN = 38;

#define BUILTIN_LED LED_BUILTIN
#define STATUS_LED  LED_BUILTIN
#define USER_LED    LED_BUILTIN
#define AMBOUBA     LED_BUILTIN
#define ONBOARD_LED LED_BUILTIN

//
// Serial aliases
//
#define SERIAL0_RX RX
#define SERIAL0_TX TX

//
// Wire aliases
//
#define PIN_WIRE_SDA SDA
#define PIN_WIRE_SCL SCL

//
// SPI aliases
//
#define PIN_SPI_SS   SS
#define PIN_SPI_MOSI MOSI
#define PIN_SPI_MISO MISO
#define PIN_SPI_SCK  SCK

#endif /* Pins_Arduino_h */