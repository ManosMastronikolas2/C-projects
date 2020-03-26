#include <stdio.h>
#include <stdlib.h>
#include "calcfunc.h"


int main(void)
{
  float a=0,b = 0;//will store the values
  char op;

  scanf("%f%c%f", &a, &op, &b);




  if(op=='+')
  {
    add(a,b);
  }
  else if(op=='-')
  {
    subtr(a,b);
  }
  else if(op=='x' || op=='*')
  {
    mult(a,b);
  }
  else if(op=='/' || op==':')
  {
    divd(a,b);
  }
  else if(op=='^')
  {
    power(a,b);
  }else{
    printf("That's not a valid operator\n");
  }

  return 0;
}
