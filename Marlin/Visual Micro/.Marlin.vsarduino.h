/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega w/ ATmega2560 (Mega 2560), Platform=avr, Package=arduino
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega2560__
#define F_CPU 16000000L
#define ARDUINO 157
#define ARDUINO_AVR_MEGA2560
#define ARDUINO_ARCH_AVR
#define __cplusplus
#define GCC_VERSION 40801
#define __inline__
#define __asm__(x)
#define __extension__
//#define __ATTR_PURE__
//#define __ATTR_CONST__
#define __inline__
//#define __asm__ 
#define __volatile__
#define GCC_VERSION 40301
#define volatile(va_arg) 

typedef void *__builtin_va_list;
#define __builtin_va_start
#define __builtin_va_end
//#define __DOXYGEN__
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int
#define NEW_H
/*
#ifndef __ATTR_CONST__
#define __ATTR_CONST__ __attribute__((__const__))
#endif

#ifndef __ATTR_MALLOC__
#define __ATTR_MALLOC__ __attribute__((__malloc__))
#endif

#ifndef __ATTR_NORETURN__
#define __ATTR_NORETURN__ __attribute__((__noreturn__))
#endif

#ifndef __ATTR_PURE__
#define __ATTR_PURE__ __attribute__((__pure__))
#endif            
*/
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}



#include <arduino.h>
#include <pins_arduino.h> 
#undef F
#define F(string_literal) ((const PROGMEM char *)(string_literal))
#undef PSTR
#define PSTR(string_literal) ((const PROGMEM char *)(string_literal))
#undef cli
#define cli()
#define pgm_read_byte(address_short)
#define pgm_read_word(address_short)
#define pgm_read_word2(address_short)
#define digitalPinToPort(P)
#define digitalPinToBitMask(P) 
#define digitalPinToTimer(P)
#define analogInPinToBit(P)
#define portOutputRegister(P)
#define portInputRegister(P)
#define portModeRegister(P)
#include <Marlin.pde>
#include <CommandQ.cpp>
#include <CommandQ.h>
#include <Configuration.h>
#include <ConfigurationStore.cpp>
#include <ConfigurationStore.h>
#include <Configuration_adv.h>
#include <DHT.cpp>
#include <DHT.h>
#include <DOGMbitmaps.h>
#include <LiquidCrystalRus.cpp>
#include <LiquidCrystalRus.h>
#include <Marlin.cpp>
#include <Marlin.h>
#include <MarlinSerial.cpp>
#include <MarlinSerial.h>
#include <MenuUseful.cpp>
#include <MenuUseful.h>
#include <ScreenSaver.cpp>
#include <ScreenSaver.h>
#include <Sd2Card.cpp>
#include <Sd2Card.h>
#include <Sd2PinMap.h>
#include <SdBaseFile.cpp>
#include <SdBaseFile.h>
#include <SdFatConfig.h>
#include <SdFatStructs.h>
#include <SdFatUtil.cpp>
#include <SdFatUtil.h>
#include <SdFile.cpp>
#include <SdFile.h>
#include <SdInfo.h>
#include <SdVolume.cpp>
#include <SdVolume.h>
#include <SerialMacros.h>
#include <Servo.cpp>
#include <Servo.h>
#include <SwissArmyCache.cpp>
#include <SwissArmyCache.h>
#include <UltiLCD2.cpp>
#include <UltiLCD2.h>
#include <UltiLCD2_gfx.cpp>
#include <UltiLCD2_gfx.h>
#include <UltiLCD2_hi_lib.cpp>
#include <UltiLCD2_hi_lib.h>
#include <UltiLCD2_low_lib.cpp>
#include <UltiLCD2_low_lib.h>
#include <UltiLCD2_menu_first_run.cpp>
#include <UltiLCD2_menu_first_run.h>
#include <UltiLCD2_menu_maintenance.cpp>
#include <UltiLCD2_menu_maintenance.h>
#include <UltiLCD2_menu_material.cpp>
#include <UltiLCD2_menu_material.h>
#include <UltiLCD2_menu_print.cpp>
#include <UltiLCD2_menu_print.h>
#include <cardreader.cpp>
#include <cardreader.h>
#include <dogm_font_data_marlin.h>
#include <dogm_lcd_implementation.h>
#include <fastio.h>
#include <gcode.cpp>
#include <gcode.h>
#include <language.h>
#include <lifetime_stats.cpp>
#include <lifetime_stats.h>
#include <motion_control.cpp>
#include <motion_control.h>
#include <pins.h>
#include <planner.cpp>
#include <planner.h>
#include <speed_lookuptable.h>
#include <stepper.cpp>
#include <stepper.h>
#include <stringHelpers.cpp>
#include <stringHelpers.h>
#include <temperature.cpp>
#include <temperature.h>
#include <thermistortables.h>
#include <ultralcd.cpp>
#include <ultralcd.h>
#include <ultralcd_implementation_hitachi_HD44780.h>
#include <ultralcd_implementation_ultiboard_v2.h>
#include <ultralcd_st7920_u8glib_rrd.h>
#include <voltage.cpp>
#include <voltage.h>
#include <watchdog.cpp>
#include <watchdog.h>
#endif
