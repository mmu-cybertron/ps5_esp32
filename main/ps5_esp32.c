#include <stdio.h>
#include "ps5.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_task_wdt.h"
#include "esp_rom_sys.h"
#include "esp_timer.h"
#include "driver/gpio.h"
#include <inttypes.h>
#include <math.h>

uint32_t state = 0;

void cb (ps5_t ps5, ps5_event_t event) {

    // ESP_LOGI("PS5", "Is this loop working?");

    // Serial printing should not be used in this loop as it will 
    // degreade the performance of the loop
    // Avoid expensive functions in this loop
    ESP_LOGI("PS5", "Button down: %d", ps5.analog.stick.lx);

    if (event.button_down.down == 1) {
        state = !state;
        gpio_set_level(GPIO_NUM_2, state);
        // ESP_LOGI("PS5", "Down button pressed");  
    }
}

void app_main(void)
{   
    gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);

    ps5Init(); 

    ESP_LOGI("PS5", "Waiting for PS5 controller to connect...");
    while (!ps5IsConnected()) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    ESP_LOGI("PS5", "PS5 controller connected!");
    
    ps5Enable();
    ps5SetEventCallback(cb);
    while(1){
        vTaskDelay(pdMS_TO_TICKS(1000));
    }


}
