#include<stdio.h>
int main(){
    int x;
    printf("ENTER THE LENGTH =");
    scanf("%d",&x);
    int y;
    printf("\nENTER THE BREDTH =");
    scanf("%d",&y);
    int A = x*y;
    int P = 2*(x+y);
    if (A>P) printf("AREA IS GREATER THAN PERIMETER");
    else printf("PERIMETER IS GREATER THAN AREA");

}