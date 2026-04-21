#include "nvs_settings_hardware.h"
#include <stdint.h>
#include "esp_err.h"
#include "nvs_settings_helpers.h"

// Hardware settings

esp_err_t nvs_settings_get_display_brightness(uint8_t* out_percentage, uint8_t default_value) {
    return nvs_settings_get_percentage("disp.brightness", default_value, out_percentage);
}

esp_err_t nvs_settings_set_display_brightness(uint8_t percentage) {
    return nvs_settings_set_percentage("disp.brightness", percentage);
}

esp_err_t nvs_settings_get_keyboard_brightness(uint8_t* out_percentage, uint8_t default_value) {
    return nvs_settings_get_percentage("kb.brightness", default_value, out_percentage);
}

esp_err_t nvs_settings_set_keyboard_brightness(uint8_t percentage) {
    return nvs_settings_set_percentage("kb.brightness", percentage);
}

esp_err_t nvs_settings_get_led_brightness(uint8_t* out_percentage, uint8_t default_value) {
    return nvs_settings_get_percentage("led.brightness", default_value, out_percentage);
}

esp_err_t nvs_settings_set_led_brightness(uint8_t percentage) {
    return nvs_settings_set_percentage("led.brightness", percentage);
}

esp_err_t nvs_settings_get_speaker_volume(uint8_t* out_percentage, uint8_t default_value) {
    return nvs_settings_get_percentage("speaker.volume", default_value, out_percentage);
}

esp_err_t nvs_settings_set_speaker_volume(uint8_t percentage) {
    return nvs_settings_set_percentage("speaker.volume", percentage);
}

esp_err_t nvs_settings_get_headphone_volume(uint8_t* out_percentage, uint8_t default_value) {
    return nvs_settings_get_percentage("hp.volume", default_value, out_percentage);
}

esp_err_t nvs_settings_set_headphone_volume(uint8_t percentage) {
    return nvs_settings_set_percentage("hp.volume", percentage);
}
