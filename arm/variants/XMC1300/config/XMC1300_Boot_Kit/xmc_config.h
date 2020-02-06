/*
  xmc_config.h - Variant specific definitions
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
  
  Copyright (c) 2020 Infineon Technologies AG
  This file has been modified for the XMC microcontroller series.
*/
#ifndef XMC_CONFIG_H_
#define XMC_CONFIG_H_

//****************************************************************************
// @Project Includes
//****************************************************************************
#include <XMC1300.h>

//****************************************************************************
// @Defines
//****************************************************************************
// XMC_BOARD for stringifying into serial or other text outputs/logs
// Note the actual name XMC and number MUST have a character between 
// to avoid issues with other defined macros e.g. XMC1100
#define XMC_BOARD           XMC 1300 Boot Kit
/* On board LED is ON when digital output is 0, LOW, False, OFF */
#define  XMC_LED_ON         0

/* Modified to allow all possible analogue input pins */
#define NUM_ANALOG_INPUTS   12
#define NUM_PWM             4
#define NUM_LEDS            6
#define NUM_INTERRUPT       2
#define NUM_SERIAL          1
#define NUM_TONE_PINS       4
#define NUM_TASKS_VARIANT   8

// Indicate unit has RTC/Alarm
#define HAS_RTC             1

// Defines will be either set by ArduinoIDE in the menu or manually
#ifdef SERIAL_HOSTPC
// Comment out following line to use Serial on pins (board)
#define SERIAL_DEBUG    1
#elif SERIAL_ONBOARD
// No SERIAL_DEBUG will be defined, kept here for clarity
#else
// Define the SERIAL_DEBUG as default setting
#define SERIAL_DEBUG    1
#endif

#define PWM4_TIMER_PERIOD (2041U)  // Generate 490Hz @fCCU=1MHz
#define PWM8_TIMER_PERIOD (2041U)  // Generate 490Hz @fCCU=1MHz

#define PCLK 64000000u 
 
#define PIN_SPI_SS    29
#define PIN_SPI_MOSI  22
#define PIN_SPI_MISO  23
#define PIN_SPI_SCK   30

extern uint8_t SS; 
extern uint8_t MOSI;
extern uint8_t MISO;
extern uint8_t SCK;

#define A0   0
#define A1   1
#define A2   2
#define A3   3
#define A4   4
#define A5   5
#define A6   6
#define A7   7
#define A8   8
#define A9   9
#define A10  10
#define A11  11

#define PIN_SPI_SS_2  23

#define AD_AUX_1    24  // AD_AUX
#define AD_AUX_2    25  // AD_AUX
#define AUX_1       26  // AUX
#define AUX_2       27  // AUX
#define AUX_3       28  // AUX
#define AUX_4       29  // AUX
#define AUX_5       30  // AUX

#define LED_BUILTIN 24 	// Standard Arduino LED
#define LED1        24  // Extended LEDs P0.0
#define LED2        25  // Extended LEDs P0.1
#define LED3        29	// Extended LEDs P0.6
#define LED4        30  // Extended LEDs P0.7
#define LED5        27  // Extended LEDs P0.8
#define LED6        28  // Extended LEDs P0.9
#define GND         34  // GND

#define digitalPinToInterrupt(p)    ((p) == 14 ? 0 : ((p) == 15 ? 1 : NOT_AN_INTERRUPT))

#endif
