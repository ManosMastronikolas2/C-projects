#include <stdio.h>
#include "calcfunc.h"

void add(float i,float j)
{
  printf("%.2f\n",i+j);
  return;
}

void subtr(float n,float m)
{
  printf("%.2f\n",n-m);
  return;
}

void mult(float s,float e)
{
  printf("%.2f\n",s*e);
  return;
}

void divd(float w,float e)
{
  printf("%.2f\n",w/e);
  return;
}

void power(float base,float exp)
{
  float res=1;
  for (int i=0;i<=exp;i++)
  {
    res*=base;
  }
  printf("%.2f\n",res);
  return;
}
