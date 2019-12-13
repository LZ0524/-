#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int find(char *s1,char *s2);
int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    int l=strlen(a);
    char *s1=(char*)malloc(l*sizeof(char));
    char *s2;
    if(s1==NULL)
    {
        exit(1);
    }
    s1=a;
    s2=b;
    find(s1,s2);
    printf("%d",find(s1,s2));
    free(s1);
    return 0;
}
int find(char *s1,char *s2)
{
    int n=strlen(s1);
    for(int i=0;i<n;i++)
    {
        if(*(s1+i)==*s2)
        {
            return i+1;
        }
    }
    return -1;
}
