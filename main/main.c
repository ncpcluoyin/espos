#include <stdio.h>
#include "filesystem.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void watchdog()
{
    for(;;){printf("hello\n");}
}

void sys_main()
{
    for(;;){printf("world\n");}
}

void app_main(void)
{
    xTaskCreatePinnedToCore(sys_main,"SystemMainThread",8192,NULL,1,NULL,1);
    xTaskCreatePinnedToCore(watchdog,"SystemWatchDog",4096,NULL,1,NULL,0);
    for(;;){printf("!!!\n");}
}
