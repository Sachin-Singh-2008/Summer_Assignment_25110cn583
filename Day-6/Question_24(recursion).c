#include<stdio.h>

int power(int x, int y)
{
    if(y==0)
        return 1;
    else
        return x*power(x,y-1);
}

int main()
{ 
    int num, pwr, sol;

    printf("Enter the base number : ");
    scanf("%d", &num);

    printf("\nEnter the power number : ");
    scanf("%d", &pwr);

    sol=power(num,pwr);

    printf("\nThe solution to expression %d raised to power %d is : %d", num, pwr, sol);
    
    return 0;
}