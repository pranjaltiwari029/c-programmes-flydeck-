#include<stdio.h>
int main() {
    int i=0;
    while(i<20) {
        i++;
        if(i == 14) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}