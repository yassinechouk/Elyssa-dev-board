#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#include "soc/soc_caps.h"
//
// USB
//
#define USB_VID 0x303A
#define USB_PID 0x1001

//
// IOs
//
static const uint8_t IO0 = 1;
static const uint8_t IO1 = 2;
static const uint8_t IO2 = 3;
static const uint8_t IO3 = 4;
static const uint8_t IO4 = 5;
static const uint8_t IO5 = 6;
static const uint8_t IO6 = 7;
#define IO7 PWM1
#define IO8 PWM2
#define IO9 PWM3
#define IO10 MISO
#define IO11 CLK
#define IO12 MOSI
#define IO13 CS
#define IO14 SCL
#define IO15 SDA

//
// UART
//
static const uint8_t TX = 43;
static const uint8_t RX = 44;
//
// GYRO
//
static const uint8_t SDA_gyro = 17;
static const uint8_t SCL_gyro = 18;
static const uint8_t INT_GYRO = 21;
#define GYRO_ADDR 0x6A


//
// I2C
//
static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

//
// SPI (User SPI)
// Internal flash pins are NOT exposed
//
static const uint8_t CS   = 34;
static const uint8_t MOSI = 35;
static const uint8_t MISO = 37;
static const uint8_t SCK  = 36;
//
// SPI (SD SPI)
//
static const uint8_t CS_SD   = 10;
static const uint8_t MOSI_SD = 11;
static const uint8_t MISO_SD = 13;
static const uint8_t SCK_SD  = 12;

//
// Analog
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
#define T9 SDA
#define T10 SCL
//
// PWM
//
static const uint8_t PWM1 = 14;
static const uint8_t PWM2 = 36;
static const uint8_t PWM3 = 37;




//
// LEDs
//
static const uint8_t LED_BUILTIN = 38;

#define BUILTIN_LED LED_BUILTIN
#define STATUS_LED LED_BUILTIN
#define USER_LED LED_BUILTIN
#define AMBOUBA LED_BUILTIN
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
#define PIN_SPI_SS   CS
#define PIN_SPI_MOSI MOSI
#define PIN_SPI_MISO MISO
#define PIN_SPI_SCK  SCK

//
// RGB LED (if future Elyssa revisions add one)
//
#define RGB_BUILTIN LED_BUILTIN

#endif
