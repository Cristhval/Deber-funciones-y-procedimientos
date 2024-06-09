#include <stdio.h> //Usamos la libreria  

//Problema 15 Suma de los cubos de los primeros n números
int main(){
int num;//pedimos el numero que deseamos sumar
int suma = 0;//variable para las sumas
int signo = 1;//variable para colocar el signo "^3 +"
printf("Ingrese el numero de cubos que desea sumar\n");
scanf("%d", &num);
for (int i = 1; i <= num; i++)//hacemos el bucle que nos permitira sumar los cubos
{
    if (!signo)//condicionamos cuando aparecer el signo
    {
        printf("^3 + ");
    }
    else
    {
        signo = 0;
    }
    printf("%d", i);//mostramos los numeros
    suma += i*i*i;//sumamos los cubos
}
printf("^3 ");//signo del ultimo numero
printf("\n");
printf("El resultado de la suma de cubos es: %d", suma);//Presentamos el resultado

    return 0;
}