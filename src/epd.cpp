//
// Created by xforce on 29-02-20.
//

#include "epd.h"

#include "command.h"
#include "io.h"
#include "spi.h"
#include "type.h"

NAMESPACE_BEGIN(LibEpd, Common)

void Epd::reset() {
    IO::write(pin_layout->reset_pin, DIGITAL_LOW);
    IO::delay(200);
    IO::write(pin_layout->reset_pin, DIGITAL_HIGH);
    IO::delay(200);
}

bool Epd::init() {
    if (!SPI::init()) {
        return false;
    }

    reset();

    // This sequence is copied from Waveshare's epd2in9b.cpp
    // It may be different on other models.
    send_command(BOOSTER_SOFT_START);
    send_data(0x17);
    send_data(0x17);
    send_data(0x17);
    send_command(POWER_ON);
    await_busy();
    send_command(PANEL_SETTING);
    send_data(0x8F);
    send_command(VCOM_AND_DATA_INTERVAL_SETTING);
    send_data(0x77);
    send_command(TCON_RESOLUTION);
    send_data(0x80);
    send_data(0x01);
    send_data(0x28);
    send_command(VCM_DC_SETTING_REGISTER);
    send_data(0X0A);
    return true;
}

void Epd::send_command(BYTE command) {
    IO::write(pin_layout->dc_pin, DIGITAL_LOW);
    SPI::write(command);
}

void Epd::send_data(BYTE data) {
    IO::write(pin_layout->dc_pin, DIGITAL_HIGH);
    SPI::write(data);
}

void Epd::await_busy() {
    while(!IO::read(pin_layout->busy_pin)) {
        IO::delay(AWAIT_BUSY_TIMEOUT);
    }
}

void Epd::stop() {
    send_command(DEEP_SLEEP);
    send_data(0xa5);
}

NAMESPACE_END(LibEpd, Common)