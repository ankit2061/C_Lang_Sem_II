// Find the sum of the following series:
// -1 + 1/3! - 1/5! + 1/7! ...... upto n terms[CO1,CO3,CO4]

#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, fact;
    float sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = 1; j <= (2*i-1); j++)
        {
            fact = fact * j;
        }
        sum += pow(-1, i) / fact;       
    }
    printf("Sum of the series is %f\n", sum);
    return 0;
}
