#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}