#include <stdio.h>
int main()
{
  int i,j,r,a=0;
  printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("The pattern:\n");
  for(i=1;i<=r;i++)
  {
    for(j=i;j<r;j++)
    {
      printf (" ");
    }
    for(j=1;j<=i;j++)
    {
      ++a;
      printf ("%d",a);
    }
    a--;
    for(j=1;j<i;j++)
    {
      printf ("%d",a);
      a--;
    }
    printf ("\n");
    a++;
  }
  return 0;
}
/*
The pattern:
    1
   232
  34543
 4567654
567898765
*/