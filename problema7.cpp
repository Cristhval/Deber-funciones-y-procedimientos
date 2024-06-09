#include <stdio.h> //Usamos la libreria 

//Problema 7 Suma de una serie aritmética
int main(){
int serie;//Variable para la serie aritmetica
int num;//numeros que vamos a sumar
int signo = 1;//condicional para mostrar el signo " + "
int ser;//Donde mostraremos la serie
int suma = 0;//donde sumaremos la serie
printf("Ingrese cuantos digitos desea presentar de la serie aritmetica\n");
scanf("%d", &serie);
printf("Ingrese cuantos numeros de la serie desea sumar\n");
scanf("%d", &num);
for (int i = 1; i <= serie; i++)//usamos un bucle con la serie aritmetica
{
    if (!signo)//condicionamos el +
    {
        printf(" + ");
    }
    else
    {
        signo = 0;
    }
    ser = i;//imprimimos la serie
    printf("%d", ser);
}
 for (int ii = 0; ii <= num; ii++)//sumamos los numeros de digitos que indicamos
    {
        suma = suma + ii;
    }
printf("\n");
printf("La suma de los %d primeros numeros de la serie es %d", num, suma);//mostramos la respuesta
    return 0;
}