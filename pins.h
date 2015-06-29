#ifndef PINS_H
#define PINS_H

#include "boards.h"

#if !MB(5DPRINT)
#define X_MS1_PIN -1
#define X_MS2_PIN -1
#define Y_MS1_PIN -1
#define Y_MS2_PIN -1
#define Z_MS1_PIN -1
#define Z_MS2_PIN -1
#define E0_MS1_PIN -1
#define E0_MS2_PIN -1
#define E1_MS1_PIN -1
#define E1_MS2_PIN -1
#define DIGIPOTSS_PIN -1
#endif



/****************************************************************************************
* Leapfrog Driver board
* 
****************************************************************************************/
#if MB(LEAPFROG)  // Leapfrog board
#define KNOWN_BOARD 1

#ifndef __AVR_ATmega1280__
 #ifndef __AVR_ATmega2560__
 #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
 #endif
#endif

#define X_STEP_PIN         28
#define X_DIR_PIN          63
#define X_ENABLE_PIN       29
#define X_MIN_PIN          47
#define X_MAX_PIN          -1   //2 //Max endstops default to disabled "-1", set to commented value to enable.

#define Y_STEP_PIN         14 // A6
#define Y_DIR_PIN          15 // A0
#define Y_ENABLE_PIN       39
#define Y_MIN_PIN          48
#define Y_MAX_PIN          -1   //15

#define Z_STEP_PIN         31 // A2
#define Z_DIR_PIN          32 // A6
#define Z_ENABLE_PIN       30 // A1
#define Z_MIN_PIN          49
#define Z_MAX_PIN          -1

#define E0_STEP_PIN         34  //34
#define E0_DIR_PIN          35 //35
#define E0_ENABLE_PIN       33 //33

#define E1_STEP_PIN         37 //37
#define E1_DIR_PIN          40 //40
#define E1_ENABLE_PIN       36 //36

#define Y2_STEP_PIN         37
#define Y2_DIR_PIN          40
#define Y2_ENABLE_PIN       36

#define Z2_STEP_PIN         37
#define Z2_DIR_PIN          40
#define Z2_ENABLE_PIN       36

#define SDPOWER            -1
#define SDSS               11
#define SDCARDDETECT       -1 // 10 optional also used as mode pin
#define LED_PIN            13
#define FAN_PIN            7
#define PS_ON_PIN          -1
#define KILL_PIN           -1
#define SOL1_PIN   16
#define SOL2_PIN    17

#define HEATER_0_PIN       9
#define HEATER_1_PIN       8 // 12
#define HEATER_2_PIN       11 //-1 // 13
#define TEMP_0_PIN         13 //D27   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_1_PIN         15 // 1
#define TEMP_2_PIN         -1 // 2
#define HEATER_BED_PIN     10 // 14/15
#define TEMP_BED_PIN       14 // 1,2 or I2C
/*  Unused (1) (2) (3) 4 5 6 7 8 9 10 11 12 13 (14) (15) (16) 17 (18) (19) (20) (21) (22) (23) 24 (25) (26) (27) 28 (29) (30) (31)  */


#endif // LEAPFROG

/****************************************************************************************
*
*
****************************************************************************************/

#if MB(99)
#define KNOWN_BOARD 1

#define X_STEP_PIN          2
#define X_DIR_PIN           3
#define X_ENABLE_PIN        -1
#define X_STOP_PIN          16

#define Y_STEP_PIN          5
#define Y_DIR_PIN           6
#define Y_ENABLE_PIN       -1
#define Y_STOP_PIN          67

#define Z_STEP_PIN          62
#define Z_DIR_PIN           63
#define Z_ENABLE_PIN       -1
#define Z_STOP_PIN          59

#define E0_STEP_PIN         65
#define E0_DIR_PIN          66
#define E0_ENABLE_PIN      -1

#define SDPOWER            -1
#define SDSS               53
#define LED_PIN            -1
#define FAN_PIN            -1
#define PS_ON_PIN           9
#define KILL_PIN           -1

#define HEATER_0_PIN        13
#define HEATER_1_PIN       -1
#define HEATER_2_PIN       -1
#define TEMP_0_PIN          6   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_1_PIN         -1   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_2_PIN         -1   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define HEATER_BED_PIN      4
#define TEMP_BED_PIN       10

