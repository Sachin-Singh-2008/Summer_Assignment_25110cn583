#include<stdio.h>

int sum_digits(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10)+sum_digits(n/10);
}

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);
    
    printf("\nThe sum of digits of the entered number is : %d", sum_digits(num));

    return 0;
}