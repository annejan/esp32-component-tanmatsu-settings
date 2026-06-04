#include "nvs_settings_firmware.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "esp_err.h"
#include "nvs_settings_helpers.h"

esp_err_t nvs_settings_get_firmware_patch_level(uint8_t* out_level) {
    return nvs_settings_get_u8("fw.patch", 0, out_level);
}

esp_err_t nvs_settings_set_firmware_patch_level(uint8_t level) {
    return nvs_settings_set_u8("fw.patch", level);
}

esp_err_t nvs_settings_get_welcome_message_state(uint8_t* out_level) {
    return nvs_settings_get_u8("fw.welcome", 0, out_level);
}

esp_err_t nvs_settings_set_welcome_message_state(uint8_t level) {
    return nvs_settings_set_u8("fw.welcome", level);
}
