//Name: Maxbrian Kamau
//reg no:CT100/G/30669/26
//Description:Net salary program
// Date: 25/09/2026

#include<stdio.h>

float calculateTax(float gross_salary);

int main()
{
    float grs, outCome, netSalary;

    printf("Enter employees gross salary:");
    scanf("%f",&grs);

    outCome = calculateTax(grs);
    netSalary = grs - outCome;

    printf("\n");
    printf("EMPLOYEES NET SALARY:\n");
    printf("--------------------\n");
    printf("Employees gross salary: Kshs.%.1f\n",grs);
    printf("Employees Tax amount: Kshs. %.1f\n",outCome);
    printf("Employees net salary: Kshs.%.1f\n",netSalary);
    printf("\n");

}
float calculateTax(float gross_salary)
{
    float tax;
    
    if(gross_salary<30000)
    {
       tax = 0.05 * gross_salary;
    }
    
    else if(gross_salary>=30000 && gross_salary<=59999)
    {
       tax = 0.1 * gross_salary;
    }
    
    else
    {
       tax = 0.15 * gross_salary;
    }

    return tax;
}