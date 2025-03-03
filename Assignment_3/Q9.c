// Calculate X^Y without using pow() function.
#include <stdio.h>
#include <math.h>

int main(){
    int x,y,i,e=1;
    // float e=1;
    printf("Enter the value of X and Y to evaulate X^Y:\n");
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++){
        e=e*x;
    }
    printf("%d^%d=%d ",x,y,e);
    return 0;
}