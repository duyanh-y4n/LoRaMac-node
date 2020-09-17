/*!
 * \file      board-config.h
 *
 * \brief     Board configuration
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
 *              (C)2013-2017 Semtech
 *
 *               ___ _____ _   ___ _  _____ ___  ___  ___ ___
 *              / __|_   _/_\ / __| |/ / __/ _ \| _ \/ __| __|
 *              \__ \ | |/ _ \ (__| ' <| _| (_) |   / (__| _|
 *              |___/ |_/_/ \_\___|_|\_\_| \___/|_|_\\___|___|
 *              embedded.connectivity.solutions===============
 *
 * \endcode
 *
 * \author    Miguel Luis ( Semtech )
 *
 * \author    Gregory Cristian ( Semtech )
 *
 * \author    Daniel Jaeckle ( STACKFORCE )
 *
 * \author    Johannes Bruder ( STACKFORCE )
 */
#ifndef __BOARD_CONFIG_H__
#define __BOARD_CONFIG_H__

#ifdef __cplusplus
extern "C"
{
#endif

/*!
 * Defines the time required for the TCXO to wakeup [ms].
 */
#if defined( SX1262MBXDAS )
#define BOARD_TCXO_WAKEUP_TIME                      5
#else
#define BOARD_TCXO_WAKEUP_TIME                      0
#endif

/*!
 * Board MCU pins definitions
 */
#define RADIO_RESET                                 PA_0

#define RADIO_MOSI                                  PA_7
#define RADIO_MISO                                  PA_6
#define RADIO_SCLK                                  PA_5
#define RADIO_NSS                                   PA_4

#define RADIO_DIO_0                                 PB_2
#define RADIO_DIO_1                                 PB_10
#define RADIO_DIO_2                                 PB_11
#define RADIO_DIO_3                                 PB_0
#define RADIO_DIO_4                                 PB_1
#define RADIO_DIO_5                                 PC_4

#define RADIO_ANT_SWITCH                            NC

// GPIO
#ifndef NUCLEO144
#define GPIO_0                                      PC_6
#define GPIO_2                                      PC_8
#else
#define GPIO_0                                      PC_7
#define GPIO_2                                      PB_14
#endif
#define EN_LORA                                     PA_8

#define LED_1                                       GPIO_0
#define LED_2                                       GPIO_0
#define LED_3                                       NC
#define LED_4                                       GPIO_2

// Debug pins definition.
#define RADIO_DBG_PIN_TX                            NC
#define RADIO_DBG_PIN_RX                            NC

#define OSC_LSE_IN                                  PC_14
#define OSC_LSE_OUT                                 PC_15

#define OSC_HSE_IN                                  PH_0
#define OSC_HSE_OUT                                 PH_1

#define SWCLK                                       PA_14
#define SWDAT                                       PA_13

#define I2C3_SCL                                     PC_0
#define I2C3_SDA                                     PC_1

#define I2C1_SCL                                     PB_8
#define I2C1_SDA                                     PB_9

#define I2C_SCL                                     I2C1_SCL
#define I2C_SDA                                     I2C1_SDA

#define UART2_TX                                     PA_2
#define UART2_RX                                     PA_3

#define UART4_TX                                     PC_10
#define UART4_RX                                     PC_11

#define UART_TX                                     UART2_TX
#define UART_RX                                     UART2_RX

#ifdef __cplusplus
}
#endif

#endif // __BOARD_CONFIG_H__
