/** 
 * Malyan M300 (Monoprice Mini Delta) BSP for Marlin 
 * Copyright (C) 2019 Aegean Associates, Inc.
 *
 * include pins description
 */

/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Include pins definitions
 *
 * Pins numbering schemes:
 *
 *  - Digital I/O pin number if used by READ/WRITE macros. (e.g., X_STEP_DIR)
 *    The FastIO headers map digital pins to their ports and functions.
 *
 *  - Analog Input number if used by analogRead or DAC. (e.g., TEMP_n_PIN)
 *    These numbers are the same in any pin mapping.
 */

#ifndef __PINS_H__
#define __PINS_H__

#if MB(RAMPS_13_EFB) || MB(RAMPS_14_EFB) || MB(RAMPS_PLUS_EFB)
  #define IS_RAMPS_EFB
#elif MB(RAMPS_13_EEB) || MB(RAMPS_14_EEB) || MB(RAMPS_PLUS_EEB)
  #define IS_RAMPS_EEB
#elif MB(RAMPS_13_EFF) || MB(RAMPS_14_EFF) || MB(RAMPS_PLUS_EFF)
  #define IS_RAMPS_EFF
#elif MB(RAMPS_13_EEF) || MB(RAMPS_14_EEF) || MB(RAMPS_PLUS_EEF)
  #define IS_RAMPS_EEF
#elif MB(RAMPS_13_SF)  || MB(RAMPS_14_SF)  || MB(RAMPS_PLUS_SF)
  #define IS_RAMPS_SF
#endif

//
// RAMPS 1.3 / 1.4 - ATmega1280, ATmega2560
//

#if MB(RAMPS_OLD)
  #include "pins_RAMPS_OLD.h"         // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_13_EFB)
  #include "pins_RAMPS_13.h"          // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_13_EEB)
  #include "pins_RAMPS_13.h"          // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_13_EFF)
  #include "pins_RAMPS_13.h"          // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_13_EEF)
  #include "pins_RAMPS_13.h"          // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_13_SF)
  #include "pins_RAMPS_13.h"          // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_14_EFB)
  #include "pins_RAMPS.h"             // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_14_EEB)
  #include "pins_RAMPS.h"             // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_14_EFF)
  #include "pins_RAMPS.h"             // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_14_EEF)
  #include "pins_RAMPS.h"             // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_14_SF)
  #include "pins_RAMPS.h"             // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_PLUS_EFB)
  #include "pins_RAMPS_PLUS.h"        // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_PLUS_EEB)
  #include "pins_RAMPS_PLUS.h"        // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_PLUS_EFF)
  #include "pins_RAMPS_PLUS.h"        // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_PLUS_EEF)
  #include "pins_RAMPS_PLUS.h"        // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RAMPS_PLUS_SF)
  #include "pins_RAMPS_PLUS.h"        // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560

//
// RAMPS Derivatives - ATmega1280, ATmega2560
//

#elif MB(3DRAG)
  #include "pins_3DRAG.h"             // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(K8200)
  #include "pins_K8200.h"             // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560 (3DRAG)
#elif MB(K8400)
  #include "pins_K8400.h"             // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560 (3DRAG)
#elif MB(BAM_DICE)
  #include "pins_RAMPS.h"             // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(BAM_DICE_DUE)
  #include "pins_BAM_DICE_DUE.h"      // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(MKS_BASE)
  #include "pins_MKS_BASE.h"          // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(MKS_BASE_15)
  #include "pins_MKS_BASE_15.h"       // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(MKS_BASE_HEROIC)
  #include "pins_MKS_BASE_HEROIC.h"   // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(MKS_GEN_13)
  #include "pins_MKS_GEN_13.h"        // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(MKS_GEN_L)
  #include "pins_MKS_GEN_L.h"         // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(ZRIB_V20)
  #include "pins_ZRIB_V20.h"          // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560 (MKS_GEN_13)
#elif MB(FELIX2)
  #include "pins_FELIX2.h"            // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RIGIDBOARD)
  #include "pins_RIGIDBOARD.h"        // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(RIGIDBOARD_V2)
  #include "pins_RIGIDBOARD_V2.h"     // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(SAINSMART_2IN1)
  #include "pins_SAINSMART_2IN1.h"    // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(ULTIMAKER)
  #include "pins_ULTIMAKER.h"         // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(ULTIMAKER_OLD)
  #include "pins_ULTIMAKER_OLD.h"     // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(AZTEEG_X3)
  #include "pins_AZTEEG_X3.h"         // ATmega2560                                 env:megaatmega2560
