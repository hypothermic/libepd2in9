//
// Created by xforce on 29-02-20.
//

#include "spi.h"

#include "io.h"

#include "private.h"

NAMESPACE_BEGIN(LibEpd, Common)

// All of the following definitions are temporary.
// These should be configurable to the user's setup.
// TODO create configurable CS pin
#define __DEFAULT_CS_PIN_TEMP   (10)
#define __DEFAULT_RST_PIN_TEMP  (8)
#define __DEFAULT_DC_PIN_TEMP   (9)
#define __DEFAULT_BUSY_PIN_TEMP (7)

bool SPI::init() {
    pinMode(__DEFAULT_CS_PIN_TEMP, OUTPUT);
    pinMode(__DEFAULT_RST_PIN_TEMP, OUTPUT);
    pinMode(__DEFAULT_DC_PIN_TEMP, OUTPUT);
    pinMode(__DEFAULT_BUSY_PIN_TEMP, INPUT);
    SPIClass::begin();
    SPIClass::beginTransaction(SPISettings(2000000, MSBFIRST, SPI_MODE0));
    return true;
}

void SPI::write(BYTE value) {
    IO::write(__DEFAULT_CS_PIN_TEMP, LOW);
    SPIClass::transfer(value);
    IO::write(__DEFAULT_CS_PIN_TEMP, HIGH);
}

#undef __DEFAULT_CS_PIN_TEMP
#undef __DEFAULT_RST_PIN_TEMP
#undef __DEFAULT_DC_PIN_TEMP
#undef __DEFAULT_BUSY_PIN_TEMP

NAMESPACE_END(LibEpd, Common)