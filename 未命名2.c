#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef int status;
typedef int elemtype;
typedef elemtype *triplet;

status InitTriplet (triplet &t,elemtype v1,elemtype v2,elemtype v3);
status DestroyTriplet (triplet t);
status get(triplet t,int i,elemtype &e);
status put(triplet &t,int i,elemtype e);
status Max(triplet t,elemtype &e);
status IsAscend(triplet t);

int main()
{
    triplet p;
	elemtype e,v1,v2,v3;
	int i;
	char select;
	printf("输入三个数，建立一个三元组\n");
	scanf("%d%d%d",&v1,&v2,&v3);
	if (InitTriplet(p,v1,v2,v3)==OVERFLOW)
    {
        printf("分配失败！");
    }
    else
    do
    {
        printf("1:取三元组第i个元素\n");
        printf("2:判断三元组元素是否递增\n");
        printf("3:求最大值\n");
        printf("4:置换第i个元素\n");
        printf("0:结束！\n");
        printf("请输入选择！\n");
        getchar();
        scanf("%c",&select);
        switch (select)
        {
            case '1':
                printf("\n");
                printf("i=");
                scanf("%d",&i);
                if (get(p,i,e)==ERROR)
                {
                    printf("i值不合法\n");
                }
                else
                {
                    printf("第%d个元素的值为：%d\n",i,e);
                }
                break;
            case '2':
                if (IsAscend(p)==1)
                {
                    printf("三元组递增有序\n");
                }
                else
                {
                    printf("三元组非递增有序\n");
                }
                    break;
            case '3':
                Max(p,e);
                printf("最大值是：%d\n",e);
                break;
            case '4':
                printf("\n");
                printf("i=");
                scanf("%d",&i);
                printf("\n");
                printf("x=");
                scanf("%d",&e);
                if (put(p,i,e)==ERROR)
                {
                    printf("i值不合法\n");
                }
                else
                {
                    printf("置换第%d个元素后的3个元素分别为：%d,%d,%d\n",i,p[0],p[1],p[2]);
                }
                break;
            case '0':
                printf("操作结束！");
                break;
            default:
                printf("输入选择出错！\n");
        }// end of switch
    }while(select!='0'); //end of while
    DestroyTriplet(p);
}// end of main

status InitTriplet (triplet &t,elemtype v1,elemtype v2,elemtype v3)
{

	t=(elemtype *)malloc(3*sizeof(elemtype));
	if(!t) return OVERFLOW;
	t[0]=v1;t[1]=v2;t[2]=v3;
    return OK;
}
status DestroyTriplet (triplet t)
{
	free(t);
	t=NULL;
    return OK;
}
status get(triplet t,int i,elemtype &e)
{
	if (i<1||i>3) return ERROR;
	e=t[i-1];
	return OK;
}
status put(triplet &t,int i,elemtype e)
{
    if (i<1||i>3) return ERROR;
	t[i-1]=e;
	return  OK;
}
status IsAscend(triplet t)
{
	return (t[0]<t[1])&&(t[1]<t[2]);
}
status Max(triplet t,elemtype &e)
{
  e=(t[0]>=t[1])?((t[0]>=t[2])?t[0]:t[2]):((t[1]>=t[2])?t[1]:t[2]);
  return  OK;
}

