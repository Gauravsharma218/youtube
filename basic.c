#include<stdio.h>
int main(){
    int x;
    printf("ENTER A NUMBER :");
    scanf("%d",&x);
    if(x>0) {
        printf("%d",x);
        printf("\npostive number");}
    if(x<0) {
        printf("%d",-x);
        printf("\nNegative number");
        }
    if(x==0){
        printf("%d",x);
        printf("\nZERO");
    }

}