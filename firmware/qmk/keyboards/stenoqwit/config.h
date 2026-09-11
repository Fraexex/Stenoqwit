#pragma once


#include "quantum.h"

#define PRODUCT_ID      0x0353
#define DEVICE_VER      0x0001
#define VENDOR_ID       0xFEED
#define MANUFACTURER    ComfortSteno
#define PRODUCT         ComfortSteno 23-Key

#define MATRIX_ROWS 3
#define MATRIX_COLS 10
#define MATRIX_ROW_PINS \
  { PD4, PD0, PD1 }

#define MATRIX_COL_PINS \
  { PB4, PE6, PC6, PD7, PB1, PF7, PF6, PF5, PF4, PB3 }

#define DIODE_DIRECTION_ROW2COL

#define DEBOUNCE 5

#ifdef AUDIO_ENABLE
  #define AUDIO_PIN B7
#endif
