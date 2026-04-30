#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    int reverse = 0;
    while(n !=0)
    {
        //reverse = reverse * 10 + n % 10;// this alos valid but we are doing in two steps for better understanding
        reverse = reverse + (n%10);
        reverse = reverse *10;
        n = n/10;
    }
    reverse =reverse/10;
    printf("Reverse of the number is : %d\n", reverse);
    return 0;
}