#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include "GPIO.h"

void blink_led()
{
    bool s_led_state=0;
    while (1)
    {    
    /* Set the GPIO level according to the state (LOW or HIGH)*/
    gpio_set_level(BLINK_GPIO1, s_led_state);
    gpio_set_level(BLINK_GPIO2, s_led_state);
    gpio_set_level(BLINK_GPIO3, s_led_state);
    gpio_set_level(BLINK_GPIO4, s_led_state);
    gpio_set_level(BLINK_GPIO5, s_led_state);
    gpio_set_level(BLINK_GPIO6, s_led_state);
    gpio_set_level(BLINK_GPIO7, s_led_state);
    gpio_set_level(BLINK_GPIO8, s_led_state);
    gpio_set_level(BLINK_GPIO9, s_led_state);
    gpio_set_level(BLINK_GPIO10, s_led_state);
    gpio_set_level(BLINK_GPIO11, s_led_state);
    gpio_set_level(BLINK_GPIO12, s_led_state);
    gpio_set_level(BLINK_GPIO13, s_led_state);
    gpio_set_level(BLINK_GPIO14, s_led_state);
    gpio_set_level(BLINK_GPIO15, s_led_state);
    /* Toggle the LED state */
        s_led_state = !s_led_state;
        vTaskDelay(100);
    }
}

void configure_led(void)
{
    gpio_reset_pin(BLINK_GPIO1);
    gpio_reset_pin(BLINK_GPIO2);
    gpio_reset_pin(BLINK_GPIO3);
    gpio_reset_pin(BLINK_GPIO4);
    gpio_reset_pin(BLINK_GPIO5);
    gpio_reset_pin(BLINK_GPIO6);
    gpio_reset_pin(BLINK_GPIO7);
    gpio_reset_pin(BLINK_GPIO8);
    gpio_reset_pin(BLINK_GPIO9);
    gpio_reset_pin(BLINK_GPIO10);
    gpio_reset_pin(BLINK_GPIO11);
    gpio_reset_pin(BLINK_GPIO12);
    gpio_reset_pin(BLINK_GPIO13);
    gpio_reset_pin(BLINK_GPIO14);
    gpio_reset_pin(BLINK_GPIO15);
    
    gpio_set_direction(BLINK_GPIO1, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO2, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO3, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO4, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO5, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO6, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO7, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO8, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO9, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO10, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO11, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO12, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO13, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO14, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLINK_GPIO15, GPIO_MODE_OUTPUT);
}