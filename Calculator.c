//
// Created by Ankit Talukder on 20/02/25.
//
#include <stdio.h>

int addition(int a, int b)
{
  int s=a+b;
  return s;
}
int subtraction(int a, int b)
{
  int r=a-b;
  return r;
}
int multiplication(int a, int b)
{
  int p=a*b;
  return p;
}
int division(int a, int b)
{
  int q=a/b;
  return q;
}
int main()
{
  int choice = 0, a, b;
  do
  {
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    if (choice != 5)
    {
      printf("Enter two numbers:\n");
      scanf("%d %d", &a, &b);
      printf("Result: ");
    }
    switch (choice)
    {
    case 1:
      printf("%d\n",addition(a, b));
      break;
    case 2:
      printf("%d\n",subtraction(a, b));
      break;
    case 3:
      printf("%d\n",multiplication(a, b));
      break;
    case 4:
      printf("%d\n",division(a, b));
      break;
    case 5:
      printf("Exiting...\n");
      break;
    default:
      printf("Invalid choice\n");
    }
  }while(choice != 5);
  return 0;
}
