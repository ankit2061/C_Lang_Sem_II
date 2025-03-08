// Determine whether a number is prime or not.[CO2]
#include <stdio.h>
int main(){
    int n,i,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0)
        c++;
    }
    if(c==0)
    printf("Prime Number");
    else
    printf("Not a prime number");
    return 0;
}