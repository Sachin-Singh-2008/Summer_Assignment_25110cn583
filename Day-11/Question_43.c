#include<stdio.h>

int is_prime(int x)
{
    int flag=1;

    for(int i=2; i<=x/2; i++)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
    }

    return flag;
}

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("\nThe entered number is ");

    if(is_prime(num))
    {
        printf("a prime number.");
    }
    else
        printf("not a prime number.");

     return 0;   
}