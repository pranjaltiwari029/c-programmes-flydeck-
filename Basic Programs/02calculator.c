#include<stdio.h>
int main() {
    float a;
    float b;
    char op;
    char enter;
    printf("Enter the first number : ");
    scanf("%f", &a);
    scanf("%c", &enter);
    printf("Enter the operator (+,-,/,*) :");
    scanf("%c", &op);
    printf("Enter the second number : ");
    scanf("%f", &b);
    
    if(op == '+') {
        printf("%f", a+b);
    }
    else if(op == '-') {
        printf("%f", a-b);
    }
    else if(op == '*') {
        printf("%f", a*b);
    }
    else {
        printf("%f", a/b);
    }
    return 0;
}