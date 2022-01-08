// table
/*#include<stdio.h>
int main(){
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    for(int i=1;i<=10;i++ ) {
        printf("%dx%d=%d\n",a,i,a*i);

    }


 return 0;

}*/
#include<stdio.h>
int main() {
     int n;
     printf("enter value of n");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
         for(j=1;j<=i;j++){
            printf("*");



         }
         printf("\n");
     }

    return 0;

}