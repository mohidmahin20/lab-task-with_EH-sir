#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main(){
    int a,b,c,perimeter,s,n;
    float area;
    printf("Enter three sides:");
    scanf("%d %d %d",&a,&b,&c);
    perimeter = a+b+c;
    s=perimeter/2;
    n=s*(s-a)*(s-b)*(s-c);
    area = sqrt(n);
    printf("Area of the Triangle is %.2f\n",area);
    printf("Perimeter of the Triangle is %d\n",perimeter);
    if(area>perimeter){
        printf("The Area of the Triangle is greater then the Perimeter of the Triangle\n");
    }
    else if(area<perimeter){
        printf("The Area of the Triangle is samller then the Perimeter of the Triangle\n");
    }
    else{
        printf("The Area of the Triangle and the Perimeter of the Triangle are same\n");
    }
    
    return 0;
}
