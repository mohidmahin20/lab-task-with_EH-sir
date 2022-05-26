#include<stdio.h>
int main(){
    int cost_price,sell_price;
    printf("Enter Cost Price:");
    scanf("%d",&cost_price);
    printf("Enter Selling Price:");
    scanf("%d",&sell_price);
    if(cost_price>sell_price){
        printf("Seller has incurred Loss\n");
        printf("He incurred %d loss\n",cost_price-sell_price);
    }
    else if(sell_price>cost_price){
        printf("Seller has made Profit\n");
        printf("He made %d profit\n",sell_price-cost_price);
    }
    else{
        printf("Cost Price and Selling Price is same\n");
        printf("Seller did not make any profit or loss\n");
    }
    
    return 0;
}
© 2022 Git
