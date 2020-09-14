/*!
 * \file      rtc-board.c
 *
 * \brief     Target board RTC timer and low power modes management
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
 *                ______                              _
 *               / _____)             _              | |
 *              ( (____  _____ ____ _| |_ _____  ____| |__
 *               \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 *               _____) ) ____| | | || |_| ____( (___| | | |
 *              (______/|_____)_|_|_| \__)_____)\____)_| |_|
 *              (C)2013-2017 Semtech - STMicroelectronics
 *
 * \endcode
 *
 * \author    Miguel Luis ( Semtech )
 *
 * \author    Gregory Cristian ( Semtech )
 *
 * \author    MCD Application Team (C)( STMicroelectronics International )
 */
#include <math.h>
#include <time.h>
#include "stm32l4xx.h"
#include "utilities.h"
#include "delay.h"
#include "board.h"
#include "timer.h"
#include "systime.h"
#include "gpio.h"
#include "lpm-board.h"
#include "rtc-board.h"

/*!
 * \brief Initializes the RTC timer
 *
 * \remark The timer is based on the RTC
 */
void RtcInit( void ){}

/*!
 * \brief Returns the minimum timeout value
 *
 * \retval minTimeout Minimum timeout value in in ticks
 */
uint32_t RtcGetMinimumTimeout( void ){
    return 0xffff;
}

/*!
 * \brief converts time in ms to time in ticks
 *
 * \param[IN] milliseconds Time in milliseconds
 * \retval returns time in timer ticks
 */
uint32_t RtcMs2Tick( TimerTime_t milliseconds ){
    return 0xffff;
}

/*!
 * \brief converts time in ticks to time in ms
 *
 * \param[IN] time in timer ticks
 * \retval returns time in milliseconds
 */
TimerTime_t RtcTick2Ms( uint32_t tick ){}

/*!
 * \brief Performs a delay of milliseconds by polling RTC
 *
 * \param[IN] milliseconds Delay in ms
 */
void RtcDelayMs( TimerTime_t milliseconds ){}

/*!
 * \brief Calculates the wake up time between wake up and MCU start
 *
 * \note Resolution in RTC_ALARM_TIME_BASE
 */
void RtcSetMcuWakeUpTime( void ){}

/*!
 * \brief Returns the wake up time in ticks
 *
 * \retval wakeUpTime The WakeUpTime value in ticks
 */
int16_t RtcGetMcuWakeUpTime( void ){}

/*!
 * \brief Sets the alarm
 *
 * \note The alarm is set at now (read in this funtion) + timeout
 *
 * \param timeout [IN] Duration of the Timer ticks
 */
void RtcSetAlarm( uint32_t timeout ){}

/*!
 * \brief Stops the Alarm
 */
void RtcStopAlarm( void ){}

/*!
 * \brief Starts wake up alarm
 *
 * \note  Alarm in RtcTimerContext.Time + timeout
 *
 * \param [IN] timeout Timeout value in ticks
 */
void RtcStartAlarm( uint32_t timeout ){}

/*!
 * \brief Sets the RTC timer reference
 *
 * \retval value Timer reference value in ticks
 */
uint32_t RtcSetTimerContext( void ){
    return 0xffff;
}
  
/*!
 * \brief Gets the RTC timer reference
 *
 * \retval value Timer value in ticks
 */
uint32_t RtcGetTimerContext( void ){
    return 0xffff;
}

/*!
 * \brief Gets the system time with the number of seconds elapsed since epoch
 *
 * \param [OUT] milliseconds Number of milliseconds elapsed since epoch
 * \retval seconds Number of seconds elapsed since epoch
 */
uint32_t RtcGetCalendarTime( uint16_t *milliseconds ){
    return 0xffff;
}

/*!
 * \brief Get the RTC timer value
 *
 * \retval RTC Timer value
 */
uint32_t RtcGetTimerValue( void ){
    return 0xffff;
}

/*!
 * \brief Get the RTC timer elapsed time since the last Alarm was set
 *
 * \retval RTC Elapsed time since the last alarm in ticks.
 */
uint32_t RtcGetTimerElapsedTime( void ){
    return 0xffff;
}

/*!
 * \brief Writes data0 and data1 to the RTC backup registers
 *
 * \param [IN] data0 1st Data to be written
 * \param [IN] data1 2nd Data to be written
 */
void RtcBkupWrite( uint32_t data0, uint32_t data1 ){}

/*!
 * \brief Reads data0 and data1 from the RTC backup registers
 *
 * \param [OUT] data0 1st Data to be read
 * \param [OUT] data1 2nd Data to be read
 */
void RtcBkupRead( uint32_t* data0, uint32_t* data1 ){}

/*!
 * \brief Processes pending timer events
 */
void RtcProcess( void ){}

/*!
 * \brief Computes the temperature compensation for a period of time on a
 *        specific temperature.
 *
 * \param [IN] period Time period to compensate in milliseconds
 * \param [IN] temperature Current temperature
 *
 * \retval Compensated time period
 */
TimerTime_t RtcTempCompensation( TimerTime_t period, float temperature ){}
