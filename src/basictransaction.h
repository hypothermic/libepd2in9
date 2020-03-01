//
// Created by xforce on 01-03-20.
//

#ifndef LIBEPD2IN9_BASICTRANSACTION_H
#define LIBEPD2IN9_BASICTRANSACTION_H


#include "macro.h"
#include "transaction.h"

NAMESPACE_BEGIN(LibEpd, Common)

    class BasicTransaction : public Transaction {
        public:
            void set_pixel(int x, int y, Color color) override;

            void draw_rect(int sx, int sy, int ex, int ey, Color color) override;

            void fill_rect(int sx, int sy, int ex, int ey, Color color) override;
    };

NAMESPACE_END(LibEpd, Common)


#endif //LIBEPD2IN9_BASICTRANSACTION_H
