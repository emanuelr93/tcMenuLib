/*
    The code in this file uses open source libraries provided by thecoderscorner

    DO NOT EDIT THIS FILE, IT WILL BE GENERATED EVERY TIME YOU USE THE UI DESIGNER
    INSTEAD EITHER PUT CODE IN YOUR SKETCH OR CREATE ANOTHER SOURCE FILE.

    All the variables you may need access to are marked extern in this file for easy
    use elsewhere.
 */

#ifndef MENU_GENERATED_CODE_H
#define MENU_GENERATED_CODE_H

#include <tcMenu.h>
#include <LiquidCrystalIO.h>
#include "SerialTransport.h"
#include <RemoteConnector.h>
#include "tcMenuLiquidCrystal.h"

// all define statements needed
#define TCMENU_USING_PROGMEM true
#define ENCODER_PIN_A 2
#define ENCODER_PIN_B 3
#define ENCODER_PIN_OK A3

// all variables that need exporting
extern LiquidCrystal lcd;
extern LiquidCrystalRenderer renderer;
extern const char applicationName[];

// all menu item forward references.
extern ActionMenuItem menuPushMe;
extern EnumMenuItem menuFood;
extern TextMenuItem menuMyText;
extern AnalogMenuItem menuA2Voltage;
extern AnalogMenuItem menuA1Voltage;
extern AnalogMenuItem menuA0Voltage;

// Callback functions always follow this pattern: void CALLBACK_FUNCTION myCallback();
#define CALLBACK_FUNCTION

void CALLBACK_FUNCTION onPushMe(int id);

void setupMenu();

#endif // MENU_GENERATED_CODE_H