#elif MB(AZTEEG_X3_PRO)
  #include "pins_AZTEEG_X3_PRO.h"     // ATmega2560                                 env:megaatmega2560
#elif MB(ULTIMAIN_2)
  #include "pins_ULTIMAIN_2.h"        // ATmega2560                                 env:megaatmega2560
#elif MB(RUMBA)
  #include "pins_RUMBA.h"             // ATmega2560                                 env:megaatmega2560
#elif MB(BQ_ZUM_MEGA_3D)
  #include "pins_BQ_ZUM_MEGA_3D.h"    // ATmega2560                                 env:megaatmega2560
#elif MB(MAKEBOARD_MINI)
  #include "pins_MAKEBOARD_MINI.h"    // ATmega2560                                 env:megaatmega2560
#elif MB(TRIGORILLA_13)
  #include "pins_TRIGORILLA_13.h"     // ATmega2560                                 env:megaatmega2560
#elif MB(TRIGORILLA_14)
  #include "pins_TRIGORILLA_14.h"     // ATmega2560                                 env:megaatmega2560
#elif MB(RAMPS_ENDER_4)
  #include "pins_RAMPS_ENDER_4.h"     // ATmega2560                                 env:megaatmega2560

//
// Other ATmega1280, ATmega2560
//

#elif MB(CNCONTROLS_11)
  #include "pins_CNCONTROLS_11.h"     // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(CNCONTROLS_12)
  #include "pins_CNCONTROLS_12.h"     // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(MIGHTYBOARD_REVE)
  #include "pins_MIGHTYBOARD_REVE.h"  // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(CHEAPTRONIC)
  #include "pins_CHEAPTRONIC.h"       // ATmega2560                                 env:megaatmega2560
#elif MB(CHEAPTRONIC_V2)
  #include "pins_CHEAPTRONICv2.h"     // ATmega2560                                 env:megaatmega2560
#elif MB(MEGATRONICS)
  #include "pins_MEGATRONICS.h"       // ATmega2560                                 env:megaatmega2560
#elif MB(MEGATRONICS_2)
  #include "pins_MEGATRONICS_2.h"     // ATmega2560                                 env:megaatmega2560
#elif MB(MEGATRONICS_3) || MB(MEGATRONICS_31)
  #include "pins_MEGATRONICS_3.h"     // ATmega2560                                 env:megaatmega2560
#elif MB(RAMBO)
  #include "pins_RAMBO.h"             // ATmega2560                                 env:rambo
#elif MB(MINIRAMBO) || MB(MINIRAMBO_10A)
  #include "pins_MINIRAMBO.h"         // ATmega2560                                 env:rambo
#elif MB(EINSY_RAMBO)
  #include "pins_EINSY_RAMBO.h"       // ATmega2560                                 env:rambo
#elif MB(EINSY_RETRO)
  #include "pins_EINSY_RETRO.h"       // ATmega2560                                 env:rambo
#elif MB(ELEFU_3)
  #include "pins_ELEFU_3.h"           // ATmega2560                                 env:megaatmega2560
#elif MB(LEAPFROG)
  #include "pins_LEAPFROG.h"          // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(MEGACONTROLLER)
  #include "pins_MEGACONTROLLER.h"    // ATmega2560                                 env:megaatmega2560
#elif MB(SCOOVO_X9H)
  #include "pins_SCOOVO_X9H.h"        // ATmega2560                                 env:rambo
#elif MB(GT2560_REV_A)
  #include "pins_GT2560_REV_A.h"      // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560
#elif MB(GT2560_REV_A_PLUS)
  #include "pins_GT2560_REV_A_PLUS.h" // ATmega1280, ATmega2560                     env:megaatmega1280 env:megaatmega2560

//
// ATmega1281, ATmega2561
//

#elif MB(MINITRONICS)
  #include "pins_MINITRONICS.h"       // ATmega1281                                 env:megaatmega1280
#elif MB(SILVER_GATE)
  #include "pins_SILVER_GATE.h"       // ATmega2561                                 env:megaatmega2560

//
// Sanguinololu and Derivatives - ATmega644P, ATmega1284P
//

#elif MB(SANGUINOLOLU_11)
  #include "pins_SANGUINOLOLU_11.h"   // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(SANGUINOLOLU_12)
  #include "pins_SANGUINOLOLU_12.h"   // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(MELZI)
  #include "pins_MELZI.h"             // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(MELZI_MAKR3D)
  #include "pins_MELZI_MAKR3D.h"      // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(MELZI_CREALITY)
  #include "pins_MELZI_CREALITY.h"    // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(MELZI_MALYAN)
  #include "pins_MELZI_MALYAN.h"      // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(MELZI_TRONXY)
  #include "pins_MELZI_TRONXY.h"      // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(STB_11)
  #include "pins_STB_11.h"            // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(AZTEEG_X1)
  #include "pins_AZTEEG_X1.h"         // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p

