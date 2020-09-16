#include <stdio.h>
#include "board.h"
#include "delay.h"
#include "gpio.h"

int main(void) {
  // Target board initialization
  BoardInitMcu();
  BoardInitPeriph();
  printf("Porrting test\n");

  // Blink LEDs just to show some activity
  while (1) {
    DelayMs(1000);
    printf("delay\n");
  }
}
