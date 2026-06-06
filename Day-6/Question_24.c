#include<stdio.h>

int main()
{
    int num, pwr, sol=1;

    printf("Enter the base number : ");
    scanf("%d", &num);

    printf("\nEnter the power number : ");
    scanf("%d", &pwr);

    printf("\nThe solution of the expression %d raised to the power of %d is : ", num, pwr);

    for(int i=1; i<=pwr; i++)
    {
        sol*=num;
    }

    printf("%d", sol);

    return 0;
}