//
// Other ATmega644P, ATmega644, ATmega1284P
//

#elif MB(GEN3_MONOLITHIC)
  #include "pins_GEN3_MONOLITHIC.h"   // ATmega644P                                 env:sanguino_atmega644p
#elif MB(GEN3_PLUS)
  #include "pins_GEN3_PLUS.h"         // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(GEN6)
  #include "pins_GEN6.h"              // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(GEN6_DELUXE)
  #include "pins_GEN6_DELUXE.h"       // ATmega644P, ATmega1284P                    env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(GEN7_CUSTOM)
  #include "pins_GEN7_CUSTOM.h"       // ATmega644P, ATmega644, ATmega1284P         env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(GEN7_12)
  #include "pins_GEN7_12.h"           // ATmega644P, ATmega644, ATmega1284P         env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(GEN7_13)
  #include "pins_GEN7_13.h"           // ATmega644P, ATmega644, ATmega1284P         env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(GEN7_14)
  #include "pins_GEN7_14.h"           // ATmega644P, ATmega644, ATmega1284P         env:sanguino_atmega644p env:sanguino_atmega1284p
#elif MB(OMCA_A)
  #include "pins_OMCA_A.h"            // ATmega644                                  env:sanguino_atmega644p
#elif MB(OMCA)
  #include "pins_OMCA.h"              // ATmega644P, ATmega644                      env:sanguino_atmega644p
#elif MB(ANET_10)
  #include "pins_ANET_10.h"           // ATmega1284P                                env:sanguino_atmega1284p
#elif MB(SETHI)
  #include "pins_SETHI.h"             // ATmega644P, ATmega644, ATmega1284P         env:sanguino_atmega644p env:sanguino_atmega1284p

//
// Teensyduino - AT90USB1286, AT90USB1286P
//

#elif MB(TEENSYLU)
  #include "pins_TEENSYLU.h"          // AT90USB1286, AT90USB1286P                  env:at90USB1286_CDC
#elif MB(PRINTRBOARD)
  #include "pins_PRINTRBOARD.h"       // AT90USB1286                                env:at90USB1286_DFU
#elif MB(PRINTRBOARD_REVF)
  #include "pins_PRINTRBOARD_REVF.h"  // AT90USB1286                                env:at90USB1286_DFU
#elif MB(BRAINWAVE)
  #include "pins_BRAINWAVE.h"         // AT90USB646                                 env:at90USB1286_CDC
#elif MB(BRAINWAVE_PRO)
  #include "pins_BRAINWAVE_PRO.h"     // AT90USB1286                                env:at90USB1286_CDC
#elif MB(SAV_MKI)
  #include "pins_SAV_MKI.h"           // AT90USB1286                                env:at90USB1286_CDC
#elif MB(TEENSY2)
  #include "pins_TEENSY2.h"           // AT90USB1286                                env:teensy20
#elif MB(5DPRINT)
  #include "pins_5DPRINT.h"           // AT90USB1286                                ?env:at90USB1286_DFU

//
// STM32
//

#elif MB(MALYAN_M300)
  #include "pins_MALYAN_M300.h"       // STM32F070xB

#else
  #error "Unknown MOTHERBOARD value set in Configuration.h"
#endif

// Define certain undefined pins
#ifndef X_MS1_PIN
  #define X_MS1_PIN -1
#endif
#ifndef X_MS2_PIN
  #define X_MS2_PIN -1
#endif
#ifndef Y_MS1_PIN
  #define Y_MS1_PIN -1
#endif
#ifndef Y_MS2_PIN
  #define Y_MS2_PIN -1
#endif
#ifndef Z_MS1_PIN
  #define Z_MS1_PIN -1
#endif
#ifndef Z_MS2_PIN
  #define Z_MS2_PIN -1
#endif
#ifndef Z_MS3_PIN
  #define Z_MS3_PIN -1
#endif
#ifndef E0_MS1_PIN
  #define E0_MS1_PIN -1
#endif
#ifndef E0_MS2_PIN
  #define E0_MS2_PIN -1
#endif
#ifndef E1_MS1_PIN
  #define E1_MS1_PIN -1
#endif
#ifndef E1_MS2_PIN
  #define E1_MS2_PIN -1
#endif
#ifndef E2_MS1_PIN
  #define E2_MS1_PIN -1
