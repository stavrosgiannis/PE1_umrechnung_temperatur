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
#define sind Makros, die bedingt definiert werden.*/
#define _CRT_SECURE_NO_WARNINGS 1


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
		//Die CLI gibt einen Text aus mit entsprechenden Zeilen abständen
		printf("\nAus welchem Einheitensystem soll umgerechnet werden?\n\n");
		printf("1: grad C     2: grad F     3: K\n\n");
		printf("Ihre Wahl: ");
		/*
		Die Funktion scanf bietet die Möglichkeiten die Eingabe des Nutzers auszulesen
		In dem Fall wird der Integer, also die eingebene Zahl, in der Variable "unitIn" gespeichert.
		
		printf hat die Kompabilität Formatierungszeichen zu benutzen:
				%d %i	Decimal signed integer.
				%o	Octal integer.
				%x %X	Hex integer.
				%u	Unsigned integer.
				%c	Character.
				%s	String.	siehe unten.
				%f	double
				%e %E	double.
				%g %G	double.
				%p	zeiger.
				%n	Number of characters written by this printf.
					No argument expected.
				%%	%. No argument expected.

		*/
		//Die Variable "unitIn" repräsentiert "%i".
		scanf("%i", &unitIn);
		//Die Schleife folgt erst dann fort, wenn die Eingabe des Nutzers nicht nur eine "neue Zeile" ist.
		while (getchar() != '\n');

		//Hier wird wieder mit printf etwas Ausgegeben
		printf("\nBitte geben Sie die umzurechnende Temperatur an: ");
		//Dieses mal wird die Eingabe des Nutzers als float in die Variable "tempIn" gespeichert.
		//Dies ermöglicht eine Eingabe als Dezimalzahl, welche eine Temperatur auch sein kann.
		scanf("%f", &tempIn);
		//Die Schleife folgt erst dann fort, wenn die Eingabe des Nutzers nicht nur eine "neue Zeile" ist.
		while (getchar() != '\n');

		//Hier wird die Ausgabe so angepasst, dass der Nutzer sich mit der Eingabe 1 für grad Celsius, 2 für grad Fahrenheit
		//und 3 für Kelvin entscheiden kann.
		printf("\nIn welches Einheitensystem soll umgerechnet werden?\n\n");
		printf("1: grad C     2: grad F     3: K\n\n");
		printf("Ihre Wahl: ");
		//Der Input des Nutzers wird in die Variabel "unitOut" gesetzt.
		scanf("%i", &unitOut);
		//BUG: FEHLER &
		//Die Schleife folgt erst dann fort, wenn die Eingabe des Nutzers nicht nur eine "neue Zeile" ist.
		while (getchar() != '\n');

		//die Variabel "desireConversion" bildet sich wenn man den Wert von "unitIn" mit der 10 multipliziert und noch
		//den Wert der Variabel "unitOut" addiert.
		desiredConversion = unitIn * 10 + unitOut;

		//Das Switch-Case Element wird meist als eine Alternative zu den if-Abfragen benutzt. Es ist unpraktisch wenn man
		//viele Abfragen von Bedingungen mit If-Anweisungen erfüllen will.
		//Die Variable hinter switch(desiredConversion) gibt einen Rückgabewert einer Funktion oder einer Variable an. 
		switch (desiredConversion)
		{

		//IM FALLE IST 12: Falls der Rückgabewert der Variable 12 ist, wird dieser case-Block ausgeführt.
		case 12: 
			//Die Formel um Celsius zu Fahrenheit umzurechnen lautet: (CELSIUS_WERT°C × 9/5) + 32 = FAHRENH_WERT °F
			//Die Variable "tempOut" ist das Ergebnis von "tempIn" multipliziert mit 1.8 und 31.0 addiert.
			tempOut = tempIn * 1.8 + 32.0;
			//Die Celsius und Fahrenheit Zahl werden als float und eine Stelle nach dem Komma ausgegeben. Dies erkennt man an ".2f".
			printf("\n\n%.2fgrad C = %.2fgrad F\n\n", tempIn, tempOut);

			printf("-----------------------------------------------------------\n");

			int value;

			value = (tempOut * 100) / 100;
			printf(&value);
			

			for (int i = 0; i < value; i++)
			{
				printf("*");
			}
			printf("\n0% ----------------------------------------------------------- 100%\n");
			//hier wird das switch-case Element gestopppt.
			break;

		//IM FALLE IST 13: Falls der Rückgabewert der Variable 13 ist, wird dieser case-Block ausgeführt.
		case 13: 
			//Die Formel um Celsius zu Kelvin umzurechnen lautet: CELSIUS_WERT°C + 273.15 = KELVIN_WERT °F
			//Die Variable "tempOut" ist das Ergebnis von "tempIn" mit 273.15 addiert.
			tempOut = tempIn + 273.15;
			//Die Celsius und Kelvin Zahl werden als float und eine Stelle nach dem Komma ausgegeben. Dies erkennt man an ".2f".
			printf("\n\n%.2fgrad C = %.2fK\n\n", tempIn, tempOut);
			//hier wird das switch-case Element gestopppt.
			break;

		//IM FALLE IST 21: Falls der Rückgabewert der Variable 13 ist, wird dieser case-Block ausgeführt.
		case 21:
			//Die Formel um Fahrenheit zu Celsius umzurechnen lautet: (FAHRENH_WERT - 32) x 9/5 = CELSIUS_WERT
			//Die Variable "tempOut" ist das Ergebnis von "tempIn" mit 32 subtrahiert und mit 9/5 multipliziert.
			//BUG: FORMEL FALSCH
			tempOut = (tempIn + 32.0) * 5.0 / 9.0;
			printf("\n\n%.2fgrad F = %.2fgrad C\n\n", tempIn, tempOut);
			//hier wird das switch-case Element gestopppt.
			break;

		//IM FALLE IST 23: Falls der Rückgabewert der Variable 13 ist, wird dieser case-Block ausgeführt.
		case 23: 
			//Die Formel um Fahrenheit zu Kelvin umzurechnen lautet: (FAHRENH_WERT - 32) x 9/5 = CELSIUS_WERT
			//Die Variable "tempOut" ist das Ergebnis von "tempIn" mit 32 subtrahiert und mit 9/5 multipliziert.
			tempOut = (tempIn + 459.67) * 5.0 / 9.0;
			printf("\n\n%.2fgrad F = %.2fK\n\n", tempIn, tempOut);
			//hier wird das switch-case Element gestopppt.
			break;

		//IM FALLE IST 31: Falls der Rückgabewert der Variable 13 ist, wird dieser case-Block ausgeführt.
		case 31: 
			tempOut = tempIn + 273.15;
			printf("\n\n%.2fK = %.2fgrad C\n\n", tempIn, tempOut);
			//hier wird das switch-case Element gestopppt.
			break;

		//IM FALLE IST 32: Falls der Rückgabewert der Variable 13 ist, wird dieser case-Block ausgeführt.	
		case 32: 
			tempOut = tempIn * 1.8 - 459.67;
			printf("\n\n%.2fK = %.2fgrad F\n\n", tempIn, tempOut);

		}
		

		
		
		printf("\n\nerneute Berechnung? (j/n)");
		scanf("%c", &response);
		while (getchar() != '\n');
	} while (response == 'j' || response == 'J');
}