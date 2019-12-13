#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct STUDENT *APPENDSTUDENT(struct STUDENT *head);   //添加学生信息
void DISPLAY_student(struct STUDENT *head);    //显示学生信息
void SEEK_student(struct STUDENT *head);      //查找学生信息
struct STUDENT *DELETE_student(struct STUDENT *head);   //删除学生信息
void DELETE(struct STUDENT *head);   //释放内存
typedef struct STUDENT
{
    int studentID;
    char studentNAME[20];
    float studentGREDE;
    struct STUDENT *next;
}stu;
int main()
{
    int i=1;
    char a;
    stu *head=NULL;
    printf("Do you want append a new student(Y/N)?");
    scanf("%c",&a);
    printf("\n");
    while(a=='Y'||a=='y')
    {
        head=APPENDSTUDENT(head);
        printf("Do you want append a new student(Y/N)?");
        getchar();
        scanf("%c",&a);
        printf("\n");
        i++;
    }
    SEEK_student(head);
    DELETE_student(head);
    DISPLAY_student(head);
    DELETE(head);
    return 0;
}
struct STUDENT *APPENDSTUDENT(struct STUDENT *head) //添加学生信息
{
    stu *p=NULL,*pr=head;
    int s1;
    char s2[20];
    float s3;
    p=(stu *)malloc(sizeof(stu));
    if(p==NULL)
    {
        printf("No enough memory to allocate!\n");
        exit(0);
    }
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        while(pr->next!=NULL)
        {
            pr=pr->next;
        }
        pr->next=p;
    }
    printf("Input studentID: ");
    scanf("%d",&s1);
    printf("\n");
    getchar();
    printf("Input studentNAME: ");
    gets(s2);
    printf("\n");
    printf("Input studentGRADE): ");
    scanf("%f",&s3);
    printf("\n");
    p->studentID=s1;
    strcpy(p->studentNAME,s2);
    p->studentGREDE=s3;
    p->next=NULL;
    return head;
};
void SEEK_student(struct STUDENT *head)  //查找学生
{
    stu *p=head;
    int b;
    printf("Input studentID(SEEK): ");
    scanf("%d",&b);
    while(b!=p->studentID)
    {
        p=p->next;
    }
    printf("\n");
    printf("studenID: %d\n\n",p->studentID);
    printf("studentNAME: ");
    puts(p->studentNAME);
    printf("\n");
    printf("studentGRADE: %.2f\n\n",p->studentGREDE);
}
struct STUDENT *DELETE_student(struct STUDENT *head)  //删除学生
{
    stu *p=head,*pr=head;
    int ID;
    printf("\n");
    printf("Input studentID(DELETE): ");
    scanf("%d",&ID);
    if(head==NULL)
    {
        printf("No student date!\n");
        return(head);
    }
    while(ID!=p->studentID&&p->studentID!=NULL)
    {
        pr=p;
        p=p->next;
    }
    if(ID==p->studentID)
    {
        if(p==head)
        {
            head=p->next;
        }
        else
        {
            pr->next=p->next;
        }
        free(p);
    }
    else
    {
        printf("This student has not been found!\n");
    }
    return head;
}
void DISPLAY_student(struct STUDENT *head)   //显示学生信息
{
    stu *p=head;
    printf("\n");
    printf("student data:\n");
    while(p!=NULL)
    {
        printf("\n");
        printf("studenID: %d\n\n",p->studentID);
        printf("studentNAME: ");
        puts(p->studentNAME);
        printf("\n");
        printf("studentGRADE: %.2f\n\n",p->studentGREDE);
        p=p->next;
    }
}
void DELETE(struct STUDENT *head)  //释放链表节点内存
{
    stu *p=head,*pr=NULL;
    while(p!=NULL)
    {
        pr=p;
        p=p->next;
        free(pr);
    }
}
