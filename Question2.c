#include<stdio.h>
#include<stdlib.h>
void swap(char**,char**);
int main()
{
    char *str1="Manju";
    char *str2="Rita";
     printf("Before swaapping;\n");
    printf("str1 =%s\n",str1);
    printf("str2 =%s\n",str2);
    swap(&str1,&str2);
    printf("After swapping;\n");
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);
    
    return 0;

}
void swap(char**str1,char**str2)
{
    char *t=NULL;
    t=*str1;
    *str1=*str2;
    *str2=t;
    
}