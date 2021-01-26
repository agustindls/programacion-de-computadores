#include <stdio.h>
#include "gato.h"



//implementacion
  
 void coordenada(int* fila , int* columna){
   printf("ingrese fila , columna:\n");
   scanf("%i , %i" , fila , columna );
     

 }
   void turno (int turnos){
     if(turnos%2 == 0){
			tablero[fila][columna] = 'X';
			} else{
				tablero[fila][columna] = 'O';
				}
   }
  
  
  
   void impjuego (){
     printf(" %c | %c | %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
     
     printf(" %c | %c | %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    
     printf(" %c | %c | %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);
  
   }
   
 
  
  bool winner (){
    if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
			printf("Ganador en la fila 1!\n");
			return true;
			}
		if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
			printf("Ganador en la fila 2!\n");
			return true;
			}
		if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
			printf("Ganador en la fila 3!\n");
			return true;
			}
		if((tablero[0][0] == tablero[1][0]) && (tablero[1][0] == tablero[2][0]) && (tablero[0][0] != '-')){
			printf("Ganador en la columna 1!\n");
			return true;
			}
		if((tablero[0][1] == tablero[1][1]) && (tablero[1][1] == tablero[2][1]) && (tablero[0][1] != '-')){
			printf("Ganador en la columna 2!\n");
			return true;
			}
		if((tablero[0][2] == tablero[1][2]) && (tablero[1][2] == tablero[2][2]) && (tablero[0][2] != '-')){
			printf("Ganador en la columna 3!\n");
			return true;
			}
		if((tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
			printf("Ganador en la diagonal 1!\n");
			return true;
			}
		if((tablero[0][2] == tablero[1][1]) && (tablero[1][1] == tablero[2][0]) && (tablero[0][2] != '-')){
			printf("Ganador en la diagonal 2!\n");
			return true;
			}
      return false;}