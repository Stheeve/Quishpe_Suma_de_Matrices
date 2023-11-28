#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

    printf("Priera matriz\n");

for (int i = 0; i < n; i++)
{
    printf("\n");

    for (int j = 0; j < m; j++)
    {
        matrix[i][j]=rand()%101;

        printf("%d \t", matrix[i][j]);
    }
    
}
    

    printf("\n");
    printf("\n");
    printf("Segunda matriz\n");

for (int i = 0; i < n; i++)
{
    printf("\n");

    for (int j = 0; j < m; j++)
    {
        matrix1[i][j]=rand()%101;

        printf("%d \t", matrix1[i][j]);
    }
    
}

}
