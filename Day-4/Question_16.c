#include<stdio.h>
#include<math.h>

int main()
{
    int n, temp,r1, r2, count=0, arm=0;

    printf("Enter the number : ");

    scanf("%d%d", &r1, &r2);
    
    printf("\nThe armstrong numbers in given range are : ");

    for(int n=r1; n<=r2; n++)
{
    count=0;
    arm=0;
    temp=n;

    while(temp>0)
    {
        count++;
        temp/=10;
    }
    
    temp=n;

    for(int i; temp>0;)
    {
        i=temp%10;
        arm+=pow(i,count);
        temp/=10;
    }
    if(arm==n)
        printf("%d, ", n);
}

    return 0;
}