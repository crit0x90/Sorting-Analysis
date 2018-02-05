#include "array.h"
#include <iostream>

using namespace std;

// swaps two elements in an array
void myarray::swap(int i, int j)
{
	int x = arr[i];
	arr[i] = arr[j];
	arr[j] = x;
}