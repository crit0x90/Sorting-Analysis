#include <iostream>
#include <vector>
#include <time.h>
#include <fstream>
#include <ctime>
#include "array.h"

using namespace std;
/*
void bubbleSortTest()
{
	ofstream file;
	file.open("graphing/input/bubbleSort.txt");
	clock_t start;
	double duration;

	cout << "1000 series" << endl;
	file << "#>bubblesort 1000\n";
	for(int i = 0; i < 100; i++)
	{
		myarray *arr = new myarray(1000);
		start = clock(); //time is in seconds
		arr->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ", ";
		delete arr;	
	}

	cout << "10000 series" << endl;
	file << "#>bubblesort 10000\n";
	for(int i = 0; i < 100; i++)
	{
		myarray *arr = new myarray(10000);
		start = clock(); //time is in seconds
		arr->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ", ";
		delete arr;
	}

	cout << "100000 series" << endl;
	file << "#>bubblesort 100000\n";
	for(int i = 0; i < 100; i++)
	{
		myarray *arr = new myarray(100000);
		start = clock(); //time is in seconds
		arr->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ", ";
		delete arr;
	}

	cout << "1000000 series" << endl;
	file << "#>bubblesort 1000000\n";
	for(int i = 0; i < 100; i++)
	{
		myarray *arr = new myarray(1000000);
		start = clock(); //time is in seconds
		arr->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ", ";
		delete arr;
	}
	
	file.close();
}
*/
int main()
{
	srand(time(NULL));
	myarray<int>* arr = new myarray<int>(1000);
	arr->printArray();
	arr->quickSort(0, (arr->getSize()-1));
	arr->printArray();
	delete arr;

	//bubbleSortTest();

	return 0;
}