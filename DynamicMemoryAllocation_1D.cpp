// #include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n,i;
    
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    
    arr = (int *) malloc (n * (sizeof(int)));

    printf("Enter The array : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);    }
    printf("Given Array is : ");
    for(i = 0; i < n; i++) 
    {
        printf("%d  ",arr[i]);
    }
    printf("\n Size of Array is %d ",sizeof(char));
    free(arr);
    return 0;
}