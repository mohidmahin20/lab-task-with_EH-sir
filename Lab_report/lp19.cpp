#include<stdio.h>

int main(){
    int n;
    double sum=1;

    printf("How many terms: ");
    scanf("%d",&n);

    printf("%d terms of harmonic series: 1",n);
    for(int i=2;i<=n;i++){
        
        printf("+1/%d",i);
        sum=sum+(1.0/i);
    }
    printf("\n");
    
    printf("Sum = %.2lf\n",sum);

    return 0;
}
