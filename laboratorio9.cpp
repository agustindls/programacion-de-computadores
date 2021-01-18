#include <stdio.h>

	char tablero[3][3] = {{'-', '-', '-'},
						            {'-', '-', '-'},
						            {'-', '-', '-'}};
						  
	int fila;
	int columna;
	bool ganador = false;
	int turnos = 0;

//prototipo

int coordenadaf();
int coordenadac();
bool winner ();
void impjuego ();


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
      int fila = coordenadaf ();
      int columna =coordenadac(); 
			} while(tablero[fila][columna] != '-');
		
	
		if(turnos%2 == 0){
			tablero[fila][columna] = 'X';
			} else{
				tablero[fila][columna] = 'O';
				}
		// impresion tablero
    impjuego ();
		
    //busqueda de ganador
		int ganador = winner();
		
		
		turnos++;
		}
	
	
	
	return 0;
	}
  
  //implementacion
  
  int coordenadaf (){
    int fil;
    printf("ingrese su jugada en la fila: \n");
			scanf("%i", &fila );
      return fil;
  }
   int coordenadac (){
    int col;
    printf("ingrese su jugada en la columna: \n");
			scanf("%i", &columna );
      return col;
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
      return false;
  }