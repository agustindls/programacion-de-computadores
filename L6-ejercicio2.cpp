#include <stdio.h>

int main() {

int numb1;
int numb2;
int numb3;

printf("ingrese primer numero\n");
scanf("%i" , &numb1);
printf("ingrese segundo numero\n");
scanf("%i" , &numb2);
printf("ingrese tercer numero\n");
scanf("%i" , &numb3);

if((numb1 > numb2) && (numb1 > numb3)) {
  printf("el numero mayor es: %i\n", numb1);
} else if((numb2 > numb1) && (numb2 > numb3)) {
  printf("el numero mayor es: %i\n", numb2);
} else if((numb3 > numb1) && (numb3 > numb2)) {
  printf("el numero mayor es: %i\n", numb3);
} else {
  printf("los tres numeros son iguales");
}


  return 0;
  
}