//Name: Maxbrian Kamau
//reg no:CT100/G/30669/26
//Date:20/09/2026
//Description:water bill calculator 

#include<stdio.h>
#include<math.h>

int main()
{
    float unts,amount;
    
    printf("Enter number of units used:");
    scanf("%f",&unts);
    
    if (unts <=30)
    {
      amount =unts*20;
      printf("Total water bill: %.2f Kes",amount);
    }
    else if(unts >=31 && unts<=60)
    {
      amount =unts*25;
      printf("Total water bill: %.2f Kes",amount);
    }
    
    else if(unts >=60)
    {
      amount =unts*30;
      printf("Total water bill: %.2f Kes",amount);
    }
    
    return 0;

}