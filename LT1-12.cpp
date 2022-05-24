#include<stdio.h>
int main(){
    float total_price,total_profit,total_cost,cost;
    printf("Enter Total Price:");
    scanf("%f",&total_price);
    printf("Total Profit:");
    scanf("%f",&total_profit);
    total_cost = total_price - total_profit;
    cost = total_cost/15;
    printf("The Cost of One Item is %.2f\n",cost);

    return 0;
}
