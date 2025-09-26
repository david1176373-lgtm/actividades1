#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a;
    float b;
    float c;
    float suma;
    float promedio;
    printf("!-----Calculas el promedio de 3 numeros!--------\n");
    printf("Ingresa el primer numero:\n");
    scanf("%f",&a);
    printf("Ingresa el segundo numero:\n");
    scanf("%f",&b);
    printf("Ingresa el tercer  numero:\n");
    scanf("%f",&c);
    suma=a+b+c;
    promedio=suma/3;
    printf ("el promedio de los tres numeros es: %f\n", promedio);
    return 0;

}
