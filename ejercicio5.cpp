#include <stdio.h>

int main() {
  int numero1;
  int suma;
  printf("ingrese un numero:\n");
  scanf("%i", &numero1);
  do{
    suma = numero1 + numero1;

    printf("el resultado de la suma es: %i", suma);
    

  }while(numero1 > 0);
  
  
  
}