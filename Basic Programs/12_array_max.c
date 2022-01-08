#include<stdio.h>
int max_finder(int A[], int n) {
    int max = A[0];
    for(int i=1;i<n;i++) {
        if(A[i]>max) {
            max = A[i];
        }
    }
    return max;
}
int min_finder(int A[], int n) {
    int min = A[0];
    for(int i=1;i<n;i++) {
        if(A[i]<min) {
            min = A[i];
        }
    }
    return min;
}
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int A[n];
    for(int i=0;i<n;i++) {
        int num;
        printf("Enter the number : ");
        scanf("%d", &num);
        A[i] = num;
    }
    printf("%d ", max_finder(A, n));

    return 0;
}