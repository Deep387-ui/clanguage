#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    int reverse = 0;
    int sum = 0;
    while(n !=0)
    {
        sum = sum + n%10;
        reverse = reverse * 10 + n % 10;
        n = n/10;
        
    }
    reverse =reverse/10;
    printf("Reverse of the number is : %d\n", reverse);
    printf("Sum of digits is : %d\n", sum);
    return 0;
}