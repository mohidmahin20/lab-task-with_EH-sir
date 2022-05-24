#include<stdio.h>
int main(){
    int n,N1,N2,N3,N4,N5,new;
    printf("Enter a Five Digit Number:");
    scanf("%d",&n);
    N5 = n%10;
    n = n/10;
    N4 = n%10;
    n = n/10;
    N3 = n%10;
    n = n/10;
    N2 = n%10;
    n = n/10;
    N1 = n%10;
    N1 = N1+1;
    N2 = N2+1;
    N3 = N3+1;
    N4 = N4+1;
    N5 = N5+1;
    new = N1*10000+N2*1000+N3*100+N4*10+N5;
    printf("New Number is %d\n",new);

    return 0;
}
