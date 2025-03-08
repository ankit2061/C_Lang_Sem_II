// Print all prime numbers between 1 and n.[CO2,CO3]
#include <stdio.h>
int main(){
    int n,i,j,c=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The prime numbers till %d:\n",n);
    for(i=2;i<=n;i++){
        c=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==0){
            printf("%d\n",i);
        }
    }
    return 0;
}