/*
 * pwm.c
 *
 *  Created on: Dec 27, 2021
 *      Author: liwka
 */

#include "pwm.h"

void pwm_change_duty(uint16_t duty)
{
	if(duty>1000) duty = 1000;
	htim2.Instance->CCR3 = duty;
}