#endif
#ifndef E2_MS2_PIN
  #define E2_MS2_PIN -1
#endif
#ifndef E3_MS1_PIN
  #define E3_MS1_PIN -1
#endif
#ifndef E3_MS2_PIN
  #define E3_MS2_PIN -1
#endif
#ifndef E3_MS3_PIN
  #define E3_MS3_PIN -1
#endif
#ifndef E4_MS1_PIN
  #define E4_MS1_PIN -1
#endif
#ifndef E4_MS2_PIN
  #define E4_MS2_PIN -1
#endif
#ifndef E4_MS3_PIN
  #define E4_MS3_PIN -1
#endif

#ifndef E0_STEP_PIN
  #define E0_STEP_PIN -1
#endif
#ifndef E0_DIR_PIN
  #define E0_DIR_PIN -1
#endif
#ifndef E0_ENABLE_PIN
  #define E0_ENABLE_PIN -1
#endif
#ifndef E1_STEP_PIN
  #define E1_STEP_PIN -1
#endif
#ifndef E1_DIR_PIN
  #define E1_DIR_PIN -1
#endif
#ifndef E1_ENABLE_PIN
  #define E1_ENABLE_PIN -1
#endif
#ifndef E2_STEP_PIN
  #define E2_STEP_PIN -1
#endif
#ifndef E2_DIR_PIN
  #define E2_DIR_PIN -1
#endif
#ifndef E2_ENABLE_PIN
  #define E2_ENABLE_PIN -1
#endif
#ifndef E3_STEP_PIN
  #define E3_STEP_PIN -1
#endif
#ifndef E3_DIR_PIN
  #define E3_DIR_PIN -1
#endif
#ifndef E3_ENABLE_PIN
  #define E3_ENABLE_PIN -1
#endif
#ifndef E4_STEP_PIN
  #define E4_STEP_PIN -1
#endif
#ifndef E4_DIR_PIN
  #define E4_DIR_PIN -1
#endif
#ifndef E4_ENABLE_PIN
  #define E4_ENABLE_PIN -1
#endif

#ifndef X_CS_PIN
  #define X_CS_PIN -1
#endif
#ifndef Y_CS_PIN
  #define Y_CS_PIN -1
#endif
#ifndef Z_CS_PIN
  #define Z_CS_PIN -1
#endif
#ifndef E0_CS_PIN
  #define E0_CS_PIN -1
#endif
#ifndef E1_CS_PIN
  #define E1_CS_PIN -1
#endif
#ifndef E2_CS_PIN
  #define E2_CS_PIN -1
#endif
#ifndef E3_CS_PIN
  #define E3_CS_PIN -1
#endif
#ifndef E4_CS_PIN
  #define E4_CS_PIN -1
#endif

#ifndef FAN_PIN
  #define FAN_PIN -1
#endif
#ifndef FAN1_PIN
  #define FAN1_PIN -1
#endif
#ifndef FAN2_PIN
  #define FAN2_PIN -1
#endif
#ifndef CONTROLLER_FAN_PIN
  #define CONTROLLER_FAN_PIN  -1
#endif

#ifndef FANMUX0_PIN
  #define FANMUX0_PIN -1
#endif
#ifndef FANMUX1_PIN
  #define FANMUX1_PIN -1
#endif
#ifndef FANMUX2_PIN
  #define FANMUX2_PIN -1
#endif

#ifndef HEATER_0_PIN
  #define HEATER_0_PIN -1
#endif
#ifndef HEATER_1_PIN
  #define HEATER_1_PIN -1
#endif
#ifndef HEATER_2_PIN
  #define HEATER_2_PIN -1
#endif
#ifndef HEATER_3_PIN
  #define HEATER_3_PIN -1
#endif
#ifndef HEATER_4_PIN
  #define HEATER_4_PIN -1
#endif
#ifndef HEATER_BED_PIN
  #define HEATER_BED_PIN -1
#endif

#ifndef TEMP_0_PIN
  #define TEMP_0_PIN -1
#endif
#ifndef TEMP_1_PIN
  #define TEMP_1_PIN -1
#endif
#ifndef TEMP_2_PIN
  #define TEMP_2_PIN -1
#endif
#ifndef TEMP_3_PIN
  #define TEMP_3_PIN -1
#endif
#ifndef TEMP_4_PIN
  #define TEMP_4_PIN -1
#endif
#ifndef TEMP_BED_PIN
  #define TEMP_BED_PIN -1
#endif

#ifndef SD_DETECT_PIN
  #define SD_DETECT_PIN -1
