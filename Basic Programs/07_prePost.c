#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    // printf("%d\n", a++);
    // printf("%d", a);

    int c = a++ + ++a + ++a + a++;
    printf("%d", c);
    return 0;
}
