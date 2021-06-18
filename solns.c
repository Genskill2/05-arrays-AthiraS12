/* Enter your solutions in this file */
#include <stdio.h>

int max(int x[], int b)
{
  int max=x[0];
  for (int i=1;i<b;i++)
  {
      if(max<x[i])
      {
        max=x[i];
      }
  }
  return max;
}

int min (int x[],int b)
{
  int min=x[0];
  for (int i=1;i<b;i++)
  {
      if(min>x[i])
      {
        min=x[i];
      }
  }
  return min;
}


float average (int x[] , int b)
{
  int sum=0;
  for (int i=0;i<b;i++)
  {
    sum+=x[i];
  }
  return (sum/b);
}


int mode (int x[], int b)
{
  int mv=0,mc=0,c=0;
  for (int i=0;i<b;i++)
  {
    c=0;
    for (int j=0;j<b;j++)
    {
      if (x[i]==x[j])
      {
        c++;
      }
    }
    if (c>mc)
    {
      mc=c;
      mv=x[i];
    }
  }
  return mv;
}

int factors (int numm, int x[])
{
  int c=0;int i=2;
  while(i<=numm)
  {
    while (numm%i==0)
    {
      numm/=i;
      x[c]=i;c++;
    }
    i++;
    for (int j=2 ; j<i ;j++)
    {
      if (i%j==0)
      {
        i++;
      }
    }
  }
  return c;
}