#endif
#ifndef SDPOWER
  #define SDPOWER -1
#endif
#ifndef SDSS
  #define SDSS -1
#endif
#ifndef LED_PIN
  #define LED_PIN -1
#endif
#ifndef PS_ON_PIN
  #define PS_ON_PIN -1
#endif
#ifndef KILL_PIN
  #define KILL_PIN -1
#endif
#ifndef SUICIDE_PIN
  #define SUICIDE_PIN -1
#endif

#ifndef MAX_EXTRUDERS
  #define MAX_EXTRUDERS 5
#endif

//
// Assign auto fan pins if needed
//
#ifndef E0_AUTO_FAN_PIN
  #ifdef ORIG_E0_AUTO_FAN_PIN
    #define E0_AUTO_FAN_PIN ORIG_E0_AUTO_FAN_PIN
  #else
    #define E0_AUTO_FAN_PIN -1
  #endif
#endif
#ifndef E1_AUTO_FAN_PIN
  #ifdef ORIG_E1_AUTO_FAN_PIN
    #define E1_AUTO_FAN_PIN ORIG_E1_AUTO_FAN_PIN
  #else
    #define E1_AUTO_FAN_PIN -1
  #endif
#endif
#ifndef E2_AUTO_FAN_PIN
  #ifdef ORIG_E2_AUTO_FAN_PIN
    #define E2_AUTO_FAN_PIN ORIG_E2_AUTO_FAN_PIN
  #else
    #define E2_AUTO_FAN_PIN -1
  #endif
#endif
#ifndef E3_AUTO_FAN_PIN
  #ifdef ORIG_E3_AUTO_FAN_PIN
    #define E3_AUTO_FAN_PIN ORIG_E3_AUTO_FAN_PIN
  #else
    #define E3_AUTO_FAN_PIN -1
  #endif
#endif
#ifndef E4_AUTO_FAN_PIN
  #ifdef ORIG_E4_AUTO_FAN_PIN
    #define E4_AUTO_FAN_PIN ORIG_E4_AUTO_FAN_PIN
  #else
    #define E4_AUTO_FAN_PIN -1
  #endif
#endif
#ifndef CHAMBER_AUTO_FAN_PIN
  #ifdef ORIG_CHAMBER_AUTO_FAN_PIN
    #define CHAMBER_AUTO_FAN_PIN ORIG_CHAMBER_AUTO_FAN_PIN
  #else
    #define CHAMBER_AUTO_FAN_PIN -1
  #endif
#endif

// List of pins which to ignore when asked to change by gcode, 0 and 1 are RX and TX, do not mess with those!
#define _E0_PINS E0_STEP_PIN, E0_DIR_PIN, E0_ENABLE_PIN, E0_MS1_PIN, E0_MS2_PIN, E0_CS_PIN,
#define _E1_PINS
#define _E2_PINS
#define _E3_PINS
#define _E4_PINS

#if ENABLED(SWITCHING_EXTRUDER)
                      // Tools 0 and 1 use E0
  #if EXTRUDERS > 2   // Tools 2 and 3 use E1
    #undef _E1_PINS
    #define _E1_PINS E1_STEP_PIN, E1_DIR_PIN, E1_ENABLE_PIN, E1_MS1_PIN, E1_MS2_PIN, E1_CS_PIN,
    #if EXTRUDERS > 4 // Tools 4 and 5 use E2
      #undef _E2_PINS
      #define _E2_PINS E2_STEP_PIN, E2_DIR_PIN, E2_ENABLE_PIN, E2_MS1_PIN, E2_MS2_PIN, E2_CS_PIN,
    #endif
  #endif
#elif EXTRUDERS > 1
  #undef _E1_PINS
  #define _E1_PINS E1_STEP_PIN, E1_DIR_PIN, E1_ENABLE_PIN, E1_MS1_PIN, E1_MS2_PIN, E1_CS_PIN,
  #if EXTRUDERS > 2
    #undef _E2_PINS
    #define _E2_PINS E2_STEP_PIN, E2_DIR_PIN, E2_ENABLE_PIN, E2_MS1_PIN, E2_MS2_PIN, E2_CS_PIN,
    #if EXTRUDERS > 3
      #undef _E3_PINS
      #define _E3_PINS E3_STEP_PIN, E3_DIR_PIN, E3_ENABLE_PIN, E3_MS1_PIN, E3_MS2_PIN, E3_MS3_PIN, E3_CS_PIN,
      #if EXTRUDERS > 4
        #undef _E4_PINS
        #define _E4_PINS E4_STEP_PIN, E4_DIR_PIN, E4_ENABLE_PIN, E4_MS1_PIN, E4_MS2_PIN, E4_MS3_PIN, E4_CS_PIN,
      #endif // EXTRUDERS > 4
    #endif // EXTRUDERS > 3
  #endif // EXTRUDERS > 2
