/**
 * @file color.h
 *
 * @brief Color definitions.
 *
 * @ingroup libepd2in9
 *
 * @date 01-03-2020
 * @author hypothermic <admin@hypothermic.nl>
 */

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
