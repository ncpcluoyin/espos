#include <stdio.h>
#include "filesystem.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void app_main(void)
{
    xTaskCreatePinnedToCore();
}