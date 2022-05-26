#include<stdio.h>
int main(){
    int number,n,reverse_number=0,number1;
    printf("Enter a Number:");
    scanf("%d",&number);
    number1=number;
    while(number>0){
        n = number%10;
        number = number/10;
        reverse_number = reverse_number*10 + n;
    }
    printf("The Reverse Number is %d\n",reverse_number);
    if(number1==reverse_number){
        printf("Original and Reverse Numbers are Equal\n");
    }
    else{
        printf("Original and Reverse Numbers are not Equal\n");
    }
    
    return 0;
}
