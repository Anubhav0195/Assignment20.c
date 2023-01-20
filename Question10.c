#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char s1[100],s2[100];
    char *p1,*p2;
    printf("Enter a string:\n");
    gets(s1);
    p1=s1+strlen(s1)-1;
    p2=s2;
    while(p1>s1)
    {
        *p2 = *p1;
        p2++;
        p1--;
    } 
    *p2 ='\0';
    printf("String before reverse:%s\n",s1);
    printf("String after reverse:%s\n",s2);
    return 0;
   

}