#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter the value of a and b ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("The valu of a=%d and b=%d",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}