#endif // EXTRUDERS > 1

// Marlin needs to account for pins that equal -1
#define marlinAnalogInputToDigitalPin(p) ((p) == -1 ? -1 : analogInputToDigitalPin(p))

#define _H0_PINS HEATER_0_PIN, E0_AUTO_FAN_PIN, marlinAnalogInputToDigitalPin(TEMP_0_PIN),
#define _H1_PINS
#define _H2_PINS
#define _H3_PINS
#define _H4_PINS

#if HOTENDS > 1
  #undef _H1_PINS
  #define _H1_PINS HEATER_1_PIN, E1_AUTO_FAN_PIN, marlinAnalogInputToDigitalPin(TEMP_1_PIN),
  #if HOTENDS > 2
    #undef _H2_PINS
    #define _H2_PINS HEATER_2_PIN, E2_AUTO_FAN_PIN, marlinAnalogInputToDigitalPin(TEMP_2_PIN),
    #if HOTENDS > 3
      #undef _H3_PINS
      #define _H3_PINS HEATER_3_PIN, E3_AUTO_FAN_PIN, marlinAnalogInputToDigitalPin(TEMP_3_PIN),
      #if HOTENDS > 4
        #undef _H4_PINS
        #define _H4_PINS HEATER_4_PIN, marlinAnalogInputToDigitalPin(TEMP_4_PIN),
      #endif // HOTENDS > 4
    #endif // HOTENDS > 3
  #endif // HOTENDS > 2
#elif ENABLED(MIXING_EXTRUDER)
  #undef _E1_PINS
  #define _E1_PINS E1_STEP_PIN, E1_DIR_PIN, E1_ENABLE_PIN, E1_MS1_PIN, E1_MS2_PIN, E1_CS_PIN,
  #if MIXING_STEPPERS > 2
    #undef _E2_PINS
    #define _E2_PINS E2_STEP_PIN, E2_DIR_PIN, E2_ENABLE_PIN, E2_MS1_PIN, E2_MS2_PIN, E2_CS_PIN,
    #if MIXING_STEPPERS > 3
      #undef _E3_PINS
      #define _E3_PINS E3_STEP_PIN, E3_DIR_PIN, E3_ENABLE_PIN, E3_MS1_PIN, E3_MS2_PIN, E3_CS_PIN,
      #if MIXING_STEPPERS > 4
        #undef _E4_PINS
        #define _E4_PINS E4_STEP_PIN, E4_DIR_PIN, E4_ENABLE_PIN, E4_MS1_PIN, E4_MS2_PIN, E4_CS_PIN,
      #endif // MIXING_STEPPERS > 4
    #endif // MIXING_STEPPERS > 3
  #endif // MIXING_STEPPERS > 2
#endif // MIXING_STEPPERS > 1

#define BED_PINS HEATER_BED_PIN, marlinAnalogInputToDigitalPin(TEMP_BED_PIN),

//
// Assign endstop pins for boards with only 3 connectors
//
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

//
// Disable unused endstop / probe pins
//
#if DISABLED(Z_MIN_PROBE_ENDSTOP)
  #undef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN    -1
#endif

#if DISABLED(USE_XMAX_PLUG)
  #undef X_MAX_PIN
  #define X_MAX_PIN          -1
#endif

#if DISABLED(USE_YMAX_PLUG)
  #undef Y_MAX_PIN
  #define Y_MAX_PIN          -1
#endif

#if DISABLED(USE_ZMAX_PLUG)
  #undef Z_MAX_PIN
  #define Z_MAX_PIN          -1
#endif

#if DISABLED(USE_XMIN_PLUG)
  #undef X_MIN_PIN
  #define X_MIN_PIN          -1
#endif

#if DISABLED(USE_YMIN_PLUG)
  #undef Y_MIN_PIN
  #define Y_MIN_PIN          -1
#endif

#if DISABLED(USE_ZMIN_PLUG)
  #undef Z_MIN_PIN
  #define Z_MIN_PIN          -1
#endif

#ifndef LCD_PINS_D4
  #define LCD_PINS_D4 -1
#endif
#ifndef LCD_PINS_D5
  #define LCD_PINS_D5 -1
#endif
#ifndef LCD_PINS_D6
  #define LCD_PINS_D6 -1
