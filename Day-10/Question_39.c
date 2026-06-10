#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number of columns in pattern : ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++)
    {
        for(int k=n; k>i; k--)
        {
            printf(" ");
        }
        
        for(int x=0; x<i; x++)
        {
            printf("%d", x+1);
        }
        
        for(int k=0; k<i-1; k++)
        {
            printf("%d", k+1);
        }
        
        printf("\n");
    }

    return 0;
}