#include <stdio.h>

	char tablero[3][3] = {{'-', '-', '-'},
						            {'-', '-', '-'},
						            {'-', '-', '-'}};
						  
	int fila;
	int columna;
	bool ganador = false;
	int turnos = 0;



int main(){

	//impresion tablero
	impjuego ();
  
	while(!ganador){
		do{
			if(turnos%2 == 0){
			printf("Jugador 1 ");
			} else{
				printf("Jugador 2 ");
				}
			//pedir coordenadas
      coordenada(&fila , &columna);
			
      } while(tablero[fila][columna] != '-');
		
	  //turnos
		turno (turnos);
		
    // impresion tablero
    impjuego ();
		
    //busqueda de ganador
		int ganador = winner();
		
		
		turnos++;
		}
	
	
	
	return 0;
	}
  
 