#endif
#ifndef LCD_PINS_D7
  #define LCD_PINS_D7 -1
#endif

//
// Dual X-carriage, Dual Y, Dual Z support
//

#define _D_PINS
#define _X2_PINS
#define _Y2_PINS
#define _Z2_PINS

#define __EPIN(p,q) E##p##_##q##_PIN
#define _EPIN(p,q) __EPIN(p,q)

// The HANGPRINTER A, B, C, D axes
#if ENABLED(HANGPRINTER)
  #define A_ENABLE_PIN      X_ENABLE_PIN
  #define A_DIR_PIN         X_DIR_PIN
  #define A_STEP_PIN        X_STEP_PIN
  #define A_MS1_PIN         X_MS1_PIN

  #define B_ENABLE_PIN      Y_ENABLE_PIN
  #define B_DIR_PIN         Y_DIR_PIN
  #define B_STEP_PIN        Y_STEP_PIN
  #define B_MS1_PIN         Y_MS1_PIN

  #define C_ENABLE_PIN      Z_ENABLE_PIN
  #define C_DIR_PIN         Z_DIR_PIN
  #define C_STEP_PIN        Z_STEP_PIN
  #define C_MS1_PIN         Z_MS1_PIN

  #ifndef D_STEP_PIN
    #define D_STEP_PIN   _EPIN(E_STEPPERS, STEP)
    #define D_DIR_PIN    _EPIN(E_STEPPERS, DIR)
    #define D_ENABLE_PIN _EPIN(E_STEPPERS, ENABLE)
    #ifndef D_CS_PIN
      #define D_CS_PIN   _EPIN(E_STEPPERS, CS)
    #endif
    #ifndef D_MS1_PIN
      #define D_MS1_PIN  _EPIN(E_STEPPERS, MS1)
    #endif
    #if E_STEPPERS >= MAX_EXTRUDERS || !PIN_EXISTS(D_ENABLE)
      #error "No E stepper plug left for D Axis!"
    #endif
  #endif
  #undef _D_PINS
  #define ___D_PINS D_STEP_PIN, D_DIR_PIN, D_ENABLE_PIN,
  #ifdef D_CS_PIN
    #define __D_PINS ___D_PINS D_CS_PIN,
  #else
    #define __D_PINS ___D_PINS
  #endif
  #ifdef D_MS1_PIN
    #define _D_PINS __D_PINS D_MS1_PIN,
  #else
    #define _D_PINS __D_PINS
  #endif
  #define X2_E_INDEX INCREMENT(E_STEPPERS)
#else
  #define X2_E_INDEX E_STEPPERS
#endif

// The X2 axis, if any, should be the next open extruder port
#if ENABLED(DUAL_X_CARRIAGE) || ENABLED(X_DUAL_STEPPER_DRIVERS)
  #ifndef X2_STEP_PIN
    #define X2_STEP_PIN   _EPIN(X2_E_INDEX, STEP)
    #define X2_DIR_PIN    _EPIN(X2_E_INDEX, DIR)
    #define X2_ENABLE_PIN _EPIN(X2_E_INDEX, ENABLE)
    #ifndef X2_CS_PIN
      #define X2_CS_PIN   _EPIN(X2_E_INDEX, CS)
    #endif
    #if X2_E_INDEX >= MAX_EXTRUDERS || !PIN_EXISTS(X2_ENABLE)
      #error "No E stepper plug left for X2!"
    #endif
  #endif
  #undef _X2_PINS
  #define __X2_PINS X2_STEP_PIN, X2_DIR_PIN, X2_ENABLE_PIN,
  #ifdef X2_CS_PIN
    #define _X2_PINS __X2_PINS X2_CS_PIN,
  #else
    #define _X2_PINS __X2_PINS
  #endif
  #define Y2_E_INDEX INCREMENT(X2_E_INDEX)
#else
  #define Y2_E_INDEX X2_E_INDEX
#endif

// The Y2 axis, if any, should be the next open extruder port
#if ENABLED(Y_DUAL_STEPPER_DRIVERS)
  #ifndef Y2_STEP_PIN
    #define Y2_STEP_PIN   _EPIN(Y2_E_INDEX, STEP)
    #define Y2_DIR_PIN    _EPIN(Y2_E_INDEX, DIR)
    #define Y2_ENABLE_PIN _EPIN(Y2_E_INDEX, ENABLE)
    #ifndef Y2_CS_PIN
      #define Y2_CS_PIN   _EPIN(Y2_E_INDEX, CS)
    #endif
    #if Y2_E_INDEX >= MAX_EXTRUDERS || !PIN_EXISTS(Y2_ENABLE)
      #error "No E stepper plug left for Y2!"
    #endif
  #endif
  #undef _Y2_PINS
  #define __Y2_PINS Y2_STEP_PIN, Y2_DIR_PIN, Y2_ENABLE_PIN,
  #ifdef Y2_CS_PIN
    #define _Y2_PINS __Y2_PINS Y2_CS_PIN,
  #else
    #define _Y2_PINS __Y2_PINS
  #endif
  #define Z2_E_INDEX INCREMENT(Y2_E_INDEX)
