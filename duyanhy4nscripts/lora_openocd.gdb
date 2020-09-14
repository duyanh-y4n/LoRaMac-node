# copy from build/src/apps/LoRaMac/openocd-run.gdb 
file build/src/apps/LoRaMac/LoRaMac-classA

# openocd
#target extended-remote localhost:3333

# jlink
target extended-remote localhost:2338 
monitor reset halt
load
thbreak main

# custom
tui en
c
