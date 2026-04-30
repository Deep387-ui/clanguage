#include<stdio.h>
int main(){
    int n;// intni baar loop chalega
    printf("Enter a number : ");
    scanf("%d",&n);
    // 4 7 10  13 16 19 ... uto n numner of terms
    // we are going to use extra variables

    int a = 4;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a + 3;
    }
    return 0;
}