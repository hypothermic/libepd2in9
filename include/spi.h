//
// Created by xforce on 29-02-20.
//

#ifndef LIBEPD2IN9_SPI_H
#define LIBEPD2IN9_SPI_H


#include "macro.h"
#include "type.h"

NAMESPACE_BEGIN(LibEpd, Common)

    class SPI {
        public:
            static void write(BYTE data);

    };

NAMESPACE_END(LibEpd, Common)


#endif //LIBEPD2IN9_SPI_H
