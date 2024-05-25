#include<stdio.h>
int main(){
    float x;
    printf("ENTER THE COST PRICE :");
    scanf("%f",&x);
    float y;
    printf("\nENTER THE SELLING PRICE :");
    scanf("%f",&y);
    printf("\nNET = %f",y-x);
    if(y-x>0) {
        printf("\nPROFIT");
    }
    if(y-x<0) {
        printf("\nLOSS");
    }
    if(y-x==0) {
        printf("\nNEITHER PROFIT NOR LOSS");
    }
    

    
}