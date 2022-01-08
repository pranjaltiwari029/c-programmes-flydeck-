#include<stdio.h>
int main() {
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    for(int i=1;i<=10;i++) {
        printf("%d x %d = %d\n", a, i, a*i);
    }
    return 0;
}