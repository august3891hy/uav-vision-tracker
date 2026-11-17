#pragma once
#include <stdint.h>

bool motor_set_speed(uint16_t can_id, int rpm);
bool motor_stop(uint16_t can_id);
