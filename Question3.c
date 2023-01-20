#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(int**,int**);
int main()
{
    int a[] = {10,8,9,5,7,3,13,15,19,30},i;
    sort(a,10);
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    return 0;

}
void sort(int *ptr,int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}