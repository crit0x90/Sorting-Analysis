#include <iostream>
#include <vector>
#include <time.h>
#include <ctime>
#include "array/array.h"

using namespace std;

int main()
{
	srand(time(NULL));
	/*
	myarray<int>* arr = new myarray<int>(1000);
	arr->printArray();
	arr->initialize(4);
	cout << endl;
	arr->printArray();
	delete arr;
	*/

	quickSortTest();

	return 0;
}