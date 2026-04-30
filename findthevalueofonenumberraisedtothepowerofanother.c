#include<stdio.h>
int main(){
    int power = 1;
    int base ;
    int exponent;
    printf("Enter the base : ");
    scanf("%d",&base);
    printf("Enter the exponent : ");
    scanf("%d",&exponent);

    for(int i = 1; i <= exponent; i++){
        power = power * base;
        //printf("The value of %d raised to the power of %d is : %d\n", base, exponent, power);
    }
     printf("The value of %d raised to the power of %d is : %d\n", base, exponent, power);
    
    return 0;
}