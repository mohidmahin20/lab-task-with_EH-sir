#include<stdio.h>
int main(){
    float basic_salary,dearness_allowance,house_rent,gross_salary;
    printf("Enter Basic Salary:");
    scanf("%f",&basic_salary);
    dearness_allowance = (basic_salary*40)/100;
    house_rent = (basic_salary*20)/100;
    gross_salary = basic_salary - dearness_allowance - house_rent;
    printf("Niloys Gross Salary: %.2f\n",gross_salary);

    return 0;
}
