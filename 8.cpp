#include<stdio.h>
int main(){
    int n,N,reverse=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    while(n>0){
        N=n%10;
        reverse = reverse*10+N;
        n=n/10;
    }
    printf("The Reverse Number is %d\n",reverse);

    return 0;
}
