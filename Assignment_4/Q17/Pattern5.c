#include <stdio.h>
int main(){
    int i,j,r;
    char c='a';
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("The pattern:\n");
    for(i=1;i<=r;i++){
        for(j=0;j<i;j++){
            printf("%c",c);
        }
        c++;
        printf("\n");
    }
    return 0;
}
/*
Enter the number of rows: 5
The pattern:
a
bb
ccc
dddd
eeeee
*/