//
// Created by xforce on 29-02-20.
//

#ifndef LIBEPD2IN9_IO_H
#define LIBEPD2IN9_IO_H


#include "macro.h"
//#include "type.h"
#include "board/arduino/uno/type.h"

NAMESPACE_BEGIN(LibEpd, Common)

    class IO {
        public:
            static void write(int pin, BYTE value);
            static BYTE read(int pin);

    };

NAMESPACE_END(LibEpd, Common)


#endif //LIBEPD2IN9_IO_H
