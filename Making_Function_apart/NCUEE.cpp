#include "NCUEE.h"
#include <iostream>

void assign(int *a, const int n)
{
   for(int i = 0; i < n; i++)     
   {
      a[i] = i*2;        
   }
}

void print(int *a, const int n)
{
   for(int i = 0; i < n; i++)     
   {
      cout << a[i] << " ";
   }
}
