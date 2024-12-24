/*1- Escribir un programa que solicite la edad y si es mayor de 18 años mostrar
 un mensaje que ya puede conducir, si la edad ingresada no es un número válido indicarlo en un mensaje.
*/

#include <stdio.h>

int main() {

    int edad;

    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    while (edad > 0) {

        if (edad >= 18) {
            printf("usted puede conducir\n");
        } else {
            printf("Usted no puede conducir\n");
        }
        printf("Ingrese la siguiente edad, (0) para salir\n");
        scanf("%d", &edad);
    }

    printf("---------programa finalizado---------\n");

    return 0;
}