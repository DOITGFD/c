#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the number of rows :\n");
    scanf("%d", &x);
    printf("Enter the number of columns:\n");
    scanf("%d", &y);
    int a[x][y];
    int b[x][y];
    printf("Enter the  matrix:\n");

    //  input  A matrix
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // transpose matrix
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("The transposed matrix is :\n");
    // print matrix
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}