#include<stdio.h>

int main(){
    int n,number=1,sum=1;

    printf("How many terms: ");
    scanf("%d",&n);
    printf("%d terms of the Series : 1",n);

    for(int i=1;i<n;i++){
        number=number*10+1;
        printf("+%d",number);
        sum=sum+number;
    }
    printf("\n");
    printf("Sum = %d\n",sum);

    return 0;
}
