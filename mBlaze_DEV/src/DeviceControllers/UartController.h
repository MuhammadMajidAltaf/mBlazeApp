/*
 * UartController.h
 *
 *  Created on: 19 Haz 2016
 *      Author: KaaN
 */

#ifndef UARTCONTROLLER_H_
#define UARTCONTROLLER_H_
#include <xuartlite.h>
#include <xuartlite_l.h>
#include "../Utilities/Util.h"
#include "string.h"
#define MAX_BUFFER_SIZE 16
u8 SendBuffer[MAX_BUFFER_SIZE];    /* Buffer for Transmitting Data */
u8 RecvBuffer[MAX_BUFFER_SIZE];    /* Buffer for Receiving Data */
u16 constructUartController(XUartLite* uartPtr, u16 uartDeviceId);
u16 sendString(u8* data, XUartLite* uartPtr);
void printUartLiteProperties(XUartLite* uartPtr) ;
#endif /* UARTCONTROLLER_H_ */
