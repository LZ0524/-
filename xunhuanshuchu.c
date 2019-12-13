#include <stdio.h>
int main()
{
    int i,j,k,m,n=0;  //定义第一个循环的有关实参
    int a,b,d=2,s=2;  //定义第二个循环的有关实参
    scanf("%d",&i);
    int c=i;
    for(j=i;j>0;j--)    //第一个循环,上半部分的输出
    {
        for(m=0;m<n;m++)
        {
            printf(" ");
        }
        for(k=2*i-1;k>0;k--)
        {
            printf("%d",i);
        }
        printf("\n");
        n++;
        i--;
    }
    for(a=c;a>1;a--)   //第二个循环,下半部分的输出
    {
        for(b=0;b<s;b++)
        {
            printf(" ");
        }
        for(i=2*d-1;i>0;i--)
        {
            printf("%d",d);
        }
        printf("\n");
        s--;
        d++;
    }

    return 0;
}
