/*Ingresar por teclado una palabra y mostrar cuantos caracteres tiene

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra [31];

    printf("Ingrese la palabra: ");
    gets(palabra);

    //En esta parte declaramos la funcion strlen que se almacene en la variable cantidad
    int cantidad = strlen(palabra);

    printf("La palabra %s tiene %i letras",palabra,cantidad);



    return 0;
}*/

/*Ingresar dos nombres por teclado. Mostrar un mensaje si son iguales y sino mostrar el que es mayor alfabéticamente.
#include<stdio.h>
#include<string.h>

int main(){

  char nom1 [21];
  char nom2 [21];
  int comp = 0;

  printf("Ingrese el primer nombre: ");
  gets(nom1);
  printf("Ingrese el segundo nombre: ");
  gets(nom2);

  comp = strcmp(nom1,nom2);

  if (comp == 0){
  printf("Los nombres ingresados son exactamente iguales.");

  }else if(comp > 0){
  printf("La cadena 1 es mayor, siendo su contenido: %s",nom1);
  }else if(comp < 0 ){
  printf("La cadena 2 es mayor, siendo su contenido: %s",nom2);
  }


  return 0;
}*/

/*Cargar por teclado dos nombres de personas que tengan distinta cantidad de caracteres.
 *  Almacenar un tercer vector de caracteres el nombre que tenga mas caracteres. Luego imprimir dicho valor.

#include<stdio.h>
#include<string.h>

int main(){

  char nom1[21];
  char nom2[21];
  char nombreMayor[21];

  printf("ingrese el primer nombre: ");
  gets(nom1);
  printf("ingrese el segundo nombre: ");
  gets(nom2);


  if(strlen(nom1) == strlen(nom2)){
  printf("Los nombres son alfabeticamente iguales, usted ingreso: %s y %s",nom1,nom2);
  }else if (strlen(nom1) > strlen(nom2)){
  strcpy(nombreMayor,nom1);
  printf("El nombre mayor alfabeticamente es: %s",nombreMayor);
  }else if(strlen(nom1) < strlen(nom2)){
  strcpy(nombreMayor,nom2);
  printf("El nombre mayor es: %s",nombreMayor);
  }
    return 0;
}*/

/*Cargar por teclado dos variables de tipo string el nombre y apellido de una persona. Definir un tercer String y guardar la concatenacion de nombre y apellido
#include<stdio.h>
#include<string.h>
int main(){

  char nombre [21];
  char apellido [21];
  char nombreYApellido [42];

  printf("Ingrese el nombre: ");
  gets(nombre);
  printf("Ingrese el apellido: ");
  gets(apellido);

  strcpy(nombreYApellido,nombre);
  strcat(nombreYApellido," ");
  strcat(nombreYApellido,apellido);

  printf("%s",nombreYApellido);

  return 0 ;

}*/

/*Confeccionar un programa que pida ingresar el nombre de usuario y clave en dos strings. Mostrar un mensaje Correcto si se ingresa como clave la cadena "abc123"
#include<stdio.h>
#include<string.h>

int main(){
  char user[21];
  char pass[21];
  char claveCorrecta [10] = "abc123";
  printf("Ingrese el usuario: ");
  gets(user);
  printf("Ingrese la contrasenia: ");
  gets(pass);



  if(strcmp(pass,claveCorrecta) == 0){
      printf("Ingreso aprobado.");
  }else{
  printf("Contrasena incorrecta, por favor intente nuevamente.");
  }

  return 0;

}*/

