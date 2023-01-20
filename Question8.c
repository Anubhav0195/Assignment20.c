#include<stdio.h>
int main()
{
    int arr[5];
    int i,sum=0;
    int *ptr;
    printf("Enter the array elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    for(i=0;i<5;i++)
    {
        sum=sum+*ptr;
        ptr++;
    }
    printf("The sum of the array is %d",sum);
}