/*Confeccionar un programa que muestre una presentacion en pantalla del programa. Solicite la carga de dos valores y nos muestre la suma.
 * Mostrar finalmente un mensaje de despedida . Implementar estas cosas en tres funciones

#include <stdio.h>
//Cargamos la primera funcion, el mensaje de bienvenida
void presentacion()
{
    printf("Bienvenidos al programa que nos permite cargar dos valores por teclado.\n");
    printf("Este programa efectua la suma de los valores\n");
    printf("Muestra el resultado de la suma.\n");
    printf("**********************************\n");
}

//Cargamos la segunda funcion. Estructura del Programa
void  cargarSum(){

  int valor1 = 0;
  int valor2 = 0;
  int suma= 0;

  printf("Ingrese el primer valor: ");
  scanf("%d",&valor1);
  printf("Ingrese el segundo valor: ");
  scanf("%d",&valor2);

  suma = valor1 + valor2;
  printf("La suma de los valores ingresados es: %d\n",suma);

}

//Cargamos la tercera funcion que es el mensaje de finalizacion
void finalizacion(){

  printf("*****************************************************\n");
  printf("Gracias por utilizar nuestro programa, hasta la proxima.\n");

}

int main()
{
    presentacion();
    cargarSum();
    finalizacion();

    return 0;
}*/

/*Confeccionar una aplicacion que solicite la carga de dos valores enteros y muestre su suma.
 * Repetir la carga de otros dos valores, sumarlos y mostrar. Mostrar una linea separadora despues de cada vez que cargamos dos valores y mostramos su suma.

#include<stdio.h>

void presentacion(){
  printf("*******************************************\n");
  printf("Bienvenido al Problema numero 2- Funciones.\n");
  printf("*******************************************\n");

}

void cargayMuestraSuma(){

  int num1 = 0;
  int num2 = 0;
  int suma = 0;

  printf("Ingrese el primer numero: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero: ");
  scanf("%d",&num2);

  suma = num1 + num2;

  printf("El resultado es ---> \t %d\n",suma);

}

  void lineaSeparadora(){
  printf("************************************\n\n");
}

  int main(){

  presentacion();
  cargayMuestraSuma();
  lineaSeparadora();
  cargayMuestraSuma();
  lineaSeparadora();

  return 0;
}*/

/* Confeccionar una función que reciba dos enteros e imprima el mayor de ellos. Llamar a la función desde la main cargando previamente dos valores por teclado.

#include<stdio.h>

void imprimirMayor(int v1,int v2){
  if(v1>v2){
    printf("El mayor es el valor: %i",v1);
  }else{

    printf("El mayor es el valor: %i",v2);
  }

}

int main(){

  int valor1 = 0;
  int valor2 = 0;

  printf("Ingrese el primer valor: ");
  scanf("%d",&valor1);

  printf("Ingrese el segundo valor: ");
  scanf("%d",&valor2);

  imprimirMayor(valor1,valor2);

  return 0;
}*/

/*Confeccionar un programa que solicite el pago por hora de un empleado y la cantidad de horas trabajadas dentro de una estructura repetitiva en la funcion main.
 *  Elaborar una funcion que reciba como parametro el valor de la hora y la cantidad de horas trabajadas y nos muestre el total a pagar.

#include<stdio.h>

void presentacion(){
  printf("Bienvenidos al Examen de Programacion 1. \n ");
  printf("*****************************************\n");
}

void calculoPago (float vHora, int hTrabajada){

  float calculo = vHora * hTrabajada;
  printf("El sueldo total a pagar es: %.2f\n\n",calculo);
}

void finPrograma(){
  printf("Gracias por usar nuestro programa, hasta la proxima.\n");
}

int main(){

 char opcion;
 float valorHora =0 ;
 int horasTrabajadas = 0;


  do{
      printf("Ingrese la cantidad de horas trabajadas: ");
      scanf("%i",&horasTrabajadas);
      printf("Ingrese el valor de la hora: ");
      scanf("%f",&valorHora);

    calculoPago(valorHora,horasTrabajadas);

    printf("Si desea hacer otro calculo, presion la letra s: ");
    scanf(" %c", &opcion);

  }while(opcion == 's');

  finPrograma();

}*/

/*Desarrollar dos funciones que reciban como parametro el valor del lado de un cuadrado.
 * La primera debe calcular y mostrar la superficie y la segunda calcular y mostrar el perimetro.
 * En la main llamar a las funciones pasando los valores enteros comprendidos entre 10 y 20.

#include<stdio.h>

void superficieCuadrado(int lado){

  int sup = lado*lado;
  printf("La superficie del Cuadrado es:%i\n",sup);

}

void perimetroCuadrado(int lado){

  int perimetro = lado * 4;

  printf("EL perimetro del cuadrado es:%i\n",perimetro);
}

int main(){

int x = 0;
for(x=10;x<=20;x++){

  superficieCuadrado(x);
  perimetroCuadrado(x);
}
  return 0;

}*/

/*Desarrollar una función que reciba como parámetro un caracter. Si llega una 'h' mostrar por pantalla el mensaje "hombre", si llega una 'm' mostrar el mensaje "mujer".
Llamar desde la función main pasando una vez una 'h' y otra vez una 'm'.*/
#include<stdio.h>

void parametro(char g){
  printf("Ingrese el genero con una letra: ");
  scanf(" %c",&g);

  if(g == 'm' || g == 'M'){
    printf("Mujer\n");
  }else if (g == 'h' || g == 'H'){
    printf("Hombre\n");
  }
}

int main(){

  int x = 0;
  char letra;
  for(x=0;x<2;x++){
    parametro(letra);
}
  return 0;
}



