#include <stdio.h> //Usamos la libreria  

//Problema 12 Sumar los números impares hasta n
int main(){
int num;//Variable para el numero
int suma = 0;//variable para sumar los impares
int signo = 1;//condicional para el signo "+""
printf("Ingrese el numero de impares que desea sumar\n");
scanf("%d", &num);
for (int i = 1; i <= num; i+=2)//usamos un bucle for para hacer la secuencia de impares
{
        if (!signo)//condicionamos cuando aparecer el signo "+"
        {
            printf(" + ");
        }
        else
        {
            signo = 0;
        }
        printf("%d", i);//imprimimos la secuencia 
        suma +=i;//sumamos los numeros
}
printf("\n");
printf("El resultado de la suma de impares es: %d", suma);//presentamos resultados

    return 0;
}