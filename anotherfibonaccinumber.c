#include <stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int c;

    if (n == 1) {
        printf("Fibonacci number is: %d", a);
    } else {
        for (int i = 2; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci number is: %d", b);
    }

    return 0;
}