#endif // 99

/****************************************************************************************
* Sethi 3D_1 pin assignment - www.sethi3d.com.br
*
****************************************************************************************/

#if MB(SETHI)
#define KNOWN_BOARD

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega644__) && !defined(__AVR_ATmega1284P__)
#error Oops! Make sure you have 'Sethi 3D' selected from the 'Tools -> Boards' menu.

#endif

#ifndef GEN7_VERSION
#define GEN7_VERSION 12 // v1.x
#endif

//x axis pins
#define X_STEP_PIN 19
#define X_DIR_PIN 18
#define X_ENABLE_PIN 24
#define X_STOP_PIN 2

//y axis pins
#define Y_STEP_PIN 23
#define Y_DIR_PIN 22
#define Y_ENABLE_PIN 24
#define Y_STOP_PIN 0

//z axis pins
#define Z_STEP_PIN 26
#define Z_DIR_PIN 25
#define Z_ENABLE_PIN 24
#define Z_MIN_PIN 1
#define Z_MAX_PIN 0

//extruder pins
#define E0_STEP_PIN 28
#define E0_DIR_PIN 27
#define E0_ENABLE_PIN 24

#define TEMP_0_PIN 1
#define TEMP_1_PIN -1
#define TEMP_2_PIN -1
#define TEMP_BED_PIN 2

#define HEATER_0_PIN 4
#define HEATER_1_PIN -1
#define HEATER_2_PIN -1
#define HEATER_BED_PIN 3

#define KILL_PIN -1

#define SDPOWER -1
#define SDSS -1 // SCL pin of I2C header
#define LED_PIN -1

#if (GEN7_VERSION >= 13)
// Gen7 v1.3 removed the fan pin
#define FAN_PIN -1
#else
#define FAN_PIN 31
#endif
#define PS_ON_PIN 15

//All these generations of Gen7 supply thermistor power
//via PS_ON, so ignore bad thermistor readings
#define BOGUS_TEMPERATURE_FAILSAFE_OVERRIDE

//our pin for debugging.
#define DEBUG_PIN 0

//our RS485 pins
#define TX_ENABLE_PIN 12
#define RX_ENABLE_PIN 13

#endif // SETHI

/****************************************************************************************
* Gen7 v1.1, v1.2, v1.3 pin assignment
*
****************************************************************************************/


#if MB(GEN7_13)
#define MOTHERBOARD BOARD_GEN7_12
#define GEN7_VERSION 13 // v1.3
#endif

#if MB(GEN7_12)
#define KNOWN_BOARD

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega644__) && !defined(__AVR_ATmega1284P__)
#error Oops! Make sure you have 'Gen7' selected from the 'Tools -> Boards' menu.

#endif

#ifndef GEN7_VERSION
#define GEN7_VERSION 12 // v1.x
#endif

//x axis pins
#define X_STEP_PIN 19
#define X_DIR_PIN 18
#define X_ENABLE_PIN 24
#define X_STOP_PIN 7

//y axis pins
#define Y_STEP_PIN 23
#define Y_DIR_PIN 22
#define Y_ENABLE_PIN 24
#define Y_STOP_PIN 5

//z axis pins
#define Z_STEP_PIN 26
#define Z_DIR_PIN 25
#define Z_ENABLE_PIN 24
#define Z_MIN_PIN 1
#define Z_MAX_PIN 0

//extruder pins
#define E0_STEP_PIN 28
#define E0_DIR_PIN 27
#define E0_ENABLE_PIN 24

#define TEMP_0_PIN 1
#define TEMP_1_PIN -1
#define TEMP_2_PIN -1
#define TEMP_BED_PIN 2

#define HEATER_0_PIN 4
#define HEATER_1_PIN -1
#define HEATER_2_PIN -1
#define HEATER_BED_PIN 3

#define KILL_PIN -1

#define SDPOWER -1
#define SDSS -1 // SCL pin of I2C header
#define LED_PIN -1

