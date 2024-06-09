#include <stdio.h> //Usamos la libreria  

//Problema 13 sumar los números pares hasta n
int main(){
int num;//Pedimos el numero de pares
int suma=0;//donde vamos a sumar los numeros
int signo = 1;//condicional para escribir el signo "+"
printf("Ingrese el numero de pares que desea sumar\n");
scanf("%d", &num);
for (int i = 0; i <= num; i+=2)//hacemos un bucle para sumar los pares
{
    if (!signo)//condicionamos que aparezca el signo "+"
    {
        printf(" + ");
    }
    else
    {
        signo = 0;
    }
    printf("%d", i);//imprimimos la serie de numeros pares
    suma +=i;//sumamos los numeros
    
}
printf("\n");
printf("El resultado de la suma de los numeros pares es: %d", suma);//presentamos los resultados

    return 0;
}