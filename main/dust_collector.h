#include "esp_now.h"

#define DUST_CONTROLLER_MAC { 0xC8, 0xC9, 0xA3, 0xC5, 0xFA, 0x98 }

void dust_app_main(void);
void dust_espnow_send_cb(const uint8_t *mac_addr, esp_now_send_status_t status);
void dust_espnow_recv_cb(const uint8_t *mac_addr, const uint8_t *data, int len);