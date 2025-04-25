// Generate the following Fibonacci series:
// 1 1 2 3 5 8 13....... upto n terms[CO1,CO3,CO4]
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n,i,a=0,b=1,s=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Invalid Input\n");
        exit(1);
    }
    printf("Series: %d %d ",a,b);
    for(int i=3;i<=n;i++){
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
    }
    return 0;
}