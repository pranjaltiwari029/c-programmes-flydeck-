#include<stdio.h>
void swap(int *p, int *q) {
    int c;
    c = *p;
    *p = *q;
    *q = c;
}
int main() {
    int a = 10;
    int b = 20;
    printf("%d and %d", a, b);
    swap(&a, &b);
    printf("%d and %d", a, b);
    return 0;
}