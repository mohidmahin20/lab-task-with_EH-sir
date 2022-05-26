#include<stdio.h>
int main(){
    int n,N,N1,sum;
    printf("Enter a Number:");
    scanf("%d",&n);
    N=n%10;
    while(n>0){
        N1=n%10;
        n=n/10;
    }
    sum = N+N1;
    printf("Sum of First and Last digit is = %d\n",sum);

    return 0;
}
