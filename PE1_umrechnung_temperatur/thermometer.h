#include <stdio.h>
#include <stdlib.h>

#pragma once

int ascii_thermometer(float tempOut, _int32 unitOut)
{
	if (unitOut == 1)
	{
		//ASCII-Thermometer
		printf("\n----------------------------------------------------------------------------------------------------\n");

		for (int i = 0; i < tempOut; i++)
		{
			printf("*");
		}
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("0%cC												100%cC\n", 248, 248);
	}
	return 0;
}
