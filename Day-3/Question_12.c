#include<stdio.h>

int main()
{
    int Gcd, n1, n2, lcm;

    printf("Enter the numbers : ");

    scanf("%d%d", &n1, &n2);

    for(int i=1; i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            Gcd=i;
        }
    }

    lcm=(n1*n2)/Gcd;

    printf("\nThe LCM of the entered number is : %d", lcm);

    return 0; 
}