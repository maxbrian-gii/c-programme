/*Name: Maxbrian Kamau 
Reg no:CT100/G/30669/26
SUBJECT:Exam eligibility program*/

#include<stdio.h>

int main(){
    int percent;
    int marks;
    
    printf("Enter students average attendance:\t");
    scanf("%d",& percent);
    
    printf("Enter students average marks:\t");
    scanf("%d",& marks);
    
    if(percent<75 , marks<40){
    
     printf("Not eligible");
    }
    else if(percent>=75,marks>=40) {
    
     printf("Eligible");
    }
    else {
      printf("Not eligible");
    }
    return 0;

}