#if (GEN7_VERSION >= 13)
// Gen7 v1.3 removed the fan pin
#define FAN_PIN -1
#else
#define FAN_PIN 31
#endif
#define PS_ON_PIN 15

//All these generations of Gen7 supply thermistor power
//via PS_ON, so ignore bad thermistor readings
#define BOGUS_TEMPERATURE_FAILSAFE_OVERRIDE

//our pin for debugging.
#define DEBUG_PIN 0

//our RS485 pins
#define TX_ENABLE_PIN 12
#define RX_ENABLE_PIN 13

#endif

/****************************************************************************************
* Gen7 v1.4 pin assignment
*
****************************************************************************************/

#if MB(GEN7_14)
#define GEN7_VERSION 14 // v1.4
#endif

#if MB(GEN7_14)
#define KNOWN_BOARD

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega644__) && !defined(__AVR_ATmega1284P__)
#error Oops! Make sure you have 'Gen7' selected from the 'Tools -> Boards' menu.

#endif

#ifndef GEN7_VERSION
#define GEN7_VERSION 14 // v1.x
#endif

//x axis pins
#define X_STEP_PIN 29
#define X_DIR_PIN 28
#define X_ENABLE_PIN 25
#define X_STOP_PIN 0

//y axis pins
#define Y_STEP_PIN 27
#define Y_DIR_PIN 26
#define Y_ENABLE_PIN 25
#define Y_STOP_PIN 1

//z axis pins
#define Z_STEP_PIN 23
#define Z_DIR_PIN 22
#define Z_ENABLE_PIN 25
#define Z_STOP_PIN 2

//extruder pins
#define E0_STEP_PIN 19
#define E0_DIR_PIN 18
#define E0_ENABLE_PIN 25

#define TEMP_0_PIN 1
#define TEMP_1_PIN -1
#define TEMP_2_PIN -1
#define TEMP_BED_PIN 0

#define HEATER_0_PIN 4
#define HEATER_1_PIN -1
#define HEATER_2_PIN -1
#define HEATER_BED_PIN 3

#define KILL_PIN -1

#define SDPOWER -1
#define SDSS -1 // SCL pin of I2C header
#define LED_PIN -1

#define FAN_PIN -1

#define PS_ON_PIN 15

//our pin for debugging.
#define DEBUG_PIN 0

//our RS485 pins
#define TX_ENABLE_PIN 12
#define RX_ENABLE_PIN 13

#endif // GEN7

/******************************************************************************
* Gen7 Alfons3  pin assignment
*
******************************************************************************/
/* These Pins are assigned for the modified GEN7 Board from Alfons3 Please review the pins and adjust it for your needs*/

#if MB(GEN7_CUSTOM)
#define KNOWN_BOARD

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega644__) && !defined(__AVR_ATmega1284P__)
    #error Oops!  Make sure you have 'Gen7' selected from the 'Tools -> Boards' menu.
#endif

//x axis pins
    #define X_STEP_PIN      21                  // different from standard GEN7
    #define X_DIR_PIN       20                  // different from standard GEN7
    #define X_ENABLE_PIN    24
    #define X_STOP_PIN      0

    //y axis pins
    #define Y_STEP_PIN      23
    #define Y_DIR_PIN       22
    #define Y_ENABLE_PIN    24
    #define Y_STOP_PIN      1

    //z axis pins
    #define Z_STEP_PIN      26
    #define Z_DIR_PIN       25
    #define Z_ENABLE_PIN    24
    #define Z_STOP_PIN      2

    //extruder pins
    #define E0_STEP_PIN      28
    #define E0_DIR_PIN       27
    #define E0_ENABLE_PIN    24

    #define TEMP_0_PIN      2
    #define TEMP_1_PIN      -1
    #define TEMP_2_PIN      -1
    #define TEMP_BED_PIN        1   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!! (pin 34 bed)

    #define HEATER_0_PIN    4
    #define HEATER_1_PIN    -1
    #define HEATER_2_PIN    -1
    #define HEATER_BED_PIN      3  // (bed)

    #define SDPOWER         -1
    #define SDSS            31                  // SCL pin of I2C header || CS Pin for SD Card support
    #define LED_PIN         -1

    #define FAN_PIN         -1
    #define PS_ON_PIN       19
    //our pin for debugging.

    #define DEBUG_PIN        -1

    //our RS485 pins
    //#define TX_ENABLE_PIN       12
    //#define RX_ENABLE_PIN       13

    #define BEEPER -1
    #define SDCARDDETECT -1
    #define SUICIDE_PIN -1    //has to be defined; otherwise Power_off doesn't work

    #define KILL_PIN -1
    //Pins for 4bit LCD Support
    #define LCD_PINS_RS 18
    #define LCD_PINS_ENABLE 17
    #define LCD_PINS_D4 16
    #define LCD_PINS_D5 15
    #define LCD_PINS_D6 13
    #define LCD_PINS_D7 14

     //buttons are directly attached
    #define BTN_EN1 11
    #define BTN_EN2 10
    #define BTN_ENC 12  //the click

