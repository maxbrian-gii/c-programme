//name :maxbrian kamau riguini 
//reg no :ct100/g/30669/26
//date :11/20/2026

#include <stdio.h>

int main(){

  int choice;
  
  printf("select data bundle:\n");
  printf("1.100MB @ 50 kes\n");
  printf("2.500MB @ 200 kes\n");
  printf("3.1GB @ 350 kes\n");
  printf("4.2GB @ 600 kes\n");

  printf("select your bundle (1-4):\t");
  scanf("%d",&choice);

  switch(choice){

    case 1:
    printf("you selected 100MB.Cost = 50 kes\n");
    break;
    
    case 2:
    printf("you selected 500MB.Cost = 200 kes\n");
    break;
    
    case 3:
    printf("you selected 1GB.Cost = 350 kes\n");
    break;
    
    case 4:
    printf("you selected 2GB.Cost = 600 kes\n");
    break;

    default:
      printf("invalid choice!");
    }
    
  return 0;
}
