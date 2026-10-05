#include "nvs_settings_helpers.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "esp_err.h"
#include "nvs.h"

const char* NVS_NAMESPACE = "system";

esp_err_t nvs_settings_get_u8(const char* key, uint8_t default_value, uint8_t* out_value) {
    if (key == NULL || out_value == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    nvs_handle_t nvs_handle;
    esp_err_t    res = nvs_open(NVS_NAMESPACE, NVS_READONLY, &nvs_handle);
    if (res != ESP_OK) {
        *out_value = default_value;
        return res;
    }
    uint8_t value;
    res = nvs_get_u8(nvs_handle, key, &value);
    if (res != ESP_OK) {
        *out_value = default_value;
        nvs_close(nvs_handle);
        return res;
    }
    nvs_close(nvs_handle);

    *out_value = value;
    return res;
}

esp_err_t nvs_settings_set_u8(const char* key, uint8_t value) {
    if (key == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    nvs_handle_t nvs_handle;
    esp_err_t    res = nvs_open(NVS_NAMESPACE, NVS_READWRITE, &nvs_handle);
    if (res != ESP_OK) {
        return res;
    }
    res = nvs_set_u8(nvs_handle, key, value);
    if (res != ESP_OK) {
        nvs_close(nvs_handle);
        return res;
    }
    nvs_close(nvs_handle);
    return res;
}

esp_err_t nvs_settings_get_u16(const char* key, uint16_t default_value, uint16_t* out_value) {
    if (key == NULL || out_value == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    nvs_handle_t nvs_handle;
    esp_err_t    res = nvs_open(NVS_NAMESPACE, NVS_READONLY, &nvs_handle);
    if (res != ESP_OK) {
        *out_value = default_value;
        return res;
    }
    uint16_t value;
    res = nvs_get_u16(nvs_handle, key, &value);
    if (res != ESP_OK) {
        *out_value = default_value;
        nvs_close(nvs_handle);
        return res;
    }
    nvs_close(nvs_handle);

    *out_value = value;
    return res;
}

esp_err_t nvs_settings_set_u16(const char* key, uint16_t value) {
    if (key == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    nvs_handle_t nvs_handle;
    esp_err_t    res = nvs_open(NVS_NAMESPACE, NVS_READWRITE, &nvs_handle);
    if (res != ESP_OK) {
        return res;
    }
    res = nvs_set_u16(nvs_handle, key, value);
    if (res != ESP_OK) {
        nvs_close(nvs_handle);
        return res;
    }
    nvs_close(nvs_handle);
    return res;
}

esp_err_t nvs_settings_get_u32(const char* key, uint32_t default_value, uint32_t* out_value) {
    if (key == NULL || out_value == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    nvs_handle_t nvs_handle;
    esp_err_t    res = nvs_open(NVS_NAMESPACE, NVS_READONLY, &nvs_handle);
    if (res != ESP_OK) {
        *out_value = default_value;
        return res;
    }
    uint32_t value;
    res = nvs_get_u32(nvs_handle, key, &value);
    if (res != ESP_OK) {
        *out_value = default_value;
        nvs_close(nvs_handle);
        return res;
    }
    nvs_close(nvs_handle);

    *out_value = value;
    return res;
}

esp_err_t nvs_settings_set_u32(const char* key, uint32_t value) {
    if (key == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    nvs_handle_t nvs_handle;
    esp_err_t    res = nvs_open(NVS_NAMESPACE, NVS_READWRITE, &nvs_handle);
    if (res != ESP_OK) {
        return res;
    }
    res = nvs_set_u32(nvs_handle, key, value);
    if (res != ESP_OK) {
        nvs_close(nvs_handle);
        return res;
    }
    nvs_close(nvs_handle);
    return res;
}

esp_err_t nvs_settings_get_i32(const char* key, int32_t default_value, int32_t* out_value) {
    if (key == NULL || out_value == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    nvs_handle_t nvs_handle;
    esp_err_t    res = nvs_open(NVS_NAMESPACE, NVS_READONLY, &nvs_handle);
    if (res != ESP_OK) {
        *out_value = default_value;
        return res;
    }
    int32_t value;
    res = nvs_get_i32(nvs_handle, key, &value);
    if (res != ESP_OK) {
        *out_value = default_value;
        nvs_close(nvs_handle);
        return res;
    }
    nvs_close(nvs_handle);

    *out_value = value;
    return res;
}

esp_err_t nvs_settings_set_i32(const char* key, int32_t value) {
    if (key == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    nvs_handle_t nvs_handle;
    esp_err_t    res = nvs_open(NVS_NAMESPACE, NVS_READWRITE, &nvs_handle);
    if (res != ESP_OK) {
        return res;
    }
    res = nvs_set_i32(nvs_handle, key, value);
    if (res != ESP_OK) {
        nvs_close(nvs_handle);
        return res;
    }
    nvs_close(nvs_handle);
    return res;
}

esp_err_t nvs_settings_get_bool(const char* key, bool default_value, bool* out_value) {
    if (out_value == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    uint8_t   value;
    esp_err_t res = nvs_settings_get_u8(key, default_value ? 1 : 0, &value);
    *out_value    = (value != 0);
    return res;
}

esp_err_t nvs_settings_set_bool(const char* key, bool value) {
    return nvs_settings_set_u8(key, value ? 1 : 0);
}

esp_err_t nvs_settings_get_percentage(const char* key, uint8_t default_value, uint8_t* out_percentage) {
    esp_err_t res = nvs_settings_get_u8(key, default_value, out_percentage);
    if (res != ESP_OK) {
        return res;
    }
    if (*out_percentage > 100) {
        *out_percentage = 100;
    }
    return res;
}

esp_err_t nvs_settings_set_percentage(const char* key, uint8_t percentage) {
    if (key == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    if (percentage > 100) {
        percentage = 100;
    }
    return nvs_settings_set_u8(key, percentage);
}

esp_err_t nvs_settings_get_string(const char* key, const char* default_value, char* out_value, size_t max_length) {
    // With no buffer and a length of 0, only check whether the key exists
    // (as nvs_settings_get_owner_nickname_configured() does).
    bool const exists_only = out_value == NULL && max_length == 0;
    if (key == NULL || (!exists_only && (out_value == NULL || max_length == 0))) {
        return ESP_ERR_INVALID_ARG;
    }
    nvs_handle_t nvs_handle;
    esp_err_t    res = nvs_open(NVS_NAMESPACE, NVS_READONLY, &nvs_handle);
    if (res != ESP_OK) {
        if (default_value != NULL && out_value != NULL) {
            strncpy(out_value, default_value, max_length - 1);
            out_value[max_length - 1] = '\0';
        }
        return res;
    }
    size_t size = 0;
    res         = nvs_get_str(nvs_handle, key, NULL, &size);
    if (exists_only) {
        nvs_close(nvs_handle);
        return res;
    }
    if (res != ESP_OK || size > max_length) {
        if (default_value != NULL) {
            strncpy(out_value, default_value, max_length - 1);
            out_value[max_length - 1] = '\0';
        }
        nvs_close(nvs_handle);
        return (res != ESP_OK) ? res : ESP_ERR_NO_MEM;
    }
    res = nvs_get_str(nvs_handle, key, out_value, &size);
    if (res != ESP_OK) {
        if (default_value != NULL) {
            strncpy(out_value, default_value, max_length - 1);
            out_value[max_length - 1] = '\0';
        }
    }
    nvs_close(nvs_handle);
    return res;
}

esp_err_t nvs_settings_set_string(const char* key, const char* value) {
    if (key == NULL || value == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    nvs_handle_t nvs_handle;
    esp_err_t    res = nvs_open(NVS_NAMESPACE, NVS_READWRITE, &nvs_handle);
    if (res != ESP_OK) {
        return res;
    }
    res = nvs_set_str(nvs_handle, key, value);
    if (res != ESP_OK) {
        nvs_close(nvs_handle);
        return res;
    }
    res = nvs_commit(nvs_handle);
    nvs_close(nvs_handle);
    return res;
}
