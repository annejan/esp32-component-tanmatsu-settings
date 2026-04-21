#include "nvs_settings_owner.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "esp_err.h"
#include "nvs_settings_helpers.h"

esp_err_t nvs_settings_get_owner_nickname(char* out_value, size_t max_length, const char* default_value) {
    return nvs_settings_get_string("owner.nickname", default_value, out_value, max_length);
}

esp_err_t nvs_settings_set_owner_nickname(const char* value) {
    return nvs_settings_set_string("owner.nickname", value);
}

bool nvs_settings_get_owner_nickname_configured(void) {
    esp_err_t res = nvs_settings_get_string("owner.nickname", NULL, NULL, 0);
    return (res == ESP_OK);
}

esp_err_t nvs_settings_get_owner_birthday_day(uint8_t* out_day, uint8_t default_value) {
    return nvs_settings_get_u8("owner.bday.day", default_value, out_day);
}

esp_err_t nvs_settings_set_owner_birthday_day(uint8_t day) {
    return nvs_settings_set_u8("owner.bday.day", day);
}

esp_err_t nvs_settings_get_owner_birthday_month(uint8_t* out_month, uint8_t default_value) {
    return nvs_settings_get_u8("owner.bday.mon", default_value, out_month);
}

esp_err_t nvs_settings_set_owner_birthday_month(uint8_t month) {
    return nvs_settings_set_u8("owner.bday.mon", month);
}

bool nvs_settings_get_owner_birthday_configured(void) {
    uint8_t   temporary;
    esp_err_t res1 = nvs_settings_get_u8("owner.bday.day", 0, &temporary);
    esp_err_t res2 = nvs_settings_get_u8("owner.bday.mon", 0, &temporary);
    return (res1 == ESP_OK) && (res2 == ESP_OK);
}
