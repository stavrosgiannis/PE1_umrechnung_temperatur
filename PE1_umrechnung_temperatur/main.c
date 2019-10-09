/*
	____________________________________
	|Aufgabe 1: Temperaturrechner		|
	|PE1								|
	|Author: Stavros Giannis			|
	|Datum 08/10/2019					|
	‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
*/

/*
Warnungen der "C Run-time Library" werden unterdrückt.
CRT ist Bestandteil der C/C++ Standardbibliothek "stdlib.h".
#define sind Makros, die bedingt definiert werden.
#define _CRT_SECURE_NO_WARNINGS 1
*/

//Die Standardbibliothek "Standardlibrary" wird inkludiert.
#include <stdlib.h>
//Die Standardbibliothek "Standard [i]nput [o]utput" wird inkludiert.
#include <stdio.h>

/*
Die Startfunktion "main()" wird beim Start des Programms initiiert:
Die Funktion 'int main()' ist equivalent zu 'int main(void)'.
Beide benötigen keine Argumente als Parameter zum ausführen.
Funktionen werden in der Informatik gebraucht,
damit von einer Softwareanwendung etwas eindeutig berechnet werden kann.
*/
int main()
{
	/*
		__________________
		|float	|32Bits   |
		|integer|16/32Bits|		<--		Ein paar Wichtige Datentypen und deren Größe in Bits.
		|char	|8Bits	  |				Jeder Datentyp besitzt einen einzigartigen Anwendungsbereich.
		|double	|64Bits	  |
		‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾

	Es werden zwei Variablen des Datentyps "float" deklariert.
	Der Datentyp float hat einen Wertebereich von +/- 10^38
	Eine Variable besteht aus:
	DATENTYP[float]		[NAME1,NAME2,..]			(optional[=VALUE])*/
	float					tempIn, tempOut;					//= 5;

	/*Es werden zwei Variablen des Datentyps "integer" deklariert.
	Auf der nächsten Zeile wird eine Variable des Datentyps integer separat dazu deklariert.
	Der Datentyp integer hat einen Wertebereich von -32768 bis 32767 bei 16 Bit*/
	int unitIn, unitOut;
	int desiredConversion;

	/*Es wird eine Variable des Datentyps "char" deklariert.
	Der Datentyp char hat einen Wertebereich von -128 bis 127*/
	char response;

	/*
	[print][formatted] ist eine Ausgabefunktion.
	Die Funktion nimmt Texte mit Formatierungshinweisen als Parameter.
	"\n" gehört zu den "Escape sequences", welch den Character "Newline" repräsentiert.
	Die Zeile gibt den folgenden text aus:
		\n											<--- "\n" wird nicht angezeigt, jediglich nur eine neue Zeile
		\n
		Programm zur Umrechnung von Temperaturen
		\n
	*/
	printf("\n\nProgramm zur Umrechnung von Temperaturen\n");

	//Es wird eine reihe von Strichen ausgegeben und am Ende noch eine neue Zeile hinzugefügt.
	printf("----------------------------------------\n");

	/*
	In den folgenden Zeilen wird eine do-while Schleife ausgeführt.
	Die kann man wie folgt verstehen:

			do {
				Anweisungen
			} while (Prüfe ob Bedingung erfüllt bzw. auf true oder false) {
				Anweisungen
				Veränderung des Anfangswertes
			}

	Bei der do-While Schleife wird die Bedingung erst nach dem ersten Schleifendurchlauf geprüft.
	Es handelt sich um eine Bedingung für die Wiederholung von Anweisungen.
	*/
	do {
		printf("\nAus welchem Einheitensystem soll umgerechnet werden?\n\n");
		printf("1: grad C     2: grad F     3: K\n\n");
		printf("Ihre Wahl: ");
		scanf("%i", &unitIn);
		while (getchar() != '\n');

		printf("\nBitte geben Sie die umzurechnende Temperatur an: ");
		scanf("%f", &tempIn);
		while (getchar() != '\n');

		printf("\nIn welches Einheitensystem soll umgerechnet werden?\n\n");
		printf("1: grad C     2: grad F     3: K\n\n");

		printf("Ihre Wahl: ");
		scanf("%i", &unitOut);
		while (getchar() != '\n');

		desiredConversion = unitIn * 10 + unitOut;
		switch (desiredConversion)
		{
		case 12: tempOut = tempIn * 1.8 + 32.0;
			printf("\n\n%.2fgrad C = %.2fgrad F\n\n", tempIn, tempOut);
			break;
		case 13: tempOut = tempIn + 273.15;
			printf("\n\n%.2fgrad C = %.2fK\n\n", tempIn, tempOut);
			break;
		case 21: tempOut = (tempIn + 32.0) * 5.0 / 9.0;
			printf("\n\n%.2fgrad F = %.2fgrad C\n\n", tempIn, tempOut);
			break;
		case 23: tempOut = (tempIn + 459.67) * 5.0 / 9.0;
			printf("\n\n%.2fgrad F = %.2fK\n\n", tempIn, tempOut);
			break;
		case 31: tempOut = tempIn + 273.15;
			printf("\n\n%.2fK = %.2fgrad C\n\n", tempIn, tempOut);
			break;
		case 32: tempOut = tempIn * 1.8 - 459.67;
			printf("\n\n%.2fK = %.2fgrad F\n\n", tempIn, tempOut);
		}
		printf("\n\nerneute Berechnung? (j/n)");
		scanf("%c", &response);
		while (getchar() != '\n');
	} while (response == 'j' || response == 'J');
}