#include<stdio.h>
int main(){
    int n,N,sum=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    while (n>0)
    {
        N=n%10;
        n=n/10;
        sum += N;
    }
    printf("Sum of the Digits = %d\n",sum);
    
    return 0;
}
