//Name:Maxbrian kamau
//reg no:CT100/G/30669/26
//description:Discount program
//Date:25/09/2026

#include<stdio.h>

float calculateDiscount(float purchase_amnt);

int main()
{
    float amnt, payable_amnt, result;
    
    printf("Enter purchase price: Kshs.\t");
    scanf("%f",& amnt);
    
    result= calculateDiscount(amnt);
    payable_amnt=amnt-result;
    
    printf("\n");
    printf("SKY MART DISCOUNT PROGRAM\n");
    printf("-------------------------\n");
    printf("Purchase price is:%.2f Kshs.\n", amnt);
    printf("Discount awarded: %.2f Kshs.\n", result);
    printf("Total payable amount:%.2f Kshs.\n",payable_amnt);

    return 0 ;
}
float calculateDiscount(float purchase_amnt)
{   
    float Discount;
    if (purchase_amnt< 5000)
    {
      Discount = 0.05 * purchase_amnt;
    }
    
    else if(purchase_amnt>=5000 && purchase_amnt<=9999)
    {
      Discount = 0.1 * purchase_amnt;
    }
    
    else if(purchase_amnt>=10000)
    {
      Discount = 0.15 * purchase_amnt;
    }
    
    return Discount;

}
