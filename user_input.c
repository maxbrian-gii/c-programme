//name:Maxbrian Kamau
//reg no:CT100/G/30669/26
//Date:18/09/2026
//program with user input

#include<stdio.h>

int main()
{ 
    float Height;
    double Bank_balance;
    long int phone_number;
    int M;
    
    printf("Enter your height :\t");
    scanf("%f",&Height);
    
    printf("Enter your Bank balance:\t");
    scanf("%lf",&Bank_balance);
    
    printf("Enter your phone number:\t");
    scanf("%ld",&phone_number);
    
    printf("you are %.2f Metres tall\n",Height);
    
    printf("you have %.3lf Kshs in my bank account\n",Bank_balance);
    
    printf("your phone number is 0%ld \n",phone_number);
    
    
    
    return 0;
}
