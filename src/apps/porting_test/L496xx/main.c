#include "board.h"
#include "delay.h"
#include "gpio.h"
#include "rtc-board.h"
#include <stdio.h>

#if defined(SX1276MB1LAS) || defined(SX1276MB1MAS)
#include "sx1276.h"
void checkRadioSPI() {
  if (SX1276Read(0x42) == 0x00)
    printf("Radio SPI failed\n");
  else
    printf("Radio SPI ok\n");
}
#else
void checkRadioSPI() {}
#endif

#define DELAY_DURATION_MS 1000
static TimerEvent_t Led1TimerEvent;
extern Gpio_t Led1;
void OnLed1TimerEvent();

int main(void) {
  // Target board initialization
  BoardInitMcu();
  BoardInitPeriph();
  printf("Porting test\n");

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
  // expecting exact DELAY_DURATION_MS ms delay when HAL Delay and RTC work
  // correctly
  printf("Rtc Time ms - %ld: ( delay duration %d ) \n",
         RtcTick2Ms(RtcGetTimerValue()), DELAY_DURATION_MS);
  GpioWrite(&Led1, 0);
  TimerStart(&Led1TimerEvent);
  checkRadioSPI();
}
