#include <stdio.h>
int main()
{
    int n,posi ,i;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the aray\n");
    for(i=0;i<n;i++)
    {
        scanf("%d" , &arr[i]);
    }
    printf("Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d  " , arr[i]);
    }
    printf("\nEnter the position of the element you want to delete\n");
    scanf("%d",&posi); //2
    for(i = posi - 1;i < n - 1;i++ )
    {
        arr[i] = arr[i + 1];
    }
    printf("Resultant array\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
    
    
    
    
}
