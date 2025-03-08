#include <stdio.h>
int main(){
    int i,j,r;
    char c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("The Pattern:\n");
    for(i=1;i<=r;i++){
        c='a';
        for(j=0;j<i;j++){
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
/*
Enter the number of rows: 5
The Pattern:
a
ab
abc
abcd
abcde
*/