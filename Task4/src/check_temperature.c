#include "Task4/check_temperature.h"

void checkTemperature(double temp, const double threshold, void (*operation)()) {
  if (temp > threshold) {
    operation();
  }
}