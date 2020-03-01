//
// Created by xforce on 29-02-20.
//

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