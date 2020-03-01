//
// Created by xforce on 29-02-20.
//

#include <unity.h>

#include "libepd.h"
#include "board/arduino/uno/public.h"

using namespace LibEpd::Common;

#define __TEST_PIN_RESET 8
#define __TEST_PIN_DC    9
#define __TEST_PIN_CS    10
#define __TEST_PIN_BUSY  11

const Epd* const epd = new Epd(new PinLayout({__TEST_PIN_RESET,
                                              __TEST_PIN_DC,
                                              __TEST_PIN_CS,
                                              __TEST_PIN_BUSY}));

void test_epd_pin_numbers() {
    TEST_ASSERT_EQUAL(epd->pin_layout->reset_pin, __TEST_PIN_RESET);
    TEST_ASSERT_EQUAL(epd->pin_layout->dc_pin,    __TEST_PIN_DC);
    TEST_ASSERT_EQUAL(epd->pin_layout->cs_pin,    __TEST_PIN_CS);
    TEST_ASSERT_EQUAL(epd->pin_layout->busy_pin,  __TEST_PIN_BUSY);
}

void setup() {
    UNITY_BEGIN();
    RUN_TEST(test_epd_pin_numbers);

    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    UNITY_END();
}

/*
 * Unity requirement
 */
void setUp() {

}

/*
 * Unity requirement
 */
void tearDown() {

}

#undef __TEST_PIN_RESET
#undef __TEST_PIN_DC
#undef __TEST_PIN_CS
#undef __TEST_PIN_BUSY