#endif // GEN7_CUSTOM

/****************************************************************************************
* Arduino Mega pin assignment
*
****************************************************************************************/
#if IS_RAMPS || MB(3DRAG) || MB(AZTEEG_X3) || MB(AZTEEG_X3_PRO)
#define KNOWN_BOARD 1

//////////////////FIX THIS//////////////
#ifndef __AVR_ATmega1280__
 #ifndef __AVR_ATmega2560__
 #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
 #endif
#endif


// uncomment one of the following lines for RAMPS v1.3 or v1.0, comment both for v1.2 or 1.1
// #define RAMPS_V_1_3
// #define RAMPS_V_1_0


#if (IS_RAMPS && !MB(RAMPS_OLD)) || MB(3DRAG) || MB(AZTEEG_X3) || MB(AZTEEG_X3_PRO)

  #define LARGE_FLASH true

  #if MB(3DRAG)
    #define X_STEP_PIN         54
    #define X_DIR_PIN          55
    #define X_ENABLE_PIN       38
    #define X_MIN_PIN           3
    #define X_MAX_PIN           -1   //2 //Max endstops default to disabled "-1", set to commented value to enable.

    #define Y_STEP_PIN         60
    #define Y_DIR_PIN          61
    #define Y_ENABLE_PIN       56
    #define Y_MIN_PIN          14
    #define Y_MAX_PIN          -1   //15

    #define Z_STEP_PIN         46
    #define Z_DIR_PIN          48
    #define Z_ENABLE_PIN       63
    #define Z_MIN_PIN          18
    #define Z_MAX_PIN          -1

    #define Y2_STEP_PIN        36
    #define Y2_DIR_PIN         34
    #define Y2_ENABLE_PIN      30

    #define Z2_STEP_PIN        36
    #define Z2_DIR_PIN         34
    #define Z2_ENABLE_PIN      30

    #define E0_STEP_PIN        26
    #define E0_DIR_PIN         28
    #define E0_ENABLE_PIN      24

    #define E1_STEP_PIN        36
    #define E1_DIR_PIN         34
    #define E1_ENABLE_PIN      30

    #define SDPOWER            -1
    #define SDSS               25//53
    #define LED_PIN            13

    #define BEEPER             33

  #else

    #define X_STEP_PIN         54
    #define X_DIR_PIN          55
    #define X_ENABLE_PIN       38
    #define X_MIN_PIN           3
    #define X_MAX_PIN           2

    #define Y_STEP_PIN         60
    #define Y_DIR_PIN          61
    #define Y_ENABLE_PIN       56
    #define Y_MIN_PIN          14
    #define Y_MAX_PIN          15

    #define Z_STEP_PIN         46
    #define Z_DIR_PIN          48
    #define Z_ENABLE_PIN       62
    #define Z_MIN_PIN          18
    #define Z_MAX_PIN          19

    #define Y2_STEP_PIN        36
    #define Y2_DIR_PIN         34
    #define Y2_ENABLE_PIN      30

    #define Z2_STEP_PIN        36
    #define Z2_DIR_PIN         34
    #define Z2_ENABLE_PIN      30

    #define E0_STEP_PIN        26
    #define E0_DIR_PIN         28
    #define E0_ENABLE_PIN      24

    #define E1_STEP_PIN        36
    #define E1_DIR_PIN         34
    #define E1_ENABLE_PIN      30

