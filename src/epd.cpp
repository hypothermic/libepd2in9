//
// Created by xforce on 29-02-20.
//

#include "epd.h"

#include "io.h"
#include "type.h"

void LibEpd::Common::Epd::reset() {
    IO::write(pin_layout->reset_pin, DIGITAL_LOW);
    IO::delay(200);
    IO::write(pin_layout->reset_pin, DIGITAL_HIGH);
    IO::delay(200);
}
