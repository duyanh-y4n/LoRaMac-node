import os

#################################################################
# flags with value
#################################################################
server = "JLinkGDBServerCLExe"
interface = "swd"
#device = input('Device/MCU= ')
# device = "STM32L072CZ"
device = "STM32L496ZG"
# device = "STM32F767ZI"
# device = "STM32H743II"
endian = "little"
speed = "4000"
port = "2338"
swoport = "2339"
localhostonly = "1"
timeout = "0"
telnetport = "2340"
rtttelnetport = "19021"
rtos_plugin = "/opt/SEGGER/JLink/GDBServer/RTOSPlugin_FreeRTOS"
#################################################################
# other flags
#################################################################
other_flags_1 = "-vd -ir"
other_flags_2 = "-singlerun -strict"


options = dict(
        device= device,
        endian= endian,
        speed= speed,
        port= port,
        swoport= swoport,
        localhostonly= localhostonly,
        timeout= timeout,
        telnetport= telnetport,
        rtttelnetport= rtttelnetport,
        rtos_plugin= rtos_plugin
        )

command = server + ' -if' + ' ' + interface
for option in options:
    command = command + ' -' + option + ' ' + options[option]
    # print(command)

command = command + ' ' + other_flags_1 + ' ' + other_flags_2
print('running JLinkGDBServerCLExe')
print(command)

os.system(command)
