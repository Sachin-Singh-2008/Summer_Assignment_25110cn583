#include<stdio.h>

int main()
{
    int n;

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

    int max=a[0], min=a[0];

    for (int i = 0; i < n; i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("\nThe maximum and minimun elements of the array are %d and %d respectively.", max, min);
    
    return 0;
}
