#include<stdio.h>
int main(){
    float km,meter,centimeters,feet,inches;
    printf("Enter the distance:");
    scanf("%f",&km);
    meter = km*1000;
    centimeters = km*100000;
    feet = km*3280.8399;
    inches = km*39370.0787;
    printf("Distance between Mirpur & Ashulia is %.2f km\n",km);
    printf("Distance between Mirpur & Ashulia is %.2f meter\n",meter);
    printf("Distance between Mirpur & Ashulia is %.2f centimeters\n",centimeters);
    printf("Distance between Mirpur & Ashulia is %.2f feet\n",feet);
    printf("Distance between Mirpur & Ashulia is %.2f inches\n",inches);
    return 0;
}
