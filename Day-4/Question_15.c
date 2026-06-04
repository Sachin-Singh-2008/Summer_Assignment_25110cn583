#include<stdio.h>
#include<math.h>

int main()
{
    int n, temp, count=0, arm=0;

    printf("Enter the number : ");

    scanf("%d", &n);

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
    
    printf("\nThe entered number is ");

    if(arm==n)
        printf("armstrong");
    else
        printf("not armstrong");

    return 0;
}