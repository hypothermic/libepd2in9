//
// Created by xforce on 29-02-20.
//

#include "spi.h"

#include "io.h"

#include "private.h"

#define DEFAULT_CS_PIN_TEMP (10) // temporary, see below

NAMESPACE_BEGIN(LibEpd, Common)

bool SPI::init() {
    SPIClass::begin();
    SPIClass::beginTransaction(SPISettings(2000000, MSBFIRST, SPI_MODE0));
    return true;
}

void SPI::write(BYTE value) {
    IO::write(DEFAULT_CS_PIN_TEMP, LOW); // TODO create configurable CS pin
    SPIClass::transfer(value);
    IO::write(DEFAULT_CS_PIN_TEMP, HIGH);
}

NAMESPACE_END(LibEpd, Common)