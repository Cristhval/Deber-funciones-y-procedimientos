#include <stdio.h> //Usamos la libreria  

//Problema 11 Encontrar el MCD (Máximo Común Divisor)
int main(){
int num;//Pedimos el primer numero
int num1;//Pedimos el segundo numero
int a = 1;//usamos un auxiliar para realizar la operacion
printf("Ingrese el primer numero para calcular el MCD\n");
scanf("%d", &num);
printf("Ingrese el segundo numero para calcular el MCD\n");
scanf("%d", &num1);
printf("El MCD de los numeros %d y %d", num, num1);
for (int i = 2; i <= 11; i++)//utilizamos for y while para buscar el MCD
{
    while (num % i == 0 && num1 % i == 0)
    {
        a *=i;
        num = num/i;
        num1 = num1/i; 
    }
    
}
printf(" es: %d", a);//Presentamos el resultado

    return 0;
}