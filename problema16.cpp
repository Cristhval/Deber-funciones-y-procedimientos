#include <stdio.h> //Usamos la libreria  

//Problema 16 Suma de una serie de números fraccionarios
int main(){
int num;//numero que queremos sumar
double suma = 0;//variable para sumar
int signo = 1; //variable para colocar " + 1/"
printf("Ingrese el numero que desea sumar de los numeros fraccionarios\n");
scanf("%d", &num);
printf("1");//inicio de la serie
for (int i = 1; i <= num; i++)//Bucle para realizar la serie
{
    if (!signo)//condicional para que aparezca " +1/"
    {
        printf(" + 1/%d ", i);
        
    }
    else
    {
        signo = 0;
    }
    
    suma = suma+(1.0/i);//sumamos los numeros fraccionarios

}
printf("\n");
printf("La suma de los numeros fraccionarios es: %g",suma);//presentamos las respuestas


    return 0;
}