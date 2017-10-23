//
// Created by SQ5RWU on 2016-12-24.
//

#ifndef STM32_RTTY_CONFIG_H
#define STM32_RTTY_CONFIG_H

#ifdef USE_EXTERNAL_CONFIG
#include "config_external.h"
#else

//**************config**********************
#define CALLSIGN "HF800PT" // put your RTTY callsign here
#define APRS_CALLSIGN "SQ7FJB-12" // put your APRS callsign here, 6 characters. If your callsign is shorter add spaces
#define APRS_SSID 'B' // put your APRS SSID here
// 0 --> Your primary station usually fixed and message capable
// 1 --> generic additional station, digi, mobile, wx, etc.
// 2 --> generic additional station, digi, mobile, wx, etc.
// 3 --> generic additional station, digi, mobile, wx, etc.
// 4 --> generic additional station, digi, mobile, wx, etc.
// 5 --> Other network sources (Dstar, Iphones, Blackberry's etc)
// 6 --> Special activity, Satellite ops, camping or 6 meters, etc.
// 7 --> walkie talkies, HT's or other human portable
// 8 --> boats, sailboats, RV's or second main mobile
// 9 --> Primary Mobile (usually message capable)
// A --> internet, Igates, echolink, winlink, AVRS, APRN, etc.
// B --> balloons, aircraft, spacecraft, etc.
// C --> APRStt, DTMF, RFID, devices, one-way trackers*, etc.
// D --> Weather stations
// E --> Truckers or generally full time drivers
// F --> generic additional station, digi, mobile, wx, etc.

#define APRS_COMMENT "  Aeroklub Ziemi Piotrkowskiej - Swieto Latawca, 437,6MHz RTTY "
#define RTTY_TO_APRS_RATIO 1 //transmit APRS packet with each x RTTY packet

//*************frequency********************
#define RTTY_FREQUENCY  437.600f //Mhz middle frequency
#define APRS_FREQUENCY  432.500f //Mhz middle frequency
//************rtty speed*********************** si4032
#define RTTY_SPEED  300 // RTTY baudrate
// SHIFT is always 450Hz
//************rtty bits************************ si4032
#define RTTY_7BIT   1 // if 0 --> 5 bits
//************rtty stop bits******************* si4032
#define RTTY_USE_2_STOP_BITS   0
//********* power definition**************************
#define TX_POWER  7 // PWR 0...7 0- MIN ... 7 - MAX
// 0 --> -1dBm
// 1 --> 2dBm
// 2 --> 5dBm
// 3 --> 8dBm
// 4 --> 11dBm
// 5 --> 14dBm
// 6 --> 17dBm
// 7 --> 20dBm
//****************************************************
// WARNING: do not use this in flying tracker!
#define ALLOW_DISABLE_BY_BUTTON 1
//********** frame delay in msec**********************
#define tx_delay  5000
#endif

#endif //STM32_RTTY_CONFIG_H
