#include<stdio.h>

int main()
{
    int n, n1, n2, fibo;

    printf("Enter the number of terms : ");

    scanf("%d", &n);

    printf("\nThe fibonacci series for %d terms are : ", n);

    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("0, ");
            n1=0;
        }
        else if(i==2)
        {
            printf("1, ");
            n2=1;
        }
        else
        {   
            fibo=n1+n2;
            printf("%d, ", fibo);
            n1=n2;
            n2=fibo;
        }
    }
    return 0;
}