#include "nvs_settings_lora.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "esp_err.h"
#include "nvs_settings_helpers.h"

esp_err_t nvs_settings_get_lora_frequency(uint32_t* out_value, uint32_t default_value) {
    return nvs_settings_get_u32("lora.freq", default_value, out_value);
}

esp_err_t nvs_settings_set_lora_frequency(uint32_t frequency) {
    return nvs_settings_set_u32("lora.freq", frequency);
}

esp_err_t nvs_settings_get_lora_spreading_factor(uint8_t* out_sf) {
    return nvs_settings_get_u8("lora.sf", 8, out_sf);
}

esp_err_t nvs_settings_set_lora_spreading_factor(uint8_t sf) {
    return nvs_settings_set_u8("lora.sf", sf);
}

esp_err_t nvs_settings_get_lora_bandwidth(uint16_t* out_bandwidth) {
    return nvs_settings_get_u16("lora.bandwidth", 62, out_bandwidth);
}

esp_err_t nvs_settings_set_lora_bandwidth(uint16_t bandwidth) {
    return nvs_settings_set_u16("lora.bandwidth", bandwidth);
}

esp_err_t nvs_settings_get_lora_coding_rate(uint8_t* out_coding_rate) {
    return nvs_settings_get_u8("lora.codingrate", 8, out_coding_rate);
}

esp_err_t nvs_settings_set_lora_coding_rate(uint8_t coding_rate) {
    return nvs_settings_set_u8("lora.codingrate", coding_rate);
}

esp_err_t nvs_settings_get_lora_power(uint8_t* out_power) {
    return nvs_settings_get_u8("lora.power", 22, out_power);
}

esp_err_t nvs_settings_set_lora_power(uint8_t power) {
    return nvs_settings_set_u8("lora.power", power);
}

bool nvs_settings_get_lora_configured(void) {
    uint32_t  temporary;
    esp_err_t res = nvs_settings_get_u32("lora.freq", 0, &temporary);
    return (res == ESP_OK);
}
