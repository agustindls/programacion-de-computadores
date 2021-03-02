#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "void.h"

// DESAFIO 2: IMPLEMENTAR FUNCION PARA GENERAR RUTA DEL ARCHIVO



	
int main(){


	
	while(opcion != 5){
		// MENU
		menu();
		
		switch(opcion){
			case 0: system("ls -l *.txt");
					break;
			case 1: case1();
					break;
			case 2:	case2();
					break;
			case 3: case3();
					break;
			case 4: case4();
					break;
			case 5: printf("5\n");
					break;
			default: printf("La opción ingresada no es válida.\n");
			}
		
		}
	return 0;
	} 

