/* Example application which uses testable component.

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <stdio.h>
#include "esp_system.h"
#include "esp_log.h"
#include "arithmetics.h"
#include "swap.h"
#include "module_in_main/include/return_six.h"

/* This application has a test subproject in 'test' directory, all the
 * interesting things happen there. See ../test/main/example_idf_test_runner_test.c
 * and the makefiles in ../test/ directory.
 *
 * This specific app_main function is provided only to illustrate the layout
 * of a project.
 */

void app_main(void)
{
    int result = arithmetics_add_four(1);
    ESP_LOGI("main", "arithmetics_add_four(1) = %d", result);

    int a = 6;
    int b = 1;
    ESP_LOGI("main", "BEFORE a:%d, b:%d", a, b);
    swap(&a, &b);
    ESP_LOGI("main", "AFTER  a:%d, b:%d", a, b);

    int six = return_six();
    ESP_LOGI("main", "return_six() = %d", six);
}
