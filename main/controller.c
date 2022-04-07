#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"
#include "nvs_flash.h"
#include "esp_mac.h"
#include "esp_log.h"
#include "esp_netif.h"
#include "esp_wifi.h"
#include "esp_now.h"
#include "dust_collector.h"

//static const char *TAG = "DustController";

void dust_app_main(void)
{

}

void dust_espnow_send_cb(const uint8_t *mac_addr, esp_now_send_status_t status)
{

}

void dust_espnow_recv_cb(const uint8_t *mac_addr, const uint8_t *data, int len)
{

}