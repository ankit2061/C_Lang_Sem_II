// Find the sum the following series:
// 1 + ½ + 1/3 + ¼ + ....... upto n terms
#include <stdio.h>
#include <math.h>
int main(){
    float n, i,sum=0;
    
    printf("Enter the number of terms: \n");
    scanf("%f",&n);
    for ( i = 1; i <= n; i++)
    {
        sum+=1/i;
        
    }
    printf("Sum of the series is %f\n", sum);
    return 0;
}