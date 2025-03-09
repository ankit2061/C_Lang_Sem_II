#include <stdio.h>
int main() {
    int a, b,temp;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF = %d\n", a);
    return 0;
}
