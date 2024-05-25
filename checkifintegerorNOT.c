#include<stdio.h>
int main(){
    float x;
    printf("enter a number :");
    scanf("%f",&x);
    int y = (float)x;
    float z = (int)y;
    if(z-x==0) printf("THE NUMBER IS AN INTEGER");
    else printf("NOT AN INTEGER");
}