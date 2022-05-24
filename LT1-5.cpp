#include<stdio.h>
#define pi 3.1416
int main(){
    double length,breadth,radius,area_r,perimeter_r,area_c,circumference_c;
    printf("Enter Length:");
    scanf("%lf",&length);
    printf("Enter Breadth:");
    scanf("%lf",&breadth);
    printf("Enter Radius:");
    scanf("%lf",&radius);
    area_r = length*breadth;
    perimeter_r = (2*length)+(2*breadth);
    area_c = pi*radius*radius;
    circumference_c = 2*pi*radius;
    printf("Area of the Rectangle is %.2lf\n",area_r);
    printf("Perimeter of the Rectangle is %.2lf\n",perimeter_r);
    printf("Area of the Circle is %.2lf\n",area_c);
    printf("Circumference of the Circle is %.2lf\n",circumference_c);

    return 0;
}
© 2022 GitHub, Inc.
