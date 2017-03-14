#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

class data
{
public:
	int a;
	int b;
};

data before;

void transfer(data*);

int main(int argc, char const *argv[])
{
	data after;

	before.a = 1;
	before.b = 2;
	
	transfer(&after);

	printf("before = %d and %d\n",before.a,before.b);
	printf("after = %d and %d\n",after.a,after.b);

	return 0;
}

void transfer(data *target)
{
	*target = before;
}