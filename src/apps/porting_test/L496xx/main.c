#include "board.h"
#include "delay.h"
#include "gpio.h"
#include "rtc-board.h"
#include <stdio.h>

#define DELAY_DURATION_MS 1000
static TimerEvent_t Led1TimerEvent;
extern Gpio_t Led1;
Adc_t Adc;
void OnLed1TimerEvent();

int main(void) {
  // Target board initialization
  BoardInitMcu();
  BoardInitPeriph();
  printf("Porrting test\n");

  // init events
  TimerInit(&Led1TimerEvent, OnLed1TimerEvent);
  TimerSetValue(&Led1TimerEvent, DELAY_DURATION_MS);
  TimerStart(&Led1TimerEvent);

  // Blink LEDs just to show some activity
  while (1) {
  }
}

void OnLed1TimerEvent() {
  TimerStop(&Led1TimerEvent);
  GpioWrite(&Led1, 1);
  // expecting exact DELAY_DURATION_MS ms delay when HAL Delay and RTC work correctly
  printf("Rtc Time ms - %ld: ( delay duration %d ) \n",
         RtcTick2Ms(RtcGetTimerValue()), DELAY_DURATION_MS);
  GpioWrite(&Led1, 0);
  TimerStart(&Led1TimerEvent);
}
