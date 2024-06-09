#include <stdio.h> //Usamos la libreria  

//Problema 20 Calcular la suma de los factoriales de los primeros n números
int main(){
int num;//variable para saber cuantos numeros vamos a sumar
int suma=0;//donde vamos a sumar los factoriales
int signo =1;//condicional para coloar " + "
printf("Ingrese un numero de factoriales a sumar\n");
scanf("%d", &num);

for (int i = 1; i <= num; i++)//hacemos un bucle anidado para conseguir los factoriales
{
    int factorial = 1; //variable donde conseguiremos los factoriales

    for (int ii = 1; ii <= i; ii++)//bucle donde conseguimos resultados
    {
        factorial *= ii;
    }

    if (!signo)//condicional para colocar el signo "+"
    {
        printf(" + ");
    }
    else
    {
        signo =0;
    }
    
    printf("%d ", factorial);//imprimimos los resultados de los factoriales
    suma += factorial;//sumamos los resultados de los factoriales
    
}
printf("\n");
printf("La suma de los factoriales de los primeros %d numeros es %d", num, suma);//damos las respuestas

    return 0;
}