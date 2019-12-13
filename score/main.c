#include <stdio.h>

int main(){
    int score;
        scanf("%d",&score);
        switch(score/10){
        case 10:
        case 9:
            printf("优秀");
            break;
        case 8:
            printf("良好");
            break;
        case 7:
            printf("中等");
            break;
        case 6:
            printf("及格");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("不及格");
            break;
        default:
            printf("error!!!");
            break;
        }
    return 0;
}
