#include<stdio.h>

int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("The factorial of the entered number is %d", fact(num));

    return 0;
}