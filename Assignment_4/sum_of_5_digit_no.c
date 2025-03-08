// Calculate the sum of digits of a 5-digit number.
#include <stdio.h>
int main(){
    int n,n1,d,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("Sum of the digits of %d is: %d",n1,s);
    return 0;
}