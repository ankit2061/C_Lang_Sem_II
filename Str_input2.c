#include <stdio.h>
int main(){
    char string1[81],string2[80];
    int i;
    printf("Enter text. Press <return> at the end.\n");
    printf("?"); //This is the prompt
    scanf("%s",string2);
    for(i=0;string2[i]!='\0';i++){
        string1[i]=string2[i];
    }
    string1[i]='\0';
    printf("\n");
    printf("%s\n",string1);
    printf("Number of characters: %d\n",i);
    return 0;
}