//
// Created by xforce on 29-02-20.
//

#include <unity.h>

#include "libepd.h"
#include "board/arduino/uno/public.h"

void test_led_builtin_pin_number() {
    TEST_ASSERT_EQUAL(LED_BUILTIN, 13);
}

void test_led_state_high() {
    digitalWrite(LED_BUILTIN, HIGH);
    TEST_ASSERT_EQUAL(digitalRead(LED_BUILTIN), HIGH);
}

void test_led_state_low() {
    digitalWrite(LED_BUILTIN, LOW);
    TEST_ASSERT_EQUAL(digitalRead(LED_BUILTIN), LOW);
}

void setup() {
    UNITY_BEGIN();
    RUN_TEST(test_led_builtin_pin_number);

    pinMode(LED_BUILTIN, OUTPUT);
}

uint8_t i = 0;
uint8_t max_blinks = 5;

void loop() {
    if (i < max_blinks) {
        RUN_TEST(test_led_state_high);
        delay(500);
        RUN_TEST(test_led_state_low);
        delay(500);
        i++;
    } else if (i == max_blinks) {
        UNITY_END();
    }
}