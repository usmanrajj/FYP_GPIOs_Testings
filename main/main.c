#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include "ssd1306.h"
#include "font8x8_basic.h"

#include "lwip/err.h"
#include "lwip/sys.h"
#include "wifi.c"
#include "wifi.h"
#include "GPIO.c"
#include "GPIO.h"
#include "lcd.c"

void app_main(void)
{
    //Initialize NVS
    nvs_flash_init();

    wifi_init_sta();

    configure_led();

    xTaskCreate(blink_led, "blink led", 1024 ,NULL, 1, NULL);
    //xTaskCreate(display, "display",1024, NULL,2,NULL);
    display();
}
