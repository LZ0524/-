#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *p;
    FILE *sp;
    int ch;
    if((p=fopen("data.txt","rb"))==NULL)
    {
        printf("Failure to open data.txt!\n");
        exit(0);
    }
    if((sp=fopen("data1.txt","wb"))==NULL)
    {
        printf("Failure to open data1.txt!\n");
        exit(0);
    }
    while(fscanf(p,"%d",&ch)!=EOF)
    {
        fscanf(p,"%d",&ch);
        if(ch%2==0)
        {
            ch=ch-1;
        }
        else
        {
            ch=ch+1;
        }
        fprintf(sp,"%5d",ch);
    }
    fclose(p);
    fclose(sp);
    return 0;
}