#else
  #define Z2_E_INDEX Y2_E_INDEX
#endif

// The Z2 axis, if any, should be the next open extruder port
#if ENABLED(Z_DUAL_STEPPER_DRIVERS)
  #ifndef Z2_STEP_PIN
    #define Z2_STEP_PIN   _EPIN(Z2_E_INDEX, STEP)
    #define Z2_DIR_PIN    _EPIN(Z2_E_INDEX, DIR)
    #define Z2_ENABLE_PIN _EPIN(Z2_E_INDEX, ENABLE)
    #ifndef Z2_CS_PIN
      #define Z2_CS_PIN   _EPIN(Z2_E_INDEX, CS)
    #endif
    #if Z2_E_INDEX >= MAX_EXTRUDERS || !PIN_EXISTS(Z2_ENABLE)
      #error "No E stepper plug left for Z2!"
    #endif
  #endif
  #undef _Z2_PINS
  #define __Z2_PINS Z2_STEP_PIN, Z2_DIR_PIN, Z2_ENABLE_PIN,
  #ifdef Z2_CS_PIN
    #define _Z2_PINS __Z2_PINS Z2_CS_PIN,
  #else
    #define _Z2_PINS __Z2_PINS
  #endif
#endif

#define SENSITIVE_PINS { 0, 1, \
    X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, X_MS1_PIN, X_MS2_PIN, X_CS_PIN, \
    Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, Y_MS1_PIN, Y_MS2_PIN, Y_CS_PIN, \
    Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, Z_MS1_PIN, Z_MS2_PIN, Z_MS3_PIN, Z_CS_PIN, Z_MIN_PROBE_PIN, \
    PS_ON_PIN, HEATER_BED_PIN, FAN_PIN, FAN1_PIN, FAN2_PIN, CONTROLLER_FAN_PIN, \
    _E0_PINS _E1_PINS _E2_PINS _E3_PINS _E4_PINS BED_PINS \
    _H0_PINS _H1_PINS _H2_PINS _H3_PINS _H4_PINS \
    _D_PINS _X2_PINS _Y2_PINS _Z2_PINS \
  }

#define HAS_DIGIPOTSS (PIN_EXISTS(DIGIPOTSS))

/**
 * Define SPI Pins: SCK, MISO, MOSI, SS
 */
#if defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
  #define AVR_SCK_PIN  13
  #define AVR_MISO_PIN 12
  #define AVR_MOSI_PIN 11
  #define AVR_SS_PIN   10
#elif defined(__AVR_ATmega644__) || defined(__AVR_ATmega644P__) || defined(__AVR_ATmega644PA__) || defined(__AVR_ATmega1284P__)
  #define AVR_SCK_PIN  7
  #define AVR_MISO_PIN 6
  #define AVR_MOSI_PIN 5
  #define AVR_SS_PIN   4
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
  #define AVR_SCK_PIN  52
  #define AVR_MISO_PIN 50
  #define AVR_MOSI_PIN 51
  #define AVR_SS_PIN   53
#elif defined(__AVR_AT90USB1287__) || defined(__AVR_AT90USB1286__) || defined(__AVR_AT90USB646__) || defined(__AVR_AT90USB647__)
  #define AVR_SCK_PIN  21
  #define AVR_MISO_PIN 23
  #define AVR_MOSI_PIN 22
  #define AVR_SS_PIN   20
#elif defined(__AVR_ATmega1281__) || defined(__AVR_ATmega2561__)
  #define AVR_SCK_PIN  10
  #define AVR_MISO_PIN 12
  #define AVR_MOSI_PIN 11
  #define AVR_SS_PIN   16
#endif

#ifndef SCK_PIN
  #define SCK_PIN  AVR_SCK_PIN
#endif
#ifndef MISO_PIN
  #define MISO_PIN AVR_MISO_PIN
#endif
#ifndef MOSI_PIN
  #define MOSI_PIN AVR_MOSI_PIN
#endif
#ifndef SS_PIN
  #define SS_PIN   AVR_SS_PIN
#endif

#endif // __PINS_H__
