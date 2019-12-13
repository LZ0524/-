#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *delk(char *sp);
int main()
{
    char a[100];
    gets(a);
    int l=strlen(a);
    char *sp=(char*)malloc(l*sizeof(char));
    if(sp==NULL)
    {
        exit(1);
    }
    sp=a;
    delk(sp);
    free(sp);
    return 0;
}
char *delk(char *sp)
{
    int i=strlen(sp);
    for(int m=0;m<i;m++)
    {
        if(*(sp+m)!='$')
        {
            printf("%c",*(sp+m));
        }
    }
    return 0;
}
