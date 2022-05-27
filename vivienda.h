#ifndef VIVIENDA_H_
#define VIVIENDA_H_
#include "censista.h"

typedef struct
{
	int idVivienda;
	char calle[25];
	int cantidadPersonas;
	int cantidadHabitaciones;
	int tipoVivienda; //1-CASA 2-DEPTO 3-CASILLA 4-RANCHO
	censista legCensista;

}vivienda;

void altavivienda(vivienda*,int,int); // funcion para dar de alta las viviendas

void listarviviendas(vivienda*,int); // funcion para listar las viviendas.

int mostrar_sub_menu(); // funcion para mostrar un submenu.

int validar_id_vivienda(vivienda*,int,int); // funcion para validar el id de la vivienda.

int pedirid(); // funcion para pedir el id.

void modificarcalle(vivienda*,int); // funcion para modificar la calle de la vivienda

void modificarpersonas(vivienda*,int); // funcion para modificar la cantidad de personas de la vivienda.

void modificarhabitaciones(vivienda*,int); // funcion para modificar las habitaciones de la vivienda.

void modificarvivienda(vivienda*,int); // funcion para modificar el tipo de vivienda.

void bajavivienda(vivienda*,int,int); // funcion para dar de baja la vivienda.



#endif /* VIVIENDA_H_ */
