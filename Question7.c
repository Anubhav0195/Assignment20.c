#include<stdio.h>
int main()
{
    char str[100];
    char *p;
    int vcount=0,ccount=0;
    printf("Enter the string:\n");
    fgets(str,100,stdin);
    p=str;
    while(*p!='\0')
    {
        if(*p=='A'|| *p=='E' || *p=='I'|| *p=='O'|| *p=='U' || *p=='a'|| *p=='e'|| *p=='i'|| *p=='o'|| *p=='u')
        {
            vcount++;
        }
        else{
            ccount++;
        }
        p++;
    }
    printf("Number of Vowel in string:%d\n",vcount);
    printf("Number of constant in string%d\n",ccount);
    return 0;
}