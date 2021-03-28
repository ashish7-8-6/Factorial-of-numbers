#include <stdio.h>

long fact(int n)
{
  if(n>0)
    return (n*fact(n-1));
   else
    return (1);
}

int main()
{
  int n;
  long x;
  printf("Enter a Number\n");
  scanf("%d",&n);
  x=fact(n);
  printf("Factorial of Number is %ld\n",x);
  return (0);
}
