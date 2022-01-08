#include<stdio.h>
int factorial(int n) {
    for(int i=(n-1);i>=1;i--) {
        n = n*i;
    }
    return n;
}

void fibonacci(int n) {
    int a = -1;
    int b = 1;
    int c;
    for(int i=0;i<n;i++) {
        c = a+b;
        a = b;
        b = c; 
        printf("%d ", c);
    }
}

int main() {
    // int ans = factorial(5);
    // printf("Factorial of %d is %d", 5, ans);
    fibonacci(10);
    return 0;
}