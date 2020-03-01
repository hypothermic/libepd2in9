/**
 * @file spi.h
 *
 * @brief Utility functions regarding the device's serial interface.
 *
 * @ingroup libepd2in9
 *
 * @date 29-02-2020
 * @author hypothermic <admin@hypothermic.nl>
 */

#ifndef LIBEPD2IN9_SPI_H
#define LIBEPD2IN9_SPI_H


#include "macro.h"
#include "type.h"

NAMESPACE_BEGIN(LibEpd, Common)

    class SPI {
        public:
            static bool init();
            static void write(BYTE data);

    };

NAMESPACE_END(LibEpd, Common)


#endif //LIBEPD2IN9_SPI_H
