#include <stdio.h>

int main(){
    int score;
        scanf("%d",&score);
        switch(score/10){
        case 10:
        case 9:
            printf("����");
            break;
        case 8:
            printf("����");
            break;
        case 7:
            printf("�е�");
            break;
        case 6:
            printf("����");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("������");
            break;
        default:
            printf("error!!!");
            break;
        }
    return 0;
}
