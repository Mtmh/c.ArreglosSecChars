#include <stdio.h>

int main(void)
{
    char *palabras[] = { "hola", "Adios", "programacion", "Sotware" };

    int i, tam = sizeof(palabras) / sizeof(char *);

    for (i = 0; i < tam; ++i)
        printf("%s\n", palabras[i]);
    printf("\n");
    return 0;
}
