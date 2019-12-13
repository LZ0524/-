#include <stdio.h>
#include <string.h>
#define M 10
#define N 20
void sortstring(char *name[],int n);
int main()
{
    char name[M][N];
    char *ptr[M];
    for(int a=0;a<M;a++)
    {
        ptr[a]=name[a];
        scanf("%s",name[a]);
    }
    sortstring(ptr,M);
    for(int b=0;b<M;b++)
    {
        printf("%s\n",ptr[b]);
    }
    return 0;
}
void sortstring(char *name[],int n)
{
    char *p=NULL;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                p=name[i];
                name[i]=name[j];
                name[j]=p;
            }
        }
    }
}
