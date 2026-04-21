#include "nvs_settings_theme.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "esp_err.h"
#include "nvs_settings_helpers.h"

// Theme

esp_err_t nvs_settings_get_theme(theme_setting_t* out_theme) {
    return nvs_settings_get_u32("owner.theme", THEME_BLACK, (uint32_t*)out_theme);
}

esp_err_t nvs_settings_set_theme(theme_setting_t theme) {
    return nvs_settings_set_u32("owner.theme", (uint32_t)theme);
}
