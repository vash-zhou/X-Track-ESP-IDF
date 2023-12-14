/*
 * SPDX-FileCopyrightText: 2022-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <dirent.h>
#include "bsp/esp-bsp.h"
#include "esp_log.h"

#include "HAL.h"
#include "App.h"

extern "C" void app_main(void)
{
    /* Initialize I2C (for touch and audio) */
    bsp_i2c_init();

    /* Initialize display and LVGL */
    bsp_display_start();

    /* Set display brightness to 100% */
    bsp_display_backlight_on();

    HAL::HAL_Init();

    App_Init();

    while (1)
    {
        HAL::HAL_Update();
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}
