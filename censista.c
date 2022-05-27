#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "censista.h"
#include <ctype.h>

void harcode(censista* struccen)
{
	struccen[100].legajoCensista=100;
	strcpy(struccen[100].nombre,"Ana");
	struccen[100].edad=34;
	strcpy(struccen[100].telefono,"1203-2345");

	struccen[101].legajoCensista=101;
	strcpy(struccen[101].nombre,"Juan");
	struccen[101].edad=24;
	strcpy(struccen[101].telefono,"4301-54678");

	struccen[102].legajoCensista=102;
	strcpy(struccen[102].nombre,"Sol");
	struccen[102].edad=47;
	strcpy(struccen[102].telefono,"5902-37487");
}

void listarcensistas(censista* strcensista, int c)
{
	for(int i=100;i<103;i++)
	{
		if(strcensista[i].legajoCensista != 0)

		{
			printf( "\n %d-%s-%d-%s\n" , strcensista[i].legajoCensista,strcensista[i].nombre,strcensista[i].edad,strcensista[i].telefono);
		}


	}

}
