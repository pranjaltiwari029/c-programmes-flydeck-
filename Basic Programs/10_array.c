#include<stdio.h>
void display(int A[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ", A[i]);
    }
}
int main() {
    // int A[10] = {4,5,6,1,2,3,7,8,9,10.2};
    // char c[5] = {'a', 'd', 'p', 'e', 'd'};
    // int marks[5];
    // marks[0] = 100;
    // marks[1] = 200;
    // marks[2] = 11;
    // marks[3] = 66;
    // marks[4] = 63;
    // for(int i=0;i<=4;i++) {
    //     printf("%d ", marks[i]);
    // }

    // int marks[10] = {10,20,30,40,50,60,70,80,90,22};

    // int marks[10];
    // for(int i=0;i<=9;i++) {
    //     printf("Enter the number : ");
    //     int n;
    //     scanf("%d", &n);
    //     marks[i] = n;
    // }
    // for(int i=0;i<=9;i++) {
    //     printf("%d\t", marks[i]);
    // }
    printf("Enter the number of students : ");
    int n;
    scanf("%d", &n);
    int marks[n];
    for(int i=0;i<n;i++) {
        int num;
        scanf("%d", &num);
        marks[i] = num;
    }
    display(marks, n);
    

    return 0;
}

// Array - It is a data type with continuos memory in RAM 
// All the datas should be of same type 