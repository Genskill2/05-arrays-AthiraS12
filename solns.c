/* Enter your solutions in this file */
#include <stdio.h>

int max(int x[], int b)
{
  int max=x[0];
  for (int k=1;k<b;k++)
  {
      if(max<x[k])
      {
        max=x[k];
      }
  }
  return max;
}

int min (int x[],int b)
{
  int min=x[0];
  for (int k=1;k<b;k++)
  {
      if(min>x[k])
      {
        min=x[k];
      }
  }
  return min;
}


float average (int x[] , int b)
{
  int sum=0;
  for (int k=0;k<b;k++)
  {
    sum+=x[k];
  }
  return (sum/b);
}


int mode (int x[], int b)
{
  int st=0,sg=0,c=0;
  for (int k=0;k<b;k++)
  {
    c=0;
    for (int j=0;j<b;j++)
    {
      if (x[k]==x[j])
      {
        c++;
      }
    }
    if (c>sg)
    {
      sg=c;
      st=x[k];
    }
  }
  return st;
}

int factors (int nam, int x[])
{
  int a=0;int k=2;
  while(k<=nam)
  {
    while (nam%k==0)
    {
      nam/=k;
      x[a]=k;a++;
    }
    k++;
    for (int j=2 ; j<k ;j++)
    {
      if (k%j==0)
      {
        k++;
      }
    }
  }
  return a;
}
