#include <stdio.h> //Usamos la libreria 

//Problema 6 Factorial de un número
int main(){
int num; //numero al que queremos sacar el factorial
int factorial = 1;//donde haremos las operaciones
int por = 1;//condicional para mostrar *
printf("Ingrese el numero que desea calcular el factorial\n");
scanf("%d", &num);
for (int i = 1; i <= num; i++) //usamos el bucle for para multiplicar numeros desde el 1 hasta el valor ingresado
{
    if (!por)//condicionamos que aparezca el *
    {
        printf(" * ");
    }
    else
    {
        por = 0;
    }
    
    factorial = factorial * i;//hacemos la multiplicacion 
    printf("%d", i);
    
}
printf("\n");
printf("El factorial del numero: %d es %d",num, factorial);//mostramos el resultado 

    return 0;
}