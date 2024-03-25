#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
/**PROTOTIPADO*/
int arrayEnteros (int enteros[], int dimencion);
void mostrarParametro (int enteros[], int validos);
int sumar (int entero[], int validos);
Pila cargaPila ();
int pasarDatos (Pila pilita,int entero[],int dimencion);




int main()
{
///clase 25/03
    /*int arreglito[10];

    int validos =  cargaarrays(arreglito,10);
    mostrarArreglo(arreglito,validos);
    */
    /* 1) Hacer una función que reciba como parámetro un arreglo de números enteros y permita que el usuario ingrese valores al mismo por teclado.
    La función debe retornar la cantidad de elementos cargados en el arreglo (o pueden utilizar como puntero válidos)*/
    int numerosEnteros[10];
    int arreglo4[5];
    Pila pilon;
    inicpila(&pilon);
    int validos = arrayEnteros(numerosEnteros,10);
    printf ("los validos son: %i\n",validos);
    system("pause");
    system("cls");



    /**2) Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos) cargados en él y
     los muestre por pantalla.*/

    mostrarParametro(numerosEnteros, validos);

    system("pause");
    system("cls");

    /**3) Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos) cargados en él
    y calcule la suma de sus elementos.*/
    int suma = sumar(numerosEnteros,validos);
    printf("suma = : %i\n", suma);

    /**4) Hacer una función que reciba como parámetro un arreglo, la cantidad de elementos
    (válidos) cargados en él y una Pila. La función debe copiar los elementos del arreglo en la pila. */
pilon = cargaPila();

i = pasarDatos




    return 0;
}
/**
int cargaarrays(int array[], int dim){
char seguir = 's';
int i = 0;

while(seguir = 's' && i < dim){
printf("ingrese el elementos \n");
fflush(stdin);
scanf("%i", &array[i]);
i++;

printf("ingrese s si desea seguir\n");
fflush(stdin);
scanf("%c", &seguir);

}
return i;

}
void mostrarArreglo(int array[], int validos){

for (int i = 0; i < validos; i++){
    printf ("  |%i|  ", array[i]);
}

}
*/

int arrayEnteros (int enteros[], int dimencion)
{
    int i = 0;
    char seguir = 's';

    while (seguir == 's' && i< dimencion)
    {

        printf("ingrese el elemento del array \n");
        fflush (stdin);
        scanf("%i", &enteros[i]);


        printf ("desea seguir s/n \n");
        fflush(stdin);
        scanf("%c", &seguir);
        i++;
    }

    return i;
}

void mostrarParametro (int enteros[], int validos)
{
    for (int i = 0; i < validos; i++)
    {
        printf ("%i / ", enteros[i]);
    }

}

int sumar (int entero[], int validos)
{
    int i = 0;
    int sumar = 0;
    while(i< validos)
    {
        sumar += entero[i];
        i++;
    }
    return sumar;



}

Pila cargaPila ()
{
    Pila punto4;
    inicpila(&punto4);
    int valor;
    char seguir = 's'
                  while (seguir == 's')
    {
        printf("ingrese un valor:: ");
        fflush(stdin);
        scanf("%i", &valor);
        apilar(&punto4,valor);

        printf ("desea seguir s/n \n");
        fflush(stdin);
        scanf("%c", &seguir);
    }

}
int pasarDatos (Pila pilita,int entero[],int dimencion)
{
    Pila aux;
    inicpila(&aux);
    int i = 0;
    while (!pilavacia (&pilita))
    {
        entero[i]  =tope(&pilita);
        apilar (&aux, desapilar(&pilita));
        i++;
    }

return i;

}



