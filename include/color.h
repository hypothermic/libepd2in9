//
// Created by xforce on 01-03-20.
//

#ifndef LIBEPD2IN9_COLOR_H
#define LIBEPD2IN9_COLOR_H


#include "macro.h"
#include "type.h"

NAMESPACE_BEGIN(LibEpd, Common)

    enum class Color : BYTE {

        WHITE     = 0,
        PRIMARY   = 1,
        SECONDARY = 2,

        NONE      = 255,

    };

NAMESPACE_END(LibEpd, Common)


#endif //LIBEPD2IN9_COLOR_H
