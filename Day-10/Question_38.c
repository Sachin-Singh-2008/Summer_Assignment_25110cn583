#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number of columns in pattern : ");
    scanf("%d", &n);

    for(int i=n; i>0; i--)
    {
        for(int k=n; k>i; k--)
        {
            printf(" ");
        }
        
        for(int x=0; x<i; x++)
        {
            printf("*");
        }
        
        for(int k=0; k<i-1; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}