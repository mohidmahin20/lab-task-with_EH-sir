#include<stdio.h>

int main(){
    int number,count=0;

    printf("Enter a number:");
    scanf("%d",&number);
    
    for(int i=2;i<=number/2;i++){
        if(number%i == 0){
            count = 1;
            break;
        }
    }
    if(count == 1){
        printf("%d is not a Prime number\n",number);
    }
    else{
        printf("%d is a Prime number\n",number);
    }


    return 0;
}
