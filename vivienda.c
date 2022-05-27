#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "vivienda.h"
#include "input.utn.h"
#include <ctype.h>


void altavivienda(vivienda* strvivienda,int id,int n)
{
	setbuf(stdout, NULL);
	strvivienda[n].idVivienda=id;
	do
	{
	printf("\nIngrese la calle de la vivienda: \n");
	fflush(stdin);
	gets(strvivienda[n].calle);
	}while(validarChar(strvivienda[n].calle));
	do{
	printf("\nIngrese la cantidad de personas de la vivienda : \n");
	fflush(stdin);
	scanf(" %d",&strvivienda[n].cantidadPersonas);
	if(strvivienda[n].cantidadPersonas<1 || strvivienda[n].cantidadPersonas > 20)
	{
		printf("\nERROR en la carga del dato.");
	}
	}while(strvivienda[n].cantidadPersonas<1 || strvivienda[n].cantidadPersonas > 20);
	do{
	printf("\n Ingrese la cantidad de habitaciones de la vivienda: \n");
	fflush(stdin);
	scanf(" %d",&strvivienda[n].cantidadHabitaciones);
	if(strvivienda[n].cantidadHabitaciones<1 || strvivienda[n].cantidadHabitaciones > 20)
		{
			printf("\nERROR en la carga del dato.");
		}
	}while(strvivienda[n].cantidadHabitaciones<1 || strvivienda[n].cantidadHabitaciones > 20);
	do{
	printf("\n Ingrese el tipo de vivienda: (1-CASA , 2-DEPARTAMENTO,3-CASILLA , 4-RANCHO) \n");
	fflush(stdin);
	scanf(" %d",&strvivienda[n].tipoVivienda);
	if(strvivienda[n].tipoVivienda<1 || strvivienda[n].tipoVivienda > 4)
			{
				printf("\nERROR en la carga del dato.");
			}
	}while(strvivienda[n].tipoVivienda<1 || strvivienda[n].tipoVivienda > 4);

	printf("\nIngrese el legajo del censista : \n");
	fflush(stdin);
	scanf(" %d",&strvivienda[n].legCensista.legajoCensista);



}

void listarviviendas(vivienda* strvivienda,int n)

{
		vivienda estraux;

	printf("\nLa lista de las viviendas ingresadas es : %d\n",n);
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1; j<=n;j++)
		{
			if(strcmp(strvivienda[i].calle,strvivienda[j].calle)>0)
			{
				estraux = strvivienda[i];
				strvivienda[i] = strvivienda[j];
				strvivienda[j] = estraux;
			}
			else
			{
				if(strcmp(strvivienda[i].calle,strvivienda[j].calle)==0&&strvivienda[i].cantidadPersonas<strvivienda[j].cantidadPersonas)
				{
					estraux = strvivienda[i];
					strvivienda[i] = strvivienda[j];
					strvivienda[j] = estraux;
				}
			}
		}
	}
		for(int i=1;i<=n;i++)
		{
			if(strvivienda[i].idVivienda>20000)
			  {
			  	printf(" \n CALLE: %s | PERSONAS: %d | TIPO: %d | HABITACIONES: %d  |  ID: %d",strvivienda[i].calle,strvivienda[i].cantidadPersonas,strvivienda[i].tipoVivienda,strvivienda[i].cantidadHabitaciones,strvivienda[i].idVivienda);
		      }
		}


}

int mostrar_sub_menu()

{
	int retorno;

	do{
	printf("\n Ingrese 1 para modificar la calle ");
	printf("\n Ingrese 2 para modificar la cantidad de personas ");
	printf("\n Ingrese 3 para modificar la cantidad de habitaciones ");
	printf("\n Ingrese 4 para modificar el tipo de vivienda ");

	printf("\n opcion : ");
	fflush(stdin);
	scanf("%d",&retorno);
	if(retorno<1|| retorno>4)
		{
	       printf("\nERROR en la carga del dato.");
		}
	}while(retorno<1|| retorno>4);

	return retorno;

}

int validar_id_vivienda(vivienda* strvivienda,int n,int id)
{
	int i;
	int retorno=-1;

	for(i=1; i<=n; i++)
	{

		if(strvivienda[i].idVivienda == id)
		{
			retorno = 0;
		}

	}

	return retorno;
}

int pedirid()
{
	int id_ingresar;
	do{

	printf("\n Ingrese el id de la vivienda : \n ");
	fflush(stdin);
	scanf(" %d",&id_ingresar);
	if(id_ingresar < 20000)
			{
		       printf("\nERROR en la carga del dato.");
			}
	}while(id_ingresar < 20000);

	return id_ingresar;
}

void modificarcalle(vivienda* strvivienda ,int id)
{
	int pos= id - 20000;
	char ncalle[20];
	do{
	printf("\n Ingrese la calle nueva: ");
	fflush(stdin);
	gets(ncalle);
	strcpy(strvivienda[pos].calle,ncalle);
	}while(validarChar(ncalle));
}
void modificarpersonas(vivienda* strvivienda ,int id)
{
	int pos= id-20000;
	int npersona;
	do{
	printf("\n Ingrese la cantidad de personas: ");
	fflush(stdin);
	scanf("%d",&npersona);
	if(npersona<1 || npersona > 20)
		{
					printf("\nERROR en la carga del dato.");
		}
	strvivienda[pos].cantidadPersonas=npersona;
	}while(npersona<1 || npersona > 20);

}
void modificarhabitaciones(vivienda* strvivienda ,int id)

{
	int pos= id-20000;
	int nhabitaciones;
	do{
	printf("\n Ingrese la cantidad de personas: ");
	fflush(stdin);
	scanf("%d",&nhabitaciones);
	if(nhabitaciones<1 || nhabitaciones > 20)
		{
			printf("\nERROR en la carga del dato.");
		}
	strvivienda[pos].cantidadHabitaciones=nhabitaciones;
	}while(nhabitaciones<1 || nhabitaciones > 20);
}
 void modificarvivienda(vivienda* strvivienda ,int id)

 {
	int pos= id-20000;
	int nvivienda;
	do{
	printf("\n Ingrese la cantidad de personas: ");
	fflush(stdin);
	scanf("%d",&nvivienda);
	if(nvivienda<1 || nvivienda > 20)
		{
			printf("\nERROR en la carga del dato.");
		}
	strvivienda[pos].tipoVivienda=nvivienda;
	}while(nvivienda<1 || nvivienda > 4);
}

void bajavivienda(vivienda* strvivienda,int id,int n)
{

	int i;
	for(i=1; i<=n; i++)
	{

		if(strvivienda[i].idVivienda == id)
		{
			strvivienda[i].idVivienda = strvivienda[0].idVivienda;
			strcpy(strvivienda[i].calle,strvivienda[0].calle);

			strvivienda[i].cantidadHabitaciones = strvivienda[0].cantidadHabitaciones;

			strvivienda[i].cantidadPersonas = strvivienda[0].cantidadPersonas;

			strvivienda[i].tipoVivienda = strvivienda[0].tipoVivienda;

		}

	}
}
