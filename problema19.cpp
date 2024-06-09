#include <stdio.h> //Usamos la libreria  

//Problema 19 Calcular el n-ésimo número triangular
int main(){
int num;//variable para el numero que vamos a ingresar
int triangular = 0;//donde calculamos el numero triangular
int signo = 1;//variable para coloar el +
printf("Ingrese el numero para calcular el n-esimo numero triangualar\n");
scanf("%d", &num);
for (int i = 1; i <= num; i++)//hacemos un plucle para calcular el numero triangular
{
    if (!signo)//condicionamos el signo "+"
    {
        printf(" + ");
    }
    else
    {
        signo = 0;
    }
    triangular += i;//hacemos la suma
    printf("%d", i);//mostramos proceso
}
printf("\n");
printf("El n-esimo numero triangular de %d es: %d", num, triangular);//damos el resultado


    return 0;
}