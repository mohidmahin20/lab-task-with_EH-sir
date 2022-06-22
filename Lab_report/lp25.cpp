#include<stdio.h>

int main(){
   
    int number,option,count=0;
    double number2,factorial=1;

    printf("Select a option:\n1. Factorial\n2. Prime\n3. ODD\n4. EVEN\n");
    scanf("%d",&option);

    switch (option)
    {
    case 1: 
    printf("Enter a number:");
    scanf("%lf",&number2);
    for(int i=1;i<=number2;i++){
        factorial = factorial*i;
    } 
    printf("Factorial %lf = %lf\n",number2,factorial);
        break;
    
    case 2: 
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
        break;

    case 3: 
    printf("Enter a number:");
    scanf("%d",&number);
    if(number%2 != 0){
        printf("%d is a ODD number\n",number);
    } 
        break;

    case 4: 
    printf("Enter a number:");
    scanf("%d",&number);
    if(number%2 == 0){
        printf("%d is a EVEN number\n",number);
    }
        break;
    
    default: 
    printf("Invalid Option\n");
        break;
    }
    
    return 0;
}
