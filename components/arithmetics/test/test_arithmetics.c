/* test_mean.c: Implementation of a testable component.

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <limits.h>
#include "unity.h"
#include "arithmetics.h"

TEST_CASE("Arithmetic tests", "[arithmetics]")
{
    TEST_ASSERT_EQUAL(9, arithmetics_add_four(5));
    TEST_ASSERT_EQUAL(4, arithmetics_add_four(0));
}
