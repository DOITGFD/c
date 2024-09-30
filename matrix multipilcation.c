#include<stdio.h>
int main()
{
    int rows,cols;
    printf("enter number of rows:/n");
    scanf("%d",&rows);
    printf("enter number of cols:/n");
    scanf("%d",&cols);
    int a[rows][cols];
    int b[rows][cols];
    int result[rows][cols];
    printf("enter A matrix/n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter B matrix/n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[i][j]=0;
            for(int k=0;k<cols;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("result matrix:/n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d/t",result[i][j]);
        }
    }
    printf("/n");
}