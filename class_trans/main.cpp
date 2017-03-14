#include <cstdlib>
#include <iostream>
#include "TransferFunction.h"

using namespace std;


data after;

int main(int argc, char const *argv[])
{
	transfer(&after);
	cout << "after" << after.a << after.b << endl;
	return 0;
}