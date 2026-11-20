//name:maxbrian kamau riguini
//reg no:ct100/g/30669/26
//date11/20/2026

#include <stdio.h>

int main(){

  int bankBalance=20000;
  int withdrawn;

  
  while(bankBalance>0){
    
    printf("enter amount to withdraw:\t");
    scanf("%d",& withdrawn);

    bankBalance = bankBalance - withdrawn;
    

    printf("you have successfully withdrawn %d your remaining balance is %d",withdrawn ,bankBalance);

  }
  return 0;
}
