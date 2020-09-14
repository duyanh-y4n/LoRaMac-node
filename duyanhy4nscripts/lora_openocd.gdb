# openocd
#target extended-remote localhost:3333

# jlink
target extended-remote localhost:2338 

monitor reset 
monitor halt
#load build/src/apps/LoRaMac/LoRaMac-classA
#symbol-file build/src/apps/LoRaMac/LoRaMac-classA
load build/src/apps/porting_test/porting_test
symbol-file build/src/apps/porting_test/porting_test

break main

# custom
tui en
c
