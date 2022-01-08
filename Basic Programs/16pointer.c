#include<stdio.h>
int main() {
    int a;
    a = 0;
    // printf("%d\n", a);
    int *ptr;
    ptr = &a;
    // printf("%d", ptr);


    char ch = 'P';
    char *qtr = &ch;
    // printf("%p", qtr);


    float f = 3.14;
    float *prt = &f;
    printf("%f", *prt);
    printf("%d", &prt);
    printf("%f", *&f);
    printf("%d", *&*prt);
    // (*(&(*ptr))) 




    return 0;
}



// *ptr - value of 
// &a = address of 