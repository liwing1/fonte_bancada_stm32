/*
 * debug.c
 *
 *  Created on: Dec 27, 2021
 *      Author: liwka
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
#include "debug.h"


#define DBG_BUFFER_SIZE	1024


int dbg_printf (const char *format, ...) {
  va_list args;
  int done;
  char* message;

  va_start (args, format);
  message = malloc(sizeof(char) * DBG_BUFFER_SIZE);

  done = vsnprintf (message, DBG_BUFFER_SIZE-1, format, args);

  HAL_UART_Transmit(&huart1, (uint8_t*)message, strlen(message), 500);


  free(message);
  va_end (args);

  return done;
}
