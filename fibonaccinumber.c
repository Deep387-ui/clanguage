#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int c ;
    printf("The fibaonacci number of %d is :%d\n", n, a);
    for (int i=1;i<n;i++){
        c = a + b;
        a = b;
        b = c;
        printf("The fibaonacci number of %d is :%d\n", i+1, c);
    }
    return 0;
}