#include "nvs_settings_meshcore.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "esp_err.h"
#include "nvs_settings_helpers.h"

// Meshcore settings

esp_err_t nvs_settings_get_meshcore_name(char* out_value, size_t max_length) {
    return nvs_settings_get_string("mc.name", "Tanmatsu", out_value, max_length);
}

esp_err_t nvs_settings_set_meshcore_name(const char* value) {
    return nvs_settings_set_string("mc.name", value);
}

esp_err_t nvs_settings_get_meshcore_private_key(char* out_value, size_t max_length) {
    return nvs_settings_get_string("mc.private_key", "", out_value, max_length);
}

esp_err_t nvs_settings_set_meshcore_private_key(const char* value) {
    return nvs_settings_set_string("mc.private_key", value);
}

esp_err_t nvs_settings_get_meshcore_public_key(char* out_value, size_t max_length) {
    return nvs_settings_get_string("mc.public_key", "", out_value, max_length);
}

esp_err_t nvs_settings_set_meshcore_public_key(const char* value) {
    return nvs_settings_set_string("mc.public_key", value);
}
