
//File: lab7-1.cpp
#include <iostream>
using namespace std;

void swap(int*, int*);

int main()
{
 int x = 5, y = 6;
 cout << "x = " << x << " and y = " << y << endl;
 swap(x, y);
 cout << "x = " << x << " and y = " << y << endl;
 return 0;
}

void swap(int *x, int *y)
{
 int *temp;
 temp = x;
 x = y;
 y = temp;
}

/*

//File: lab7-2.cpp
#include <iostream>
using namespace std;

void swap();
int x = 5, y = 6;

int main()
{
 cout << "x = " << x << " and y = " << y << endl;
 swap();
 cout << "x = " << x << " and y = " << y << endl;
 return 0;
}

void swap()
{
 int temp;
 temp = x;
 x = y;
 y = temp;
}*/
