#include<stdio.h>

int max(int n, int a[])
{
    int maxi;
    maxi=a[0];
    
    for(int i=0; i<n-1; i++)
    {
        if(maxi<a[i+1])
        {
            maxi=a[i+1];
        }
    }

    return maxi;
}

int main()
{
    int n;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    int ar[n];

    printf("\nEnter the elements of the array : ");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("\nThe maximun element in the array is : %d", max(n, ar));

    return 0;
}


