#include <stdio.h>
int main(){
    char line[81],character;
    int c=0;
    printf("Enter text. Press <return> at the end.\n");
    do{
        character=getchar();
        line[c]=character;
        c++;
    }while(character!='\n');
    line[c-1]='\0';
    printf("You entered: %s\n",line);
    return 0;
}