#if MB(RAMPS_13_EEB)  //FMM added for Filament Extruder
#ifdef FILAMENT_SENSOR
    //define analog pin for the filament width sensor input
    //Use the RAMPS 1.4 Analog input 5 on the AUX2 connector
      #define FILWIDTH_PIN        5
#endif
#endif


    #if MB(AZTEEG_X3_PRO)
      #define E2_STEP_PIN        23
      #define E2_DIR_PIN         25
      #define E2_ENABLE_PIN      40

      #define E3_STEP_PIN        27
      #define E3_DIR_PIN         29
      #define E3_ENABLE_PIN      41

      #define E4_STEP_PIN        43
      #define E4_DIR_PIN         37
      #define E4_ENABLE_PIN      42
    #endif

    #define SDPOWER            -1
    #define SDSS               53
    #define LED_PIN            13
  #endif

  #if MB(RAMPS_13_EFB) || MB(RAMPS_13_EFF) || MB(AZTEEG_X3) || MB(AZTEEG_X3_PRO)
    #define FAN_PIN            9 // (Sprinter config)
  #else
    #define FAN_PIN            4 // IO pin. Buffer needed
  #endif

  #if MB(3DRAG) || MB(RAMPS_13_EEF)
    #define FAN_PIN            8
  #endif

  #if MB(RAMPS_13_EFF)
    #define CONTROLLERFAN_PIN  8 //Pin used for the fan to cool controller
  #endif

  #define PS_ON_PIN          12

  #if defined(REPRAP_DISCOUNT_SMART_CONTROLLER) || defined(G3D_PANEL)
    #define KILL_PIN           41
  #else
    #define KILL_PIN           -1
  #endif

  #if MB(RAMPS_13_EFF)
    #define HEATER_0_PIN       10// 8
  #else
    #define HEATER_0_PIN       10   // EXTRUDER 1
  #endif

  #if MB(RAMPS_13_EFB) || MB(AZTEEG_X3)
    #define HEATER_1_PIN       -1
  #else
    #define HEATER_1_PIN       9    // EXTRUDER 2 (FAN On Sprinter)
  #endif


  #if MB(3DRAG)
    #define HEATER_0_PIN       10
    #define HEATER_1_PIN       12
    #define HEATER_2_PIN       6
  #elif MB(AZTEEG_X3_PRO)
    #define HEATER_2_PIN       16
    #define HEATER_3_PIN       17
    #define HEATER_4_PIN       4
    #define HEATER_5_PIN       5
    #define HEATER_6_PIN       6
    #define HEATER_7_PIN       11
  #else
    #define HEATER_2_PIN       -1
  #endif

  #define TEMP_0_PIN         13   // ANALOG NUMBERING
  #define TEMP_1_PIN         15   // ANALOG NUMBERING
  #if MB(AZTEEG_X3_PRO)
    #define TEMP_2_PIN         12   // ANALOG NUMBERING
    #define TEMP_3_PIN         11   // ANALOG NUMBERING
    #define TEMP_4_PIN         10   // ANALOG NUMBERING
    #define TC1                4    // ANALOG NUMBERING Thermo couple on Azteeg X3Pro
    #define TC2                5    // ANALOG NUMBERING Thermo couple on Azteeg X3Pro
  #else
    #define TEMP_2_PIN         -1   // ANALOG NUMBERING
  #endif

  #if MB(RAMPS_13_EFF) || MB(RAMPS_13_EEF)
    #define HEATER_BED_PIN     -1    // NO BED
  #else
    #if MB(3DRAG)
      #define HEATER_BED_PIN     9    // BED
    #else
      #define HEATER_BED_PIN     8    // BED
    #endif
  #endif

  #define TEMP_BED_PIN       14   // ANALOG NUMBERING

  #ifdef NUM_SERVOS
    #define SERVO0_PIN         11

    #if NUM_SERVOS > 1
      #define SERVO1_PIN         6
    #endif

    #if NUM_SERVOS > 2
      #define SERVO2_PIN         5
    #endif

    #if NUM_SERVOS > 3
      #define SERVO3_PIN         4
    #endif
  #endif

  #if MB(AZTEEG_X3_PRO)
    #define BEEPER 33
  #endif

  #ifdef TEMP_STAT_LEDS
    #if MB(AZTEEG_X3)
      #define STAT_LED_RED       6
      #define STAT_LED_BLUE     11
    #endif
  #endif

  #ifdef ULTRA_LCD

    #ifdef NEWPANEL
      #define LCD_PINS_RS 16
      #define LCD_PINS_ENABLE 17
      #define LCD_PINS_D4 23
      #define LCD_PINS_D5 25
      #define LCD_PINS_D6 27
      #define LCD_PINS_D7 29

      #ifdef REPRAP_DISCOUNT_SMART_CONTROLLER
        #define BEEPER 37

        #define BTN_EN1 31
        #define BTN_EN2 33
        #define BTN_ENC 35

        #define SDCARDDETECT 49
      #elif defined(LCD_I2C_PANELOLU2)
        #define BTN_EN1 47  //reverse if the encoder turns the wrong way.
        #define BTN_EN2 43
        #define BTN_ENC 32
        #define LCD_SDSS 53
        #define SDCARDDETECT -1
        #define KILL_PIN 41
      #elif defined(LCD_I2C_VIKI)
        #define BTN_EN1 22  //reverse if the encoder turns the wrong way.
        #define BTN_EN2 7
        #define BTN_ENC -1
        #define LCD_SDSS 53
        #define SDCARDDETECT 49
      #else
        //arduino pin which triggers an piezzo beeper
        #define BEEPER 33  // Beeper on AUX-4

        //buttons are directly attached using AUX-2
        #ifdef REPRAPWORLD_KEYPAD
          #define BTN_EN1 64 // encoder
          #define BTN_EN2 59 // encoder
          #define BTN_ENC 63 // enter button
          #define SHIFT_OUT 40 // shift register
          #define SHIFT_CLK 44 // shift register
          #define SHIFT_LD 42 // shift register
        #else
          #define BTN_EN1 37
          #define BTN_EN2 35
          #define BTN_ENC 31  //the click
        #endif

        #ifdef G3D_PANEL
          #define SDCARDDETECT 49
        #else
          #define SDCARDDETECT -1  // Ramps does not use this port
        #endif

      #endif

      #if MB(3DRAG)
        #define BEEPER -1

        #define LCD_PINS_RS 27
        #define LCD_PINS_ENABLE 29
        #define LCD_PINS_D4 37
        #define LCD_PINS_D5 35
        #define LCD_PINS_D6 33
        #define LCD_PINS_D7 31

       //buttons
       #define BTN_EN1 16
       #define BTN_EN2 17
       #define BTN_ENC 23 //the click

    #endif
    #else //old style panel with shift register
      //arduino pin witch triggers an piezzo beeper
      #define BEEPER 33   //No Beeper added

      //buttons are attached to a shift register
  // Not wired this yet
      //#define SHIFT_CLK 38
      //#define SHIFT_LD 42
      //#define SHIFT_OUT 40
      //#define SHIFT_EN 17

      #define LCD_PINS_RS 16
      #define LCD_PINS_ENABLE 17
      #define LCD_PINS_D4 23
      #define LCD_PINS_D5 25
      #define LCD_PINS_D6 27
      #define LCD_PINS_D7 29
    #endif
  #endif //ULTRA_LCD

#else // RAMPS_V_1_1 or RAMPS_V_1_2 as default (BOARD_RAMPS_OLD)

#define X_STEP_PIN         26
#define X_DIR_PIN          28
#define X_ENABLE_PIN       24
#define X_MIN_PIN           3
#define X_MAX_PIN          -1    //2

#define Y_STEP_PIN         38
#define Y_DIR_PIN          40
#define Y_ENABLE_PIN       36
#define Y_MIN_PIN          16
#define Y_MAX_PIN          -1    //17

#define Z_STEP_PIN         44
#define Z_DIR_PIN          46
#define Z_ENABLE_PIN       42
#define Z_MIN_PIN          18
#define Z_MAX_PIN          -1    //19

#define E0_STEP_PIN         32
#define E0_DIR_PIN          34
#define E0_ENABLE_PIN       30

#define SDPOWER            48
#define SDSS               53
#define LED_PIN            13
#define PS_ON_PIN          -1
#define KILL_PIN           -1

#ifdef RAMPS_V_1_0 // RAMPS_V_1_0
  #define HEATER_0_PIN     12    // RAMPS 1.0
  #define HEATER_BED_PIN   -1    // RAMPS 1.0
  #define FAN_PIN          11    // RAMPS 1.0
#else // RAMPS_V_1_1 or RAMPS_V_1_2
  #define HEATER_0_PIN     10    // RAMPS 1.1
  #define HEATER_BED_PIN    8    // RAMPS 1.1
  #define FAN_PIN           9    // RAMPS 1.1
#endif
#define HEATER_1_PIN        -1
#define HEATER_2_PIN        -1
#define TEMP_0_PIN          2    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_1_PIN          -1
#define TEMP_2_PIN          -1
#define TEMP_BED_PIN        1    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!

#endif // RAMPS_13_EFB || RAMPS_13_EEB || RAMPS_13_EFF || 3DRAG

// SPI for Max6675 Thermocouple

#ifndef SDSUPPORT
// these pins are defined in the SD library if building with SD support
  #define SCK_PIN          52
  #define MISO_PIN         50
  #define MOSI_PIN         51
  #define MAX6675_SS       53
#else
  #define MAX6675_SS       49
#endif

#endif // RAMPS_OLD || RAMPS_13_EFB || RAMPS_13_EEB || RAMPS_13_EFF || 3DRAG






#ifndef KNOWN_BOARD
#error Unknown MOTHERBOARD value in configuration.h
#endif

//List of pins which to ignore when asked to change by gcode, 0 and 1 are RX and TX, do not mess with those!
#define _E0_PINS E0_STEP_PIN, E0_DIR_PIN, E0_ENABLE_PIN, HEATER_0_PIN,
#if EXTRUDERS > 1
  #define _E1_PINS E1_STEP_PIN, E1_DIR_PIN, E1_ENABLE_PIN, HEATER_1_PIN,
#else
  #define _E1_PINS
#endif
#if EXTRUDERS > 2
  #define _E2_PINS E2_STEP_PIN, E2_DIR_PIN, E2_ENABLE_PIN, HEATER_2_PIN,
#else
  #define _E2_PINS
#endif

#ifdef X_STOP_PIN
  #if X_HOME_DIR < 0
    #define X_MIN_PIN X_STOP_PIN
    #define X_MAX_PIN -1
  #else
    #define X_MIN_PIN -1
    #define X_MAX_PIN X_STOP_PIN
  #endif
#endif

#ifdef Y_STOP_PIN
  #if Y_HOME_DIR < 0
    #define Y_MIN_PIN Y_STOP_PIN
    #define Y_MAX_PIN -1
  #else
    #define Y_MIN_PIN -1
    #define Y_MAX_PIN Y_STOP_PIN
  #endif
#endif

#ifdef Z_STOP_PIN
  #if Z_HOME_DIR < 0
    #define Z_MIN_PIN Z_STOP_PIN
    #define Z_MAX_PIN -1
  #else
    #define Z_MIN_PIN -1
    #define Z_MAX_PIN Z_STOP_PIN
  #endif
#endif

#ifdef DISABLE_MAX_ENDSTOPS
#define X_MAX_PIN          -1
#define Y_MAX_PIN          -1
#define Z_MAX_PIN          -1
#endif

#ifdef DISABLE_MIN_ENDSTOPS
#define X_MIN_PIN          -1
#define Y_MIN_PIN          -1
//#define Z_MIN_PIN          -1 // AJUSTE PROVIDENCIAL!!!!!! HERE
#endif

#define SENSITIVE_PINS {0, 1, X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, PS_ON_PIN, \
                        HEATER_BED_PIN, FAN_PIN,                  \
                        _E0_PINS _E1_PINS _E2_PINS             \
                        analogInputToDigitalPin(TEMP_0_PIN), analogInputToDigitalPin(TEMP_1_PIN), analogInputToDigitalPin(TEMP_2_PIN), analogInputToDigitalPin(TEMP_BED_PIN) }

#endif //__PINS_H
