/**
 * @file epd.h
 *
 * @brief Display representation class
 *
 * @ingroup libepd2in9
 *
 * @date 29-02-2020
 * @author hypothermic <admin@hypothermic.nl>
 */

#ifndef LIBEPD2IN9_EPD_H
#define LIBEPD2IN9_EPD_H


#include "macro.h"
#include "type.h"

#ifndef AWAIT_BUSY_TIMEOUT
#define AWAIT_BUSY_TIMEOUT 25 // ms
#endif

NAMESPACE_BEGIN(LibEpd, Common)

    typedef struct PinLayout {
        public:
            PIN reset_pin,
                dc_pin,
                cs_pin,
                busy_pin;
    } PinLayout_t;

    class Epd {
        public: // TODO private
            PinLayout_t* pin_layout;

        public:
            explicit Epd(PinLayout_t* pin_layout) {
                this->pin_layout = pin_layout;
            }

            bool init();
            void clear();
            void reset();
            void stop();

            void display();

        private:
            void send_command(BYTE command);
            void send_data(BYTE data);
            void await_busy();

    };

NAMESPACE_END(LibEpd, Common)


#endif //LIBEPD2IN9_EPD_H
