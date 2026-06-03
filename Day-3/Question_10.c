#include<stdio.h>

int main()
{
    int r1, r2, flag=1;

    printf("Enter the intial value of range : ");

    scanf("%d%d", &r1, &r2);

    printf("\nThe prime numbers present in given range are : ");


    for(int n=r1; n<=r2; n++)
    {
        for(int i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        
        }
        if(flag==1)
            printf("%d, ", n);
        else
            flag=1;
    }


    return 0;
}