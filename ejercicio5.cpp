#include <stdio.h>

int main() {
  float t1;
  float t2;
  float t3;
  float ac;
  float p1;
  float p2;

  printf("Ingrese nota taller 1:\n");
  scanf("%f", &t1);
  printf("Ingrese nota taller 2:\n");
  scanf("%f", &t2);
  printf("Ingrese nota taller 3:\n");
  scanf("%f", &t3);
  printf("Ingrese nota actitudinal:\n");
  scanf("%f", &ac);
  printf("Ingrese nota prueba 1:\n");
  scanf("%f", &p1);
  p2 = (4 - ((0.1 * t1) + (0.1 * t2) + (0.1 * t3) + (0.1 * ac) + (0.25 * p1))) / 0.35;
  
  printf("su nota necesaria para pasar el ramo es: %f\n", p2);
  
  return 0;



}