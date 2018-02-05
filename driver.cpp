#include <iostream>
#include <vector>
#include <time.h>
#include "header.h"
#include "array/array.h"

using namespace std;

int main()
{
	srand(time(NULL));
	
	myarray arr = myarray(10); 

	arr.printArray();
	arr.prepend(7);
	arr.append(8);
	arr.printArray();
	arr.delFront();
	arr.delBack();
	arr.reverseArr();
	arr.printArray();

	return 0;
}