#include <Arduino.h>

#include "config.h"
#include "motor.h"
#include "can_comm.h"

void setup() {
    Serial.begin(115200);

    // CAN 초기화
    if (!can_init()) {
        Serial.println("CAN init failed");
        return;
    }

    Serial.println("CAN ready");

    delay(2000);

    // 각 모터에 속도 명령 전송
    bool motor1_ok = motor_set_speed(MOTOR1_CAN_ID, TEST_RPM);
    Serial.println(motor1_ok
        ? "Motor 01 command sent"
        : "Motor 01 send failed");

    bool motor2_ok = motor_set_speed(MOTOR2_CAN_ID, TEST_RPM);
    Serial.println(motor2_ok
        ? "Motor 02 command sent"
        : "Motor 02 send failed");
}

void loop() {
}
