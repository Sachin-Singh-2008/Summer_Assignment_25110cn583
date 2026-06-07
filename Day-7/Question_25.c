#include<stdio.h>

int fact(int x)
{
    if(x==0 || x==1)
        return 1;
    else
        return x*fact(x-1);
}

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("\nThe factorial of the entered number is : %d", fact(n));

    return 0;
}