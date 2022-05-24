#include<stdio.h>
int main(){
    int n,note10,note50,note100;
    printf("Enter the amount in Hundreds:");
    scanf("%d",&n);
    note10 = n/10;
    note50 = n/50;
    note100 = n/100;
    printf("Currency Note of 10 need : %d\n",note10);
    printf("Currency Note of 50 need : %d\n",note50);
    printf("Currency Note of 100 need : %d\n",note100);

    return 0;
}
