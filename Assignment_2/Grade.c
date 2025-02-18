#include <stdio.h>
int input(int marks){
    printf("Enter your marks: ");
    scanf("%d", &marks);
    return marks;
}
int check(int marks){
    while(!(marks<=100&&marks>=0)){
        printf("Invalid Input.Please enter marks between 0 and 100:");
        marks=input(marks);
    }
    return marks;
}
void sc(int marks){
    marks=marks/10;
    switch(marks){
        case 10:
        case 9:
            printf("Grade O");
            break;
        case 8:
            printf("Grade E");
            break;
        case 7:
            printf("Grade A");
            break;
        case 6:
            printf("Grade B");
            break;
        case 5:
            printf("Grade C");
            break;
        case 4:
            printf("Grade D");
            break;
        default:
            printf("Grade F");
    }
}
void ie(int marks){
    if(marks>=90&&marks<=100){
        printf("Grade O");
    }
    else if(marks>=80&&marks<90){
        printf("Grade E");
    }
    else if(marks>=70&&marks<80){
        printf("Grade A");
    }
    else if(marks>=60&&marks<70){
        printf("Grade B");
    }
    else if(marks>=50&&marks<60){
        printf("Grade C");
    }
    else if(marks>=40&&marks<50){
        printf("Grade D");
    }
    else if(marks>=0&&marks<40){
        printf("Grade F");
    }
    else{
        printf("Invalid Input.Please enter marks between 0 and 100\n");
    }
}
int main(){
    int marks,choice;
    marks=input(marks);
    marks=check(marks);
    printf("Choose the following methods to Find Out the Grade:\n");
    printf("1.Using Switch Case\n");
    printf("2.Using If Else\n");
    scanf("%d",&choice);
    printf("Marks=%d\n",marks);
    switch (choice)
    {
    case 1:
        sc(marks);
        break;
    case 2:
        ie(marks);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}