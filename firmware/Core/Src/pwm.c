/*
 * pwm.c
 *
 *  Created on: Dec 27, 2021
 *      Author: liwka
 */

#include "pwm.h"

void pwm_change_duty(uint8_t duty_percentage)
{
	htim2.Instance->CCR3 = duty_percentage;
}
