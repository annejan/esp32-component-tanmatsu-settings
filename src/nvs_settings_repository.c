#include "nvs_settings_repository.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "esp_err.h"
#include "nvs_settings_helpers.h"

esp_err_t nvs_settings_get_repo_server(char* out_value, size_t max_length, const char* default_value) {
    return nvs_settings_get_string("repo.server", default_value, out_value, max_length);
}

esp_err_t nvs_settings_set_repo_server(const char* value) {
    return nvs_settings_set_string("repo.server", value);
}

esp_err_t nvs_settings_get_repo_base_uri(char* out_value, size_t max_length, const char* default_value) {
    return nvs_settings_get_string("repo.baseuri", default_value, out_value, max_length);
}

esp_err_t nvs_settings_set_repo_base_uri(const char* value) {
    return nvs_settings_set_string("repo.baseuri", value);
}

esp_err_t nvs_settings_get_http_user_agent(char* out_value, size_t max_length, const char* default_value) {
    return nvs_settings_get_string("http.ua", default_value, out_value, max_length);
}

esp_err_t nvs_settings_set_http_user_agent(const char* value) {
    return nvs_settings_set_string("http.ua", value);
}
