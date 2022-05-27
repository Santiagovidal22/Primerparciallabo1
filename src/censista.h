#ifndef CENSISTA_H_
#define CENSISTA_H_


typedef struct
{
	int legajoCensista; //debe existir para que el censista sea valido y VALIDAR
	char nombre[51];
	int edad;
	char telefono[20];
	int empty;
}censista;

void censistaseteo(censista*, int);     /***/

void harcode(censista*); // funcion de censistas harcodeados .

void listarcensistas(censista*,int);

void altacensistas(censista*,int);




#endif /* CENSISTA_H_ */
