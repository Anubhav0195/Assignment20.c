#include<stdio.h>
int main()
{
    int n1,n2;
    int *ptr1,*ptr2;
    printf("Enter first number:\n");
    scanf("%d",&n1);
    printf("Enter second number:\n");
    scanf("%d",&n2);
    ptr1=&n1;
    ptr2=&n2;
    if(*ptr1>*ptr2)
    {
        printf("Maximum number is %d",*ptr1);
    }
    else
    {
        printf("Maximum number is %d",*ptr2);
    }
    return 0;
}