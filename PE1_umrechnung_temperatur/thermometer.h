#include <stdio.h>
#include <stdlib.h>

#pragma once

int ascii_thermometer(float tempOut, _int32 unitOut)
{
	if (unitOut == 1)
	{
		//ASCII-Thermometer Celsius
		printf("\n----------------------------------------------------------------------------------------------------\n");

		for (int i = 0; i < tempOut; i++)
		{
			if (i > 99) {
				printf("+");
				i = tempOut;
			}
			else {
				printf("*");
			}

			if (i >= tempOut - 1) {
				printf("| %f%cC", tempOut, 248);
			}
		}
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("0%cC												100%cC\n", 248, 248);
	}
	else if (unitOut == 2)
	{
		//ASCII-Thermometer Fahrenheit
		printf("\n----------------------------------------------------------------------------------------------------\n");

		tempOut = tempOut / 2.13;

		for (int i = 0; i < tempOut; i++)
		{
			if (i > 99) {
				printf("+");
				i = tempOut * 2.13;
			}
			else {
				printf("*");
			}

			if (i >= tempOut - 1) {
				printf("| %f%cF", tempOut * 2.13, 248);
			}
		}
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("32%cF												212%cF\n", 248, 248);
	}
	else if (unitOut == 3)
	{
		//ASCII-Thermometer Fahrenheit
		printf("\n----------------------------------------------------------------------------------------------------\n");

		tempOut = tempOut / 3.75;

		for (int i = 0; i < tempOut; i++)
		{
			printf("*");
		}
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("255,37%cK												373,15%cK\n", 248, 248);
	}
	return 0;
}
