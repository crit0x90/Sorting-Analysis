#include "array.h"
#include <iostream>

using namespace std;

myarray::myarray()
{}

myarray::myarray(int s)
{
	sizeOfArray = s;
	arr = new int [s];

	for(int i = 0; i < sizeOfArray; i++)
	{
		arr[i] = rand() % 100;
	}
}

myarray::~myarray()
{}

void myarray::printArray()
{
	for(int i = 0; i < sizeOfArray; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void myarray::prepend(int x)
{
	sizeOfArray++;
	int *old = arr;
	arr = new int[sizeOfArray];
	//copy into new container
	for(int i = 1; i < sizeOfArray; i++)
	{
		arr[i] = old[i-1];
	}
	arr[0] = x;
	delete old;
}

void myarray::append(int x)
{
	sizeOfArray++;
	int *old = arr;
	arr = new int[sizeOfArray];
	//copy into new container
	for(int i = 0; i < sizeOfArray-1; i++)
	{
		arr[i] = old[i];
	}
	arr[sizeOfArray-1] = x;
	delete old;
}

void myarray::delFront()
{
	int *old = arr;
	arr = new int[sizeOfArray-1];
	//copy into new container
	for(int i = 1; i < sizeOfArray; i++)
	{
		arr[i-1] = old[i];
	}
	sizeOfArray--;
	delete old;
}

void myarray::delBack()
{
	int *old = arr;
	sizeOfArray--;
	arr = new int[sizeOfArray];
	//copy into new container
	for(int i = 0; i < sizeOfArray; i++)
	{
		arr[i] = old[i];
	}
	delete old;
}

void myarray::reverseArr()
{
	int left = 0;
	int right = sizeOfArray-1;
	int temp;
	while(left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

int myarray::getSize()
{
	return sizeOfArray;
}

int myarray::sigma()
{
	int sum = 0;
	for(int i = 0; i < sizeOfArray; i++)
	{
		sum += arr[i];
	}
	return sum;
}