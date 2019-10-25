#include <stdio.h>
#include <stdlib.h>

#pragma once

int ascii_thermometer(float tempOut, _int32 unitOut)
{
	if (unitOut == 1)
	{
		float differenz = 100 - 0;	//Differenz vom Nullpunkt und dem Siedepunkt
		float value_pro_zeichen = differenz / 100;	//weil wir eine 100 Zeichen Skala haben
		float tempOut_diff = tempOut - 0;	//Differenz vom Nullpunkt und von der Temperatur
		float new_temp = tempOut_diff / value_pro_zeichen;

		printf("\n%f Zeichen\n", new_temp);	//DEBUG
		
		//ASCII-Thermometer Celsius
		printf("\n----------------------------------------------------------------------------------------------------\n");

		for (int i = 0; i < new_temp; i++)
		{
			if (i > 99) {
				printf("+");
				i = new_temp;
			}
			else {
				printf("*");
			}

			if (i >= new_temp - 1) {
				printf("| %f%cC", new_temp, 248);
			}
		}
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("0%cC												100%cC\n", 248, 248);
	}
	else if (unitOut == 2)
	{
		float differenz = 212 - 32;	//Differenz vom Nullpunkt und dem Siedepunkt
		float value_pro_zeichen = differenz / 100;	//weil wir eine 100 Zeichen Skala haben
		float tempOut_diff = tempOut - 32;	//Differenz vom Nullpunkt und von der Temperatur
		float new_temp = tempOut_diff / value_pro_zeichen;

		printf("\n%f Zeichen\n", new_temp);	//DEBUG

		//ASCII-Thermometer Fahrenheit
		printf("\n----------------------------------------------------------------------------------------------------\n");
		for (int i = 0; i < new_temp; i++)
		{
			if (i > 99) {
				printf("+");
				i = new_temp;
			}
			else {
				printf("*");
			}

			if (i >= new_temp - 1) {
				printf("| %f%cF", tempOut, 248);
			}
		}
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("32%cF												212%cF\n", 248, 248);
	}
	else if (unitOut == 3)
	{
		float differenz = 373.15 - 255.37;	//Differenz vom Nullpunkt und dem Siedepunkt
		float value_pro_zeichen = differenz / 100;	//weil wir eine 100 Zeichen Skala haben
		float tempOut_diff = tempOut - 255.37;	//Differenz vom Nullpunkt und von der Temperatur
		float new_temp = tempOut_diff / value_pro_zeichen;

		printf("\n%f Zeichen\n", new_temp);	//DEBUG

		//ASCII-Thermometer Kelvin
		printf("\n----------------------------------------------------------------------------------------------------\n");

		for (int i = 0; i < new_temp; i++)
		{
			if (i > 99) {
				printf("+");
				i = new_temp;
			}
			else {
				printf("*");
			}

			if (i >= new_temp - 1) {
				printf("| %f%cK", tempOut, 248);
			}
		}
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("255,37%cK												373,15%cK\n", 248, 248);
	}
	else if (unitOut == 4)
	{
		float differenz = 60 - 0;	//Differenz vom Nullpunkt und dem Siedepunkt
		float value_pro_zeichen = differenz / 100;	//weil wir eine 100 Zeichen Skala haben
		float tempOut_diff = tempOut - 0;	//Differenz vom Nullpunkt und von der Temperatur
		float new_temp = tempOut_diff / value_pro_zeichen;

		printf("\n%f Zeichen\n", new_temp);	//DEBUG

		//ASCII-Thermometer Kelvin
		printf("\n----------------------------------------------------------------------------------------------------\n");

		for (int i = 0; i < new_temp; i++)
		{
			if (i > 99) {
				printf("+");
				i = new_temp;
			}
			else {
				printf("*");
			}

			if (i >= new_temp - 1) {
				printf("| %f%cK", tempOut, 248);
			}
		}
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("0%cRo												60%cRo\n", 248, 248);
	}
	return 0;
}
