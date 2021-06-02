/*MIT License

Copyright (c) 2020 Nyameaama Gambrah

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.*/

//DEFINITIONS FILE 

#ifndef DEFINITIONS_

#include<stdint.h>
//#include<Arduino.h>

#include"ecu_xx_time.h"

//typedef unsigned char uint8_t;

//typedef unsigned int uint32_t;

#define OXYGEN_VALVE_BASE_ID "SBC02"

#define FUEL_VALVE_BASE_ID "SBC01"

#define PURGE_VALVE_BASE_ID "SBC04"

#define TAP_OFF_LINE_VALVE_BASE_ID "SBC03"

#define TAP_OFF_A_VALVE_BASE_ID "SBC05"

#define TAP_OFF_B_VALVE_BASE_ID "SBC06"

#define CHAMBER_IGNITER_BASE_ID "SBC13"

#define POST_INLET_FUEL_TRANSDUCER_BASE_ID "SBC07"

#define POST_INLET_LOX_TRANSDUCER_BASE_ID "SBC08"

#define PRE_CHAMBER_FUEL_TRANSDUCER_BASE_ID "SBC09"

#define PRE_CHAMBER_LOX_TRANSDUCER_BASE_ID "SBC10"

#define PRE_CHAMBER_FUEL_THERMOCOUPLE_BASE_ID "SBC11"

#define PRE_CHAMBER_LOX_THERMOCOUPLE_BASE_ID "SBC12"




#define ID_LEN 13
char* IDS[ID_LEN][2] = {
                    {"OXYGEN_VALVE_BASE_ID","SBC02"},
                    {"FUEL_VALVE_BASE_ID","SBC01"},
                    {"PURGE_VALVE_BASE_ID","SBC04"},
                    {"TAP_OFF_LINE_VALVE_BASE_ID","SBC03"},
                    {"TAP_OFF_A_VALVE_BASE_ID","SBC05"},
                    {"TAP_OFF_B_VALVE_BASE_ID","SBC06"},
                    {"CHAMBER_IGNITER_BASE_ID","SBC13"},
                    {"POST_INLET_FUEL_TRANSDUCER_BASE_ID","SBC07"},
                    {"POST_INLET_LOX_TRANSDUCER_BASE_ID","SBC08"},
                    {"PRE_CHAMBER_FUEL_TRANSDUCER_BASE_ID","SBC09"},
                    {"PRE_CHAMBER_LOX_TRANSDUCER_BASE_ID","SBC10"},
                    {"PRE_CHAMBER_FUEL_THERMOCOUPLE_BASE_ID","SBC11"},
                    {"PRE_CHAMBER_LOX_THERMOCOUPLE_BASE_ID","SBC12"}
                };

//Engine Constants - Changeable
uint32_t ENGINE_THRUST_LIMIT;


//Engine Constants - 
uint32_t AimedThrustCapacity;
uint32_t ChamberPressure;
uint32_t Inletflow;
uint32_t OxidizerFlowRate;
uint32_t FuelFlowRate;
uint32_t ExitVelocity;

//Engine Constants - Dimensions
uint32_t ThroatDiameter;
uint32_t ThroatArea;
uint32_t ExitArea;
uint32_t ExitDiameter;
uint32_t NozzleLength;
uint32_t ConvergentLength;
uint32_t DivergentLength;
uint32_t ChamberVolume;
uint32_t ChamberDiameter; 
uint32_t ChamberArea;
uint32_t ChamberLength;

#endif //DEFINITIONS_