/**
 * @file io.cpp
 *
 * @brief Arduino Uno-specific data type overrides
 *
 * @ingroup libepd2in9-uno
 *
 * @date 29-02-2020
 * @author hypothermic <admin@hypothermic.nl>
 */

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