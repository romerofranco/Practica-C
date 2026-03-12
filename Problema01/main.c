
/* Problema 01 -> Realizar la carga de dos numeros enteros por teclado e imprime su suma y producto
#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int suma = 0;
    int producto = 0;

    printf("Ingrese el primer numero a sumar: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero a sumar: ");
    scanf("%i", &num2);

    suma = num1 + num2;
    producto = num1 * num2;

    printf("El resultado de la suma es: %d \n",suma);
    printf("El resultado del producto es: %d",producto);


    return 0;

} */

// Problemas Propuestos

// -> Realizar la carga del lado de un cuadrado, mostrar por pantalla el perimetro del mismo (El perimetro de un cuadrado se calcula
// multiplicando el valor del lado por cuatro)
/*
#include<stdio.h>
int main(){

  int lado = 0;
  int perimetro = 0;

  printf("Ingrese el lado del cuadrado para su perimetro: ");
  scanf("%d", &lado);

  perimetro = lado * 4;

  printf("El perimetro del cuadrado es: %d\n",perimetro);

  return 0;

}*/

//Escribir un programa en el cual se ingresen cuatro números, calcular e informar la suma de los dos primeros y
//el producto del tercero y el cuarto.

/*
#include<stdio.h>
int main(){

  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;
  int suma = 0;
  int producto = 0;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);
  printf("Ingrese el tercero numero: ");
  scanf("%d", &num3);
  printf("Ingrese el cuarto numero: ");
  scanf("%d",&num4);

  suma = num1 + num2;
  producto = num3 * num4;

  printf("La suma del primero con el segundo es: %d\n",suma);
  printf("El producto del tercero con el cuarto es: %d\n",producto);

   return 0;
}*/

//Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.
/*
#include<stdio.h>
int main(){

  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;

  int suma = 0;
  int promedio = 0;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);
  printf("Ingrese el tercero numero: ");
  scanf("%d", &num3);
  printf("Ingrese el cuarto numero: ");
  scanf("%d",&num4);

  suma = num1 + num2 + num3 + num4;
  promedio = suma / 4;


  printf("La suma de los numeros ingresados es: %d\n",suma);
  printf("El promedio de los numeros ingresados es: %d\n",promedio);

  return 0;
}*/

//Se debe desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente.
//Mostrar lo que debe abonar el comprador.
//Definir una variable float para el precio del artículo.

#include<stdio.h>
int main(){

  int cantidad = 0;
  float precio = 0;
  float total = 0;

  printf("Ingrese la cantidad de articulos a llevar: ");
  scanf("%i",&cantidad);
  printf("Ingrese el precio unitario del articulo: ");
  scanf("%f",&precio);

  total = (float) cantidad * precio;

  printf("El comprador debe abonar: $%.2f\n",total);

  return 0;
}
