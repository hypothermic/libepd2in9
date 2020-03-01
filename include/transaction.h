//
// Created by xforce on 01-03-20.
//

#ifndef LIBEPD2IN9_TRANSACTION_H
#define LIBEPD2IN9_TRANSACTION_H


#include "macro.h"
#include "type.h"
#include "color.h"

#define EPD_WIDTH                      128
#define EPD_HEIGHT                     296

NAMESPACE_BEGIN(LibEpd, Common)

    class Transaction {
        public:
            virtual inline ~Transaction() = default;

            virtual void set_pixel(int x, int y, Color color) = 0;

            virtual void draw_rect(int sx, int sy, int ex, int ey, Color color) = 0;
            virtual void fill_rect(int sx, int sy, int ex, int ey, Color color) = 0;

    };

NAMESPACE_END(LibEpd, Common)


#endif //LIBEPD2IN9_TRANSACTION_H
