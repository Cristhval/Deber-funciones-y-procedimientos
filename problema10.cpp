#include <stdio.h> //Usamos la libreria  
#include <math.h>

//Problema 10  Verificar si un número es primo
int main(){
int num;//Pedimos el numero que vamos a verificar
printf("Ingrese un numero para verificar si es primo o no\n");
scanf("%d", &num);

if (num<=1) //Verificamos si no es primo 
{
    printf("El numero no es primo");
    return 0;
}
bool primo = true;//evaluamos si es falso o verdadero 

for (int i = 2; i <= sqrt(num); i++)// desarrollamos el proceso para conseguir el resultado
{
    if (num % i == 0)
    {
        primo = false;
        break;
    }
    
}
if (primo)//condicionamos para verificar el resultado
{
    printf("El numero es primo");//Damos el resultado
}
else
{
    printf("El numero no es primo");//Damos el resultado
}

    return 0;
}