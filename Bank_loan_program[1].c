//Name: Maxbrian Kamau 
//reg no:CT100/G/30669/26
//Description:Bank loan eligibility program 
//Date:20/09/2026

#include<stdio.h>

int main()
{
    int yrs;
    float amnt;
    
    printf("Enter your age:\t");
    scanf("%d",&yrs);
    
    printf("Enter your annual income amount:Ksh.\t");
    scanf("%f",&amnt);
    
    if(yrs >=21 && amnt>=21000)
    {
      printf("Congratulations you qualify for a loan.\n");
    }
    else 
    {
     printf("Unfortunately,we are unable to offer you a loan at this time");
    }
    
    return 0;
}