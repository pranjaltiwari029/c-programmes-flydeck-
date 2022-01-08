#include<stdio.h>
int max_finder(int a, int b) {
    if(a>b) {
        return a;
    }
    return b;
}
int min_finder(int a, int b) {
    if(a>b) {
        return b;
    }
    return a;
}
float divider(float a, float b) {
    return a/b;
}
int max_finder3(int a, int b, int c) {
    if(a>b && a>c) {
        return a;
    }
    else if(b>c && b>a) {
        return b;
    }
    return c;
}
int main() {
    printf("%d/%d = %f",20,30, divider(20,30));
    return 0;
}