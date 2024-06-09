#include <stdio.h> //Usamos la libreria 

//Problema 3 Potencia mediante sumas sucesivas
int main(){
int num;//variable para el numero o base que ingresaremos
int potencia;//variable para la potencia
int signo=1;//variable para ingresar el signo " + "
int suma=0; //variable para la suma 
int rpt =1;//donde guardamos el valor de la potencia
int ab=0;//auxiliar para usar el while
printf("Ingrese la base para hacer una potencia mediante sumas sucesivas\n");
scanf("%d", &num);
printf("Ingrese el exponente del numero\n");
scanf("%d", &potencia);
for (int i = 0; i < potencia; i++)//calculamos el resultado de la potencia
{
    rpt *=num; 
}


while (rpt>ab)
{
    if (!signo)//condicionamos el signo + para que aparezca como debe
    {
        printf(" + ");
    }
    else
    {
        signo = 0;
    }

    suma += num; //suma de la base 
    printf("%d", num); //imprimimos la base 
    ab+=num;//cumplimos la condicion del while

}
printf("\n");//salto de linea para evitar confusion
printf("El resultado de la potencia es: %d ",suma);


    return 0;
}