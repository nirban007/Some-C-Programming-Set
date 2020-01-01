#include<stdio.h>
int main()
{
    int a[100][100],b[100][100], c[100][100],d[100][100];
    int i,j;
    int row;
    printf("Enter the number of row : ");
    scanf("%d", &row);
    int column;
    printf("Enter the number of column : ");
    scanf("%d", &column);
    printf("Enter the first element of first matrix : ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Enter the second element of second matrix : ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            c[i][j] = a[i][j] + b[i][j];

        }
    }
    printf("\n");
    printf("Sum of two matrix : ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");



    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\n");
    printf("Substraction of two matrix : ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d \t",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
