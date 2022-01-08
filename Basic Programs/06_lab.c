#include<stdio.h>
int main() {
    float com, phy, math, chem, eng;
    printf("Enter your computer science : ");
    scanf("%f", &com);
    printf("Enter your Physics : ");
    scanf("%f", &phy);
    printf("Enter your Mathematics : ");
    scanf("%f", &math);
    printf("Enter your Chemistry : ");
    scanf("%f", &chem);
    printf("Enter your English : ");
    scanf("%f", &eng);
    float total;
    total = com + phy + math + chem + eng;
    printf("Total is %f", total);
    printf("Average is %f", total/5);
    return 0;
}