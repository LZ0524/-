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
	printf("����������������һ����Ԫ��\n");
	scanf("%d%d%d",&v1,&v2,&v3);
	if (InitTriplet(p,v1,v2,v3)==OVERFLOW)
    {
        printf("����ʧ�ܣ�");
    }
    else
    do
    {
        printf("1:ȡ��Ԫ���i��Ԫ��\n");
        printf("2:�ж���Ԫ��Ԫ���Ƿ����\n");
        printf("3:�����ֵ\n");
        printf("4:�û���i��Ԫ��\n");
        printf("0:������\n");
        printf("������ѡ��\n");
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
                    printf("iֵ���Ϸ�\n");
                }
                else
                {
                    printf("��%d��Ԫ�ص�ֵΪ��%d\n",i,e);
                }
                break;
            case '2':
                if (IsAscend(p)==1)
                {
                    printf("��Ԫ���������\n");
                }
                else
                {
                    printf("��Ԫ��ǵ�������\n");
                }
                    break;
            case '3':
                Max(p,e);
                printf("���ֵ�ǣ�%d\n",e);
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
                    printf("iֵ���Ϸ�\n");
                }
                else
                {
                    printf("�û���%d��Ԫ�غ��3��Ԫ�طֱ�Ϊ��%d,%d,%d\n",i,p[0],p[1],p[2]);
                }
                break;
            case '0':
                printf("����������");
                break;
            default:
                printf("����ѡ�����\n");
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

