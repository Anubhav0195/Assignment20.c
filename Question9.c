#include<stdio.h>
#include<conio.h>
#define max 30
int main()
{
    int size,i,arr[max],*ptr;
    ptr =&arr[0];
    printf("Enter the size of array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr = &arr[size-1];
    printf("Elements of array in reverse order \n");
    for(i=size-1;i>=0;i--)
    {
        printf("%d\n",i+1,*ptr);
        ptr--;
    }
    return 0;

}