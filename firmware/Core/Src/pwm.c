/*
 * pwm.c
 *
 *  Created on: Dec 27, 2021
 *      Author: liwka
 */

#include "pwm.h"

void pwm_change_duty(uint16_t duty)
{
	htim1.Instance->CCR1 = duty;
}
