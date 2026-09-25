//Name: Maxbrian Kamau 
//reg no:CT100/G/30669/26
//description:Water bill program 
//Date:25/09/2026

#include<stdio.h>

float calculateBill(float NoOfUntsCnsm);

int main()
{
    float unts, totalBill;
    printf("Enter number of units used:");
    scanf("%f",&unts);
    
    printf("\n");
    
    totalBill = calculateBill(unts);
   
    printf("WATER BILL PROGRAM\n"); 
    printf("------------------\n");
    printf("Number of units consumed: %.2f\n",unts);
    printf("Total electricity bill payable: Kshs.%.2f",totalBill);
    printf("\n");
}
float calculateBill(float NoOfUntsCnsm)
{
    float Bill;
    if (NoOfUntsCnsm<=100)
    {
      Bill = 10 * NoOfUntsCnsm;
    }
    
    else if(NoOfUntsCnsm>=101 && NoOfUntsCnsm<=200)
    {
      Bill = 15 * (NoOfUntsCnsm-100) + (10*100) ;
    }
    
    else if(NoOfUntsCnsm>=201)
    {
       Bill = 20 * (NoOfUntsCnsm-200) + (10*100) + (15*100);
    }
    return Bill;
}