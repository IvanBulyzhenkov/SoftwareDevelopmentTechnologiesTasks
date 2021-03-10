#include "gtest/gtest.h"

extern "C" {
#include "Task4/check_temperature.h"
}

int greater_flag = 0;
int lower_flag = 0;

void doAlarmTrue() {
  greater_flag = 1;
  SUCCEED();
}

void doAlarmFalse() {
  lower_flag = 1;
  FAIL();
}

TEST(check_temperature, greater_then_threshold) {
  checkTemperature(37.0, 36.6, &doAlarmTrue);
  EXPECT_EQ(greater_flag, 1);
}

TEST(check_temperature, lower_then_threshold) {
  checkTemperature(36.0, 36.6, &doAlarmFalse);
  EXPECT_EQ(lower_flag, 0);
}