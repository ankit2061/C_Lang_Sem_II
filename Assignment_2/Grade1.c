//
// Created by Ankit Talukder on 18/02/25.
//
#include <stdio.h>
int main(){
  int marks;
  printf("Enter your marks: ");
  scanf("%d", &marks);

  //Checking if marks within bounds
  //If not then it would ask for rentering of marks
  while(!(marks<=100&&marks>=0)){
    printf("Invalid Input.Please enter marks between 0 and 100:");
    scanf("%d", &marks);
  }
  marks=marks/10;
  //Using Switch Case
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

  return 0;
}