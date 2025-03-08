// Find HCF of two numbers (by atleast two methods).
#include <stdio.h>
int main(){
    int a,b,r;
    printf("Enter two numbers: ");
    scanf("%d %d",a,b);
    r=((a<b)?a:b);//Smallest of the two numbers
    while(r>0){
        if(a%r==0 &&b%r==0){
            break;
        }
        r--;
    }
    printf("HCF: %d",r);
    return 0;
}