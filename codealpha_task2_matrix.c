/*---------------------------------------------------------------------------------------------------------------------------------------------------------
Name : Chandana Jakkapalli
Internship : CodeAlpha C Programming Internship
Task : Matrix Operations
-----------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j,k;

    //Taking input for first matrix
    printf("Enter elements of first matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //Taking input for first matrix
    printf("Enter second matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //Matrix Addition
    printf("\nMatrix Addition:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    //Matrix Multipication
    printf("\nMatrix Multiplication:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;

            for(k=0;k<2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }

            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    //Transpose of first matrix
    printf("\nTranspose of First Matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
