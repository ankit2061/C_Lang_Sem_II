// Reverse a 5-digit number.
#include <stdio.h>
int main(){
    int n,n1,d,r=0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Reverse of %d is: %d",n1,r);
    return 0;
}