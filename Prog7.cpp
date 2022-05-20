/*Autor: Ricardo Jafet Granados Chable, Realizado: 31/03/2022
    programa numero 7 parcial 2 en C: Programa que almacena una cadena de caracteres.
	*/
#include<stdio.h>
#include<string.h>
int main(){
	char nombre[30]="Ricardo Jafet Granados Chable";
	char *carrera="Ing. En Sistemas Computacionales";
	char nombre2[30];
	int longitud;
	printf("Nombre: [%s]\n",nombre);
	printf("Carrera: [%s]",carrera);
	printf("\n--------------------------------------------");
	
	printf("\nIntroduce un nombre:",nombre2);
	fgets(nombre2, 30, stdin);
	printf("Nombre: [%s]\n",nombre2);
	longitud=strlen(nombre2);
	printf("La longitud de nombre2 es: %d\n ", longitud);
	
	if(strlen(nombre)>strlen(nombre2)){
		printf("Nombre tiene mas caracteres\n");
	}else{
		printf("Nombre2 tiene mas caracteres\n");
	}
	return 0;
}
