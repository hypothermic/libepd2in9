/**
 * @file color.h
 *
 * @brief Utility functions regarding the device's IO interface
 *
 * @ingroup libepd2in9
 *
 * @date 29-02-2020
 * @author hypothermic <admin@hypothermic.nl>
 */

#ifndef LIBEPD2IN9_IO_H
#define LIBEPD2IN9_IO_H


#include "macro.h"
#include "type.h"

NAMESPACE_BEGIN(LibEpd, Common)

    class IO {
        public:
            static void write(int pin, BYTE value);
            static BYTE read(int pin);

            static void delay(unsigned long ms);

    };

NAMESPACE_END(LibEpd, Common)


#endif //LIBEPD2IN9_IO_H
