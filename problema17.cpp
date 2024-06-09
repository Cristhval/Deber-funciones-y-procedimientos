#include <stdio.h> //Usamos la libreria  

//Problema 17 Producto de una serie de números fraccionarios
int main (){
int num;//ingresamos el numero 
double producto = 1;//donde realizamos la multiplicacion
int signo = 1;//variable para colocar el signo */1
printf("Ingrese el numero que desea sumar de los numeros fraccionarios\n");
scanf("%d", &num);
printf("1");//inicio de la serie
for (int i = 1; i <= num; i++)//hacemos un bucle para multiplicar los numeros fraccionarios
{
    if (!signo)//condicionamos el signo *1/
    {
        printf(" * 1/%d", i);
    }
    else
    {
        signo = 0;
    }
    producto = producto * (1.0/i);//realizamos la multiplicacion
    
}
printf("\n");
printf("El producto de los numeros fraccionarios es: %g",producto);//presentamos las respuestas

    return 0;
}