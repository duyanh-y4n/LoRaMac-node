# copy from build/src/apps/LoRaMac/openocd-run.gdb 
file build/src/apps/LoRaMac/LoRaMac-classA
target extended-remote localhost:3333
monitor reset halt
load
thbreak main

# custom
tui en
c
