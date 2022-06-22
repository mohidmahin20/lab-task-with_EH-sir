#include<stdio.h>

int main(){
    double number,factorial=1;

    printf("Enter a number:");
    scanf("%lf",&number);

    for(int i=1;i<=number;i++){
        factorial = factorial*i;
    } 

    printf("Factorial %lf = %lf\n",number,factorial);

    return 0;
}
