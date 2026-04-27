#include <stdio.h>
#include <stdlib.h>

//La compu simpre agrega un \0 al final de un string para 
//saber que termina

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Falta un numero como argumento.\n");
        return 1;
    }

    char *fin; //es una variable de tipo puntero. su trabajo es guardar una direccion de memoria.
    long valor = strtol(argv[1], &fin, 10); //&fin Strtol escribe una direccion de memoria del primer caracter que no pudo procesar

    if (*fin != '\0') {
        printf("El texto '%s' no es un numero valido.\n", argv[1]);
    } else {
        printf("Numero convertido: %ld\n", valor);
    }

    return 0;
}


