/* test_mean.c: Implementation of a testable component.

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <limits.h>
#include "unity.h"
#include "swap.h"

TEST_CASE("swap tests", "[swap]")
{
    int a = 2;
    int b = 4;
    swap(&a, &b);

    TEST_ASSERT_EQUAL(4, a);
    TEST_ASSERT_EQUAL(2, b);
}
