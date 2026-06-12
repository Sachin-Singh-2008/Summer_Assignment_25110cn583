#include<stdio.h>

int main()
{
    int n,sum=0;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[n];

    printf("\nEnter the elements of the array : \n");
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe elements entered in the array are : \n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }   
    
    printf("\nThe sum of the entered array is %d. \n", sum);

    printf("\nThe average of the entered array is %d.", sum/n);

    return 0;
}
