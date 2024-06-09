#include <stdio.h> //Usamos la libreria  

//Problema 18 Contar los números primos hasta n
int main(){
int num;//variable para ingresar cuantos numeros contar 
int total = 0;//variable para contar los numeros
printf("Ingrese el numero hasta que numero primo desea contar\n");
scanf("%d", &num);
for (int i = 2; i <= num; i++)//bucle para identificar que numero es primo
{
    bool primo = true; //verificamos si es primo
    for (int ii = 2; ii <= i/2 ; ii++)//bucle para verificar si el numero es primo
    {
        if (i%ii == 0)
        {
            primo = false;
            break;
        }
        if (primo)
        {
            total++;//contamos los numeros primos
        }   
    }
}
printf("\n");
printf("El total de numeros primos hasta %d es %d",num, total);//presentamos la respuesta


    return 0;
}