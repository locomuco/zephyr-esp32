/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <misc/printk.h>

#define CONFIG_POSIX_FS

#include "esp_wifi.h"

#define CONFIG_ESP32_WIFI_STATIC_RX_BUFFER_NUM 10
#define CONFIG_ESP32_WIFI_DYNAMIC_RX_BUFFER_NUM 32
#define CONFIG_ESP32_WIFI_TX_BUFFER_TYPE 1

const wpa_crypto_funcs_t g_wifi_default_wpa_crypto_funcs = {
    .size = sizeof(wpa_crypto_funcs_t) };

wifi_osi_funcs_t g_wifi_osi_funcs = { 0 };

esp_err_t esp_event_send(system_event_t *event) {
	return ESP_OK;
}

/* copy paste from wifi_init.c */
esp_err_t esp_wifi_init(const wifi_init_config_t *config)
{
    //esp_event_set_default_wifi_handlers();
    return esp_wifi_init_internal(config);
}


void main(void)
{
	printk("Hello World! %s\n", CONFIG_ARCH);

	/* steps to be done: see esp-idf/examples/protocols/esp_http_client/main/app_wifi.c:57 */
	wifi_init_config_t config = WIFI_INIT_CONFIG_DEFAULT() ;
	esp_err_t ret = esp_wifi_init(&config);
	printk("ret = %x\n",ret);

}
