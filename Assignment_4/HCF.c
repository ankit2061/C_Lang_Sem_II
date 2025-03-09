// Find HCF of two numbers (by atleast two methods).
#include <stdio.h>
int main(){
    int a,b,r=0;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a,&b);
    if(a<b)
        r=a;
    else
    r=b;
    while(r>0){
        if(a%r==0 &&b%r==0){
            break;
        }
        r--;
    }
    printf("HCF: %d\n",r);
    return 0;
}