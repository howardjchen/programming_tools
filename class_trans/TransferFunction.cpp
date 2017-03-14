#include "TransferFunction.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>


data before;
void transfer(data *target)
{
	before.a = 1;
	before.b = 2;
	cout << "before" << before.a << before.b << endl;
	*target = before;
}
