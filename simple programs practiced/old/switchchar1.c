#include<stdio.h>
void main ()
{
  int a,b,c;
  char op;
  printf ("enter the first number\n");
  scanf ("%d", &a);
  printf ("enter the second number\n");
  scanf ("%d", &b);
  printf ("enter the operator\n");
  scanf ("%s", &op);
  switch (op)
    {
    case '+':
      printf ("after adding a+b the value is:%d", c=a+b);
      break;
    case '-':
      printf ("after subtracting a-b the value is:%d", c=a-b);
      break;
    case '*':
      printf ("after multiplication a*b the value is:%d", c=a*b);
      break;
    case '/':
      printf ("after division a/b the value is:%d", c=a/b);
      break;
    default:
      printf ("invalid operator");
    }
}
