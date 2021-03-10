#include "Task4/check_temperature.h"
#include "Task4/do_alarm.h"

const double threshold = 36.6;

int main() {
  checkTemperature(35.0, threshold, &doAlarm);
  checkTemperature(36.6, threshold, &doAlarm);
  checkTemperature(37.7, threshold, &doAlarm);
  return 0;    
}