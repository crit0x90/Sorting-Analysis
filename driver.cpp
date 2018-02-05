#include <iostream>
#include <vector>
#include <time.h>
#include "array/array.h"

using namespace std;

int main()
{
	srand(time(NULL));
	
	myarray arr = myarray(10); 

	arr.printArray();
	arr.quickSort(0, arr.getSize());
	arr.printArray();

	return 0;
}