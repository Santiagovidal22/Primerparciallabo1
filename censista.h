#ifndef CENSISTA_H_
#define CENSISTA_H_

typedef struct
{
	int legajoCensista;
	char nombre[51];
	int edad;
	char telefono[20];
}censista;

void harcode(censista*); // funcion de censistas harcodeados .

void listarcensistas(censista*,int);// funcion para listar los censistas.

#endif /* CENSISTA_H_ */
