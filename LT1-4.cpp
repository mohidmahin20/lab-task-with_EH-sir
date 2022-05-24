#include<stdio.h>
int main(){
    float Fahrenheit,Centigrade;
    printf("Enter the Temperature in Fahrenheit:");
    scanf("%f",&Fahrenheit);
    Centigrade = (Fahrenheit-32)/1.8;
    printf("The Temperature is %.2f Degree Centigrade\n",Centigrade);

    return 0;
}
