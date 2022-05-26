#include<stdio.h>
int main(){
    char n;
    printf("Enter any Character:");
    scanf("%c",&n);
    if(n>='A' && n<='Z'){
        printf("Capital Letter\n");
    }
    else if(n>='a' && n<='z'){
        printf("Small Letter\n");
    }
    else if(n>='0' && n<='9'){
        printf("Digit\n");
    }
    else{
        printf("Special Symbol\n");
    }
    
    return 0;
}
