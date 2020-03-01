//
// Created by xforce on 29-02-20.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-deprecated-headers" // Arduino still uses legacy libraries.

#ifndef LIBEPD2IN9_UNO_TYPE_H
#define LIBEPD2IN9_UNO_TYPE_H


#include "private.h"

#undef BYTE
#define BYTE uint8_t

#undef PIN
#define PIN uint8_t

#undef DIGITAL_HIGH
#define DIGITAL_HIGH HIGH

#undef DIGITAL_LOW
#define DIGITAL_LOW LOW


#endif //LIBEPD2IN9_UNO_TYPE_H

#pragma clang diagnostic pop