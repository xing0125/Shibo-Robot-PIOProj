#ifndef _MAIN_H
#define _MAIN_H

// 机器人控制头文件
#include <MPU6050_tockn.h>
#include "Servo_STS3032.h"
#include <SimpleFOC.h>
#include <Arduino.h>

// wifi控制数据传输头文件
#include <WebSocketsServer.h>
#include <ArduinoJson.h>
#include <WebServer.h>
#include <WiFi.h>
#include <FS.h>
#include "basic_web.h"
#include "robot.h"
#include "wifi_config.h"
#include "esp_adc_cal.h"

void basicWebCallback(void);
void webSocketEventCallback(uint8_t num, WStype_t type, uint8_t *payload, size_t length);
void adc_calibration_init();
void bat_check();
void web_loop();
void lqr_balance_loop();
void yaw_loop();
void leg_loop();
void jump_loop();
void yaw_angle_addup();

#endif
