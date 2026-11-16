#pragma once
#include <stdint.h>

bool can_init();
bool can_send(uint16_t id, uint8_t* data, uint8_t len);
