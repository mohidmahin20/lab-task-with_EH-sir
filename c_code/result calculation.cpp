#include<stdio.h>
int main()
{

double q1, q2, q3, mid, final, total_marks, at , pt ,assign;

printf("Enter 1st quiz number :");
scanf("%lf",&q1);
printf("Enter 2nd quiz number :");
scanf("%lf",&q2);

printf("Enter 3rd quiz number :");
scanf("%lf",&q3);

printf("Enter mid exam number :");
scanf("%lf",&mid);

printf("Enter final exam number :");
scanf("%lf",&final);

printf("Enter attendance number from 7 :");
scanf("%lf",&at);

printf("Enter presentation exam number from 8 :");
scanf("%lf",&pt);

printf("Enter assignment number from 5 :");
scanf("%lf",&assign);


total_marks= q1/3 + q2/3 + q3/3 + mid + final + at + pt + assign ;
printf("%lf\n",total_marks);



return 0;
}
