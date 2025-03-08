#include <stdio.h>
int main(){
    int i,j=2,r,a=1;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("The pattern:\n");
    for(i=2;i<=r;i++){
        a=j;
        for(j=2;j<=i;j++){
            
            printf("%d",a);
            
            a++;
        }
        printf("\n");
    }
    return 0;
}

/*
Enter the number of rows: 5
The pattern:
1
23
345
4567
56789
*/