#include <stdio.h>

int main() {
  int clave = 20732548;

  int passnumber;

  printf("Ingrese su rut sin puntos ni guion:\n");
  scanf("%i" , &passnumber);
  
  if(clave == passnumber){
    printf("bienvenido\n");
  } else {
   printf("Ingrese nuevamente su rut:\n");
  scanf("%i" , &passnumber);
  } if(clave == passnumber){
    printf("bienvenido\n");
    } else {   
      printf("Ingrese nuevamente su rut:\n");
      scanf("%i" , &passnumber);
    } if(clave == passnumber){
    printf("bienvenido\n");
    } else {   
      printf("usuario bloqueado\n");}
     
  
  return 0;
  }