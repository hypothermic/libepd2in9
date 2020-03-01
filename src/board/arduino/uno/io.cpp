/**
 * @file io.cpp
 *
 * @brief Arduino Uno-specific IO logic
 *
 * @ingroup libepd2in9-uno
 *
 * @date 29-02-2020
 * @author hypothermic <admin@hypothermic.nl>
 */

#include "io.h"

#include "private.h"

NAMESPACE_BEGIN(LibEpd, Common)

void IO::write(int pin, BYTE value) {
    digitalWrite(pin, value);
}

BYTE IO::read(int pin) {
    return digitalRead(pin);
}

void IO::delay(unsigned long ms) {
    delayMicroseconds(ms);
}

NAMESPACE_END(LibEpd, Common)