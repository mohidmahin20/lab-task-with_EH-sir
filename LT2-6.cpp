#include<stdio.h>
int main(){
    int angle1,angle2,angle3,sum_of_angle;
    printf("Enter the value of Three Angles:");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    sum_of_angle = angle1+angle2+angle3;
    if(sum_of_angle==180){
        printf("This is a valid Triangle\n");
    }
    else{
        printf("This is not a valid Triangle\n");
    }

    return 0;
}
