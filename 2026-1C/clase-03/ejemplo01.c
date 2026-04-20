#include <stdio.h>

//Int argc
//Es un número entero. Te dice cuántas palabras escribiste en la terminal para ejecutar el programa (incluyendo el nombre del programa mismo).

//char *argv[]
//Es un arreglo de cadenas de caracteres (strings). Cada elemento del arreglo es una palabra que escribiste en la terminal. El primer elemento (argv[0]) es el nombre del programa, y los siguientes elementos (argv[1], argv[2], etc.) son las palabras adicionales que escribiste.
int main(int argc, char *argv[]) {
    printf("Numero de argumentos (argc): %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
