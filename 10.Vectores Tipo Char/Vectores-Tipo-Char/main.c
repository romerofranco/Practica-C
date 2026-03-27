/* Definir una variable para almacenar el nombre y apellido del programador. Mostrar dicho nombre por pantalla

#include <stdio.h>

int main()
{
    char programador[20] = "Franco Romero";

  printf("El nombre y apellido del programador es: %s",programador);

    return 0;
}*/

/*Cargar los nombres de dos personas y sus edades. Mostrar el nombre de la persona que tiene mayor edad. Los nombres de las personan no superan los 20 caracteres.

#include<stdio.h>
int main(){

  char person1 [20];
  char person2 [20];
  int age1 = 0;
  int age2 = 0;

  printf("Ingrese el nombre de la primera persona: ");
  gets(person1);
  printf("Ingrese el nombre de la Segunda persona: ");
  gets(person2);

  printf("Ingrese la edad de la primera persona: ");
  scanf("%d",&age1);
  printf("Ingrese la edad de la Segunda persona: ");
  scanf("%d",&age2);

  if(age1 > age2){
  printf("La primera persona es mayor, su nombre es: %s y tiene %d anios",person1,age1);
  }else{
  printf("La segunda persona es mayor, su nombre es: %s y tiene %d anios",person2,age2);
  }

  return 0;

}*/

/*Cargar una palabra por teclado en minuscula. Mostrar por pantalla la cantidad de vocales que tiene
#include<stdio.h>
int main(){

  char palabra[20];
  int i = 0;
  int vocal = 0;

  printf("Ingrese la palabra que desea analizar: ");
  gets(palabra);

  while(palabra[i] != '\0'){

  if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'o' || palabra[i] =='u')
    {
      vocal++;
    }

  i++;
}

printf("La cantidad de vocales que tiene la palabra ingresada es: %d",vocal);

  return 0;
}*/

/*Ingresar una palabra por teclado. Mostrar por pantalla la palabra y la cantidad de caracteres que tiene dicha palabra
#include<stdio.h>
int main(){

  char palabra[20];
  int i = 0;
  int caracteres = 0;

  printf("Ingrese la palabra: ");
  gets(palabra);

  while(palabra[i] != '\0'){
  caracteres++;
  i++;
}

  printf("La cantidad de caracteres es:%d\n",caracteres);

  return 0;
}*/

/*Ingresa por teclado una oracion de hasta 200 caracteres. Se sabe que el operador ingresa solo un caracter en blanco entre palabras. Imprimir por pantalla
 * la cantidad de palabras que tiene la oracion.*/
#include<stdio.h>
int main(){

  char oracion[200];
  int i = 0;
  int espacios = 0;
  int palabras = 0;
  printf("Ingrese la oracion: ");
  gets(oracion);


  while(oracion[i] != '\0')
  {
    if(oracion[i] == ' ')
    {
      espacios++;

    }

    i++;
  }

  palabras = espacios+1;

  printf("La cantidad de palabras de la oracion son %d", palabras);

  return 0;
}
