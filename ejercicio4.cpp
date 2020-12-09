#include <stdio.h>

int main() {
float radio;
float perimetro;
float area;

printf("ingrese el radio del circulo:\n");
scanf("%f", &radio);
perimetro = 2 * 3.14 * radio;
area = 3.14 * radio * radio;
printf("el perimetro y area es: %f y %f\n", perimetro, area);

return 0;


}