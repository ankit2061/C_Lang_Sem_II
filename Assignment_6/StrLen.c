#include <stdio.h>
int main(){
    char line[100],character;
    int c=0;
    printf("Enter text. Press <return> at the end.\n");
    do{
        character=getchar();
        line[c]=character;
        c++;
    }while(character!='\n');
    line[c-1]='\0';
    printf("You entered: %s\n",line);
    printf("Number of characters: %d\n",c-1);
    return 0;
}