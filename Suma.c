#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Librerias que se usaron

int main(){
srand (time(NULL));
int n,m;
printf("Coloque los datos de n\n");
scanf("%d", &n);
printf("Coloque los datos de m\n");
scanf("%d", &m);

int matrix[n][m];
int matrix1[n][m];
int matrix2[n][m];
//Variable de las diferentes matrices 

    printf("Priera matriz\n");

for (int i = 0; i < n; i++)
{
    printf("\n");

    for (int j = 0; j < m; j++)
    {
        matrix[i][j]=rand()%101;
        //numeros random con el cero al 100

        printf("%d \t", matrix[i][j]);
    }
    
}//for para la primera matriz con numeros random de 0 al 100

    printf("\n");
    printf("\n");
    printf("Segunda matriz\n");

for (int i = 0; i < n; i++)
{
    printf("\n");

    for (int j = 0; j < m; j++)
    {
        matrix1[i][j]=rand()%101;
        //numeros random con el cero al 100

        printf("%d \t", matrix1[i][j]);
    }
    
}
    printf("\n");
    printf("\n");
    printf("Resultado de la suma de las dos matrices\n");

for (int i = 0; i < n; i++)
{
    printf("\n");

    for (int j = 0; j < m; j++)
    {
        matrix2[i][j]=matrix[i][j]+matrix1[i][j];
        //suma de las dos matrices

        printf("%d \t", matrix2[i][j]);
    }
    
}

}
