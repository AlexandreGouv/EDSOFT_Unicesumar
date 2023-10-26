#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    
    int mat[3][3], x = 0, y = 0;

    // Inicializando a matriz
    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++)
            mat[x][y] = x * y; // ou qualquer valor que você deseja inicializar

    // Imprimindo a matriz
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%d ", mat[x][y]);
        }
        printf("\n");
    }

    return 0;
}