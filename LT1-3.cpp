#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,aggregate;
    float percentage_mark;
    printf("Enter 1st Subject Number:");
    scanf("%d",&m1);
    printf("Enter 2nd Subject Number:");
    scanf("%d",&m2);
    printf("Enter 3rd Subject Number:");
    scanf("%d",&m3);
    printf("Enter 4th Subject Number:");
    scanf("%d",&m4);
    printf("Enter 5th Subject Number:");
    scanf("%d",&m5);
    aggregate = m1+m2+m3+m4+m5;
    percentage_mark = (aggregate/500.00)*100;
    printf("The Aggregate Number is %d\n",aggregate);
    printf("The Percentage Mark is %.2f\n",percentage_mark);


    return 0;
}
