#include <stdio.h>
#include "filesystem.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void watchdog()
{
}

void sys_main()
{
}

void app_main(void)
{
    xTaskCreatePinnedToCore(sys_main,"SystemMainThread",8192,NULL,1,NULL,1);
    xTaskCreatePinnedToCore(watchdog,"SystemWatchDog",8192,NULL,1,NULL,0);
}
