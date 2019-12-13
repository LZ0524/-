#include <iostream>  
#include <cstdlib> //�ṩһЩ��������ų��� 
#include <string>  
  
using namespace std;  
  
class Student//ѧ����  
{  
public:  
    ~Student();//��������  
    void InputStudent(void);//����ѧ����Ϣ  
    void OutputStudent(void);//���ѧ����Ϣ  
    void DeleteStudent(void);//ɾ��ѧ����Ϣ  
    void SearchStudent(void);//����ѧ����Ϣ  
    void ChangeStudent(void);//�޸�ѧ����Ϣ  
    void ScortByChinese(void);//��ѧ�������ĳɼ�����  
    void ScortByMath(void);  //��ѧ������ѧ�ɼ�����  
    void ScortByEnglish(void);//��ѧ����Ӣ��ɼ�����  
    void ScortByTotal(void);//��ѧ�����ܷ�����  
   
private:  
    Student *St;     //ѧ����ָ��  
    int Size;       //ѧ��������      
    string Name;    //����  
    int Age;        //����  
    int No;         //ѧ��  
    float Score[3];//���Ƶĳɼ�  
    float Total;  //�ܷ�  
    float Ave;   //ƽ����  
};  
  
//��������  
Student::~Student()  
{  
    delete(St);  
}  
  
//����ѧ������Ϣ  
void Student::InputStudent(void)  
{  
    int len;//ѧ��������  
    cout<<"������ѧ��������:";  
    cin>>len;  
  
    system("cls");  
  
    Size = len;  
  
    St = new Student[Size];  
  
    for(int i=0; i<len; i++)  
    {  
        cout<<"�������"<<i+1<<"��ѧ��������:";  
        cin>>St[i].Name;  
  
        cout<<"�������"<<i+1<<"��ѧ��������:";  
        cin>>St[i].Age;  
  
        cout<<"�������"<<i+1<<"��ѧ����ѧ��:";  
        cin>>St[i].No;  
  
        cout<<"�������"<<i+1<<"��ѧ�������ĳɼ�:";  
        cin>>St[i].Score[0];  
  
        cout<<"�������"<<i+1<<"��ѧ������ѧ�ɼ�:";  
        cin>>St[i].Score[1];  
  
        cout<<"�������"<<i+1<<"��ѧ����Ӣ��ɼ�:";  
        cin>>St[i].Score[2];  
  
        St[i].Total = St[i].Score[0] + St[i].Score[1] + St[i].Score[2];  
  
        St[i].Ave = St[i].Total / 3.0f;  
  
        system("cls");  
    }  
}  
  
//���ѧ������Ϣ  
void Student::OutputStudent(void)  
{  
    cout<<"����  ����   ѧ��   ����   ��ѧ  Ӣ��  �ܷ�  ƽ����"<<endl;  
  
    for(int i=0; i<Size; i++)  
    {  
        cout<<St[i].Name<<"  "<<St[i].Age<<"  "<<St[i].No<<"  "<<St[i].Score[0]<<"  "<<St[i].Score[1]<<"  "<<St[i].Score[2]<<"  "  
               <<St[i].Score[2]<<"  "<<St[i].Total<<"  "<<St[i].Ave<<endl;  
    }  
}  
  
void Student::DeleteStudent(void)//ɾ��ѧ����Ϣ  
{  
    string str;  
    cout<<"����������Ҫɾ����ѧ��������:";  
    cin>>str;  
  
    int num;//����������ʱ���±�  
  
    //Ѱ���������ʱ���±�  
    for(int i=0; i<Size; i++)  
    {  
        //���������ʱ  
        if(str == St[i].Name)  
        {  
            num = i;  
        }  
    }  
  
    //�������ѧ����ǰ��  
    for(int j=num+1; j<Size; j++)  
    {  
        St[j-1] = St[j];  
    }  
  
    Size -= 1;//ѧ����������һ��   
}  
  
void Student::SearchStudent(void)//����ѧ����Ϣ  
{  
    string name;  
    cout<<"����������Ҫ���ҵ�ѧ��������:";  
    cin>>name;  
  
    int i;  
  
    for(i=0; i<Size; i++)  
    {  
        if(name == St[i].Name)  
        {  
            break;  
        }  
    }  
  
    cout<<St[i].Name<<" "<<St[i].Age<<" "<<St[i].No<<" "<<St[i].Score[0]<<" "<<St[i].Score[1]<<" "  
           <<St[i].Score[2]<<" "<<St[i].Total<<" "<<St[i].Ave<<endl;  
}  
  
void Student::ChangeStudent(void)//�޸�ѧ����Ϣ  
{  
     string name;  
    cout<<"����������Ҫ�޸ĵ�ѧ��������:";  
    cin>>name;  
  
    int i;  
  
    for(i=0; i<Size; i++)  
    {  
        if(name == St[i].Name)  
        {  
            break;  
        }  
    }  
      
    cout<<"�޸�ǰѧ������Ϣ:"<<endl;  
      cout<<St[i].Name<<" "<<St[i].Age<<" "<<St[i].No<<"  "<<St[i].Score[0]<<" "<<St[i].Score[1]<<" "  
           <<St[i].Score[2]<<" "<<St[i].Total<<" "<<St[i].Ave<<endl<<endl;  
  
    cout<<"������ѧ��������:";  
    cin>>St[i].Name;  
  
    cout<<"������ѧ��������:";  
    cin>>St[i].Age;  
  
    cout<<"������ڸ�ѧ����ѧ��:";  
    cin>>St[i].No;  
  
    cout<<"������ѧ�������ĳɼ�:";  
    cin>>St[i].Score[0];  
  
    cout<<"������ѧ������ѧ�ɼ�:";  
    cin>>St[i].Score[1];  
  
    cout<<"�������ѧ����Ӣ��ɼ�:";  
    cin>>St[i].Score[2];  
  
    St[i].Total = St[i].Score[0] + St[i].Score[1] + St[i].Score[2];  
  
    St[i].Ave = St[i].Total / 3.0f;  
}  
  
void Student::ScortByChinese(void)//��ѧ�������ĳɼ�����  
{  
    //�ṩ���������е�����  
    for(int i=1; i<Size; i++)  
    {  
        int j = i-1;  
  
        //���������е�����  
        Student temp = St[i];  
  
        while(temp.Score[0] > St[j].Score[0] && j>=0)  
        {  
            St[j+1]  = St[j];  
              
            j--;  
        }  
  
        St[++j] = temp;  
    }  
}  
  
void Student::ScortByMath(void)//��ѧ������ѧ�ɼ�����  
{  
    //�ṩ���������е�����  
    for(int i=1; i<Size; i++)  
    {  
        int j = i-1;  
  
        //���������е�����  
        Student temp = St[i];  
  
        while(temp.Score[1] > St[j].Score[1] && j>=0)  
        {  
            St[j+1]  = St[j];  
              
            j--;  
        }  
  
        St[++j] = temp;  
    }  
}  
  
void Student::ScortByEnglish(void)//��ѧ����Ӣ��ɼ�����  
{  
    //�ṩ���������е�����  
    for(int i=1; i<Size; i++)  
    {  
        int j = i-1;  
  
        //���������е�����  
        Student temp = St[i];  
  
        while(temp.Score[2] > St[j].Score[2] && j>=0)  
        {  
            St[j+1]  = St[j];  
              
            j--;  
        }  
  
        St[++j] = temp;  
    }  
}  
  
void Student::ScortByTotal(void)//��ѧ�����ܷ�����  
{  
    //�ṩ���������е�����  
    for(int i=1; i<Size; i++)  
    {  
        int j = i-1;  
  
        //���������е�����  
        Student temp = St[i];  
  
        while(temp.Total  > St[j].Total && j>=0)  
        {  
            St[j+1]  = St[j];  
      
            j--;  
        }  
  
        St[++j] = temp;  
    }  
}  
  
int main()  
{  
    cout<<"================================================================================\n"<<endl;    
    cout<<"================================================================================\n"<<endl;    
    cout<<"*************************��ӭʹ��ѧ���ɼ�����ϵͳ*******************************\n"<<endl;    
    cout<<"--------------------------------------------------------------------------------\n"<<endl;    
    cout<<"********************************************************************************\n"<<endl;    
    cout<<"================================================================================\n"<<endl;    
      
    cout<<"�밴���⽫����ѧ������ϵͳ:"<<endl;    
    getchar();    
    system("cls");    
    
    cout<<"================================================================================\n\n";    
    cout<<"------------------------ ��ѡ��Ҫ���������-----------------------------------\n\n";    
    cout<<"-------------------------- 1 ����ѧ����Ϣ--------------------------------------\n\n";    
    cout<<"-------------------------- 2 ���ѧ����Ϣ--------------------------------------\n\n";    
    cout<<"-------------------------- 3 ɾ��ѧ����Ϣ--------------------------------------\n\n";    
    cout<<"-------------------------- 4 ����ѧ����Ϣ--------------------------------------\n\n";    
    cout<<"-------------------------- 5 �޸�ѧ����Ϣ--------------------------------------\n\n";    
    cout<<"-------------------------- 6 ��ѧ�������ĳɼ����Ӵ�С��----------------------\n\n";    
    cout<<"-------------------------- 7 ��ѧ������ѧ�ɼ����Ӵ�С��----------------------\n\n";    
    cout<<"-------------------------- 8 ��ѧ����Ӣ��ɼ����Ӵ�С��----------------------\n\n";    
    cout<<"-------------------------- 9 ��ѧ�����ܳɼ����Ӵ�С��------------------------\n\n";    
    cout<<"================================================================================\n\n";    
      
    int Item;//��������  
  
    Student st;//ѧ������  
  
    while(1)    
   {    
        cout<<"��ѡ���������:";    
        cin>>Item;    
        system("cls");//����    
    
       switch(Item)    
        {    
            case 1://����ѧ����Ϣ    
            {    
                st.InputStudent();    
            }    
            break;    
    
            case 2://���ѧ����Ϣ    
            {    
                st.OutputStudent();    
            }    
            break;    
    
          case 3://ɾ��ѧ����Ϣ    
            {    
                st.DeleteStudent();    
           }    
            break;    
    
            case 4://����ѧ����Ϣ    
            {    
                st.SearchStudent();    
            }    
            break;    
    
            case 5://�޸�ѧ����Ϣ    
            {    
               st.ChangeStudent();     
            }                
            break;    
   
            case 6://��ѧ�������ĳɼ�����    
            {    
                st.ScortByChinese();    
               st.OutputStudent();    
            }    
            break;    
    
            case 7://��ѧ������ѧ�ɼ�����    
            {    
                st.ScortByMath();    
                st.OutputStudent();    
            }    
            break;    
    
            case 8://��ѧ����Ӣ��ɼ�����    
            {    
                st.ScortByEnglish();    
                st.OutputStudent();    
            }    
            break;    
    
            case 9://��ѧ�����ܷ�����    
            {    
                st.ScortByTotal();    
                st.OutputStudent();  
            }    
            break;    
            default:    
            break;    
        }    
    }    
    
    system("pause");    
    return 0;
}   
