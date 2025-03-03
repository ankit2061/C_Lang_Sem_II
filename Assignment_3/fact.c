#include <stdio.h>
#include <math.h>
int main(){
    int n,i;
    printf("Enter the number: ");
    scanf("%d", &n);
    int fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}