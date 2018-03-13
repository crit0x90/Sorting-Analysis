#include <iostream>
#include <vector>
#include <time.h>
#include <ctime>
#include "array/array.h"

using namespace std;

int main()
{
	srand(time(NULL));

	//myarray<int>* arr = new myarray<int>(1000); SYNTAX FOR CREATION OF ARRAY

	int sortChoice = -1;
	int arrayType = -1;
	int lengthChoice = -1;

	while(true)
	{
		cout << "Enter the number of the algorithm you want to test: " << endl;
		cout << "1 - Bubble Sort" << endl;
		cout << "2 - Insertion Sort" << endl;
		cout << "3 - Selection Sort" << endl;
		cout << "4 - Merge Sort" << endl;
		cout << "5 - Quick Sort" << endl;
		cin >> sortChoice;
		cout << endl;


		cout << "Enter the type of array that you want to use: " << endl;
		cout << "1 - Already Sorted" << endl;
		cout << "2 - Random Order" << endl;
		cout << "3 - Sorted in Reverse" << endl;
		cout << "4 - Shuffled at 10 percent" << endl;
		cin >> arrayType;
		cout << endl;


		cout << "Enter the size that you want to sort: " << endl;
		cout << "1 - 10" << endl;
		cout << "2 - 1000" << endl;
		cout << "3 - 10000" << endl;
		cout << "4 - 100000" << endl;
		cout << "5 - 1000000" << endl;
		cin >> lengthChoice;
		cout << endl;

		cout << "Running test in configuration " << sortChoice << arrayType << lengthChoice << endl;
		switch(sortChoice)
		{
			case 1 : bubbleSortTest(arrayType, lengthChoice); break;
			case 2 : insertionSortTest(arrayType, lengthChoice); break;
			case 3 : selectionSortTest(arrayType, lengthChoice); break;
			case 4 : mergeSortTest(arrayType, lengthChoice); break;
			case 5 : quickSortTest(arrayType, lengthChoice); break;
			default: cout << "Invalid index" << endl; break;
		}
	}

	return 0;
}