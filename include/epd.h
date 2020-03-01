//
// Created by xforce on 29-02-20.
//

#ifndef LIBEPD2IN9_EPD_H
#define LIBEPD2IN9_EPD_H


#include "macro.h"
#include "type.h"

NAMESPACE_BEGIN(LibEpd, Common)

    typedef struct PinLayout {
        public:
            PIN reset_pin,
                dc_pin,
                cs_pin,
                busy_pin;
    } PinLayout_t;

    class Epd {
        private:
            PinLayout_t* pin_layout;

        public:
            explicit Epd(PinLayout_t* pin_layout) {
                this->pin_layout = pin_layout;
            }

            void reset();

    };

NAMESPACE_END(LibEpd, Common)


#endif //LIBEPD2IN9_EPD_H
