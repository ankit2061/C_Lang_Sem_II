// Calculate X^Y without using pow() function.
#include <stdio.h>
#include <math.h>

int main(){
    int x,y,i,x1,e=1;
    // float e=1;
    printf("Enter the value of X and Y to evaulate X^Y:\n");
    scanf("%d %d",&x,&y);
    x1=x;
    for(i=1;i<=y;i++){
        e=e*x;
    }
    printf("%d^%d=%d ",x1,y,e);
}