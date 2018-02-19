#include <iostream>
#include <fstream>
#include "array.h"
using namespace std;

void bubbleSortTest()
{
	ofstream file;
	file.open("graphing/input/bubbleSort.txt");
	clock_t start;
	double duration;

	//#################################################
	//Case 1
	cout << "10 series" << endl;
	file << "\n#>bubblesort 10 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr1 = new myarray<int>(10);
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(1);
		start = clock(); //time is in seconds
		arr1->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>bubblesort 10 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(2);
		start = clock(); //time is in seconds
		arr1->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>bubblesort 10 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(3);
		start = clock(); //time is in seconds
		arr1->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>bubblesort 10 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(4);
		start = clock(); //time is in seconds
		arr1->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr1;
	//#################################################

	//#################################################
	//Case 1
	cout << "1000 series" << endl;
	file << "\n#>bubblesort 1000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr2 = new myarray<int>(1000);
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(1);
		start = clock(); //time is in seconds
		arr2->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>bubblesort 1000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(2);
		start = clock(); //time is in seconds
		arr2->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>bubblesort 1000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(3);
		start = clock(); //time is in seconds
		arr2->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>bubblesort 1000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(4);
		start = clock(); //time is in seconds
		arr2->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr2;
	//#################################################

	//#################################################
	//Case 1
	cout << "10000 series" << endl;
	file << "\n#>bubblesort 10000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr3 = new myarray<int>(10000);
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(1);
		start = clock(); //time is in seconds
		arr3->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>bubblesort 10000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(2);
		start = clock(); //time is in seconds
		arr3->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>bubblesort 10000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(3);
		start = clock(); //time is in seconds
		arr3->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>bubblesort 10000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(4);
		start = clock(); //time is in seconds
		arr3->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr3;
	//#################################################

	//#################################################
	//Case 1
	cout << "100000 series" << endl;
	file << "\n#>bubblesort 100000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr4 = new myarray<int>(100000);
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(1);
		start = clock(); //time is in seconds
		arr4->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>bubblesort 100000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(2);
		start = clock(); //time is in seconds
		arr4->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>bubblesort 100000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(3);
		start = clock(); //time is in seconds
		arr4->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>bubblesort 100000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(4);
		start = clock(); //time is in seconds
		arr4->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr4;
	//#################################################
	
	//#################################################
	//Case 1
	cout << "1000000 series" << endl;
	file << "\n#>bubblesort 1000000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr5 = new myarray<int>(1000000);
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(1);
		start = clock(); //time is in seconds
		arr5->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>bubblesort 1000000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(2);
		start = clock(); //time is in seconds
		arr5->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>bubblesort 1000000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(3);
		start = clock(); //time is in seconds
		arr5->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>bubblesort 1000000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(4);
		start = clock(); //time is in seconds
		arr5->bubbleSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr5;
	//#################################################

	file << "\n#>end";
	file.close();
}

void insertionSortTest()
{
	ofstream file;
	file.open("graphing/input/insertionSort.txt");
	clock_t start;
	double duration;

	//#################################################
	//Case 1
	cout << "10 series" << endl;
	file << "\n#>insertionsort 10 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr1 = new myarray<int>(10);
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(1);
		start = clock(); //time is in seconds
		arr1->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>insertionsort 10 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(2);
		start = clock(); //time is in seconds
		arr1->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>insertionsort 10 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(3);
		start = clock(); //time is in seconds
		arr1->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>insertionsort 10 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(4);
		start = clock(); //time is in seconds
		arr1->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr1;
	//#################################################

	//#################################################
	//Case 1
	cout << "1000 series" << endl;
	file << "\n#>insertionsort 1000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr2 = new myarray<int>(1000);
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(1);
		start = clock(); //time is in seconds
		arr2->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>insertionsort 1000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(2);
		start = clock(); //time is in seconds
		arr2->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>insertionsort 1000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(3);
		start = clock(); //time is in seconds
		arr2->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>insertionsort 1000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(4);
		start = clock(); //time is in seconds
		arr2->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr2;
	//#################################################

	//#################################################
	//Case 1
	cout << "10000 series" << endl;
	file << "\n#>insertionsort 10000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr3 = new myarray<int>(10000);
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(1);
		start = clock(); //time is in seconds
		arr3->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>insertionsort 10000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(2);
		start = clock(); //time is in seconds
		arr3->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>insertionsort 10000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(3);
		start = clock(); //time is in seconds
		arr3->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>insertionsort 10000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(4);
		start = clock(); //time is in seconds
		arr3->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr3;
	//#################################################

	//#################################################
	//Case 1
	cout << "100000 series" << endl;
	file << "\n#>insertionsort 100000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr4 = new myarray<int>(100000);
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(1);
		start = clock(); //time is in seconds
		arr4->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>insertionsort 100000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(2);
		start = clock(); //time is in seconds
		arr4->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>insertionsort 100000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(3);
		start = clock(); //time is in seconds
		arr4->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>insertionsort 100000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(4);
		start = clock(); //time is in seconds
		arr4->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr4;
	//#################################################
	
	//#################################################
	//Case 1
	cout << "1000000 series" << endl;
	file << "\n#>insertionsort 1000000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr5 = new myarray<int>(1000000);
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(1);
		start = clock(); //time is in seconds
		arr5->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>insertionsort 1000000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(2);
		start = clock(); //time is in seconds
		arr5->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>insertionsort 1000000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(3);
		start = clock(); //time is in seconds
		arr5->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>insertionsort 1000000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(4);
		start = clock(); //time is in seconds
		arr5->insertionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr5;
	//#################################################

	file << "\n#>end";
	file.close();
}

void selectionSortTest()
{
	ofstream file;
	file.open("graphing/input/selectionSort.txt");
	clock_t start;
	double duration;

	//#################################################
	//Case 1
	cout << "10 series" << endl;
	file << "\n#>selectionsort 10 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr1 = new myarray<int>(10);
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(1);
		start = clock(); //time is in seconds
		arr1->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>selectionsort 10 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(2);
		start = clock(); //time is in seconds
		arr1->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>selectionsort 10 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(3);
		start = clock(); //time is in seconds
		arr1->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>selectionsort 10 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(4);
		start = clock(); //time is in seconds
		arr1->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr1;
	//#################################################

	//#################################################
	//Case 1
	cout << "1000 series" << endl;
	file << "\n#>selectionsort 1000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr2 = new myarray<int>(1000);
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(1);
		start = clock(); //time is in seconds
		arr2->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>selectionsort 1000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(2);
		start = clock(); //time is in seconds
		arr2->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>selectionsort 1000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(3);
		start = clock(); //time is in seconds
		arr2->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>selectionsort 1000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(4);
		start = clock(); //time is in seconds
		arr2->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr2;
	//#################################################

	//#################################################
	//Case 1
	cout << "10000 series" << endl;
	file << "\n#>selectionsort 10000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr3 = new myarray<int>(10000);
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(1);
		start = clock(); //time is in seconds
		arr3->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>selectionsort 10000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(2);
		start = clock(); //time is in seconds
		arr3->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>selectionsort 10000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(3);
		start = clock(); //time is in seconds
		arr3->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>selectionsort 10000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(4);
		start = clock(); //time is in seconds
		arr3->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr3;
	//#################################################

	//#################################################
	//Case 1
	cout << "100000 series" << endl;
	file << "\n#>selectionsort 100000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr4 = new myarray<int>(100000);
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(1);
		start = clock(); //time is in seconds
		arr4->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>selectionsort 100000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(2);
		start = clock(); //time is in seconds
		arr4->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>selectionsort 100000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(3);
		start = clock(); //time is in seconds
		arr4->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>selectionsort 100000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(4);
		start = clock(); //time is in seconds
		arr4->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr4;
	//#################################################
	
	//#################################################
	//Case 1
	cout << "1000000 series" << endl;
	file << "\n#>selectionsort 1000000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr5 = new myarray<int>(1000000);
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(1);
		start = clock(); //time is in seconds
		arr5->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>selectionsort 1000000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(2);
		start = clock(); //time is in seconds
		arr5->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>selectionsort 1000000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(3);
		start = clock(); //time is in seconds
		arr5->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>selectionsort 1000000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(4);
		start = clock(); //time is in seconds
		arr5->selectionSort();
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr5;
	//#################################################

	file << "\n#>end";
	file.close();
}

void mergeSortTest()
{
	ofstream file;
	file.open("graphing/input/mergeSort.txt");
	clock_t start;
	double duration;

	//#################################################
	//Case 1
	cout << "10 series" << endl;
	file << "\n#>mergesort 10 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr1 = new myarray<int>(10);
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(1);
		start = clock(); //time is in seconds
		arr1->mergeSort(0, arr1->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>mergesort 10 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(2);
		start = clock(); //time is in seconds
		arr1->mergeSort(0, arr1->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>mergesort 10 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(3);
		start = clock(); //time is in seconds
		arr1->mergeSort(0, arr1->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>mergesort 10 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(4);
		start = clock(); //time is in seconds
		arr1->mergeSort(0, arr1->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr1;
	//#################################################

	//#################################################
	//Case 1
	cout << "1000 series" << endl;
	file << "\n#>mergesort 1000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr2 = new myarray<int>(1000);
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(1);
		start = clock(); //time is in seconds
		arr2->mergeSort(0, arr2->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>mergesort 1000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(2);
		start = clock(); //time is in seconds
		arr2->mergeSort(0, arr2->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>mergesort 1000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(3);
		start = clock(); //time is in seconds
		arr2->mergeSort(0, arr2->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>mergesort 1000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(4);
		start = clock(); //time is in seconds
		arr2->mergeSort(0, arr2->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr2;
	//#################################################

	//#################################################
	//Case 1
	cout << "10000 series" << endl;
	file << "\n#>mergesort 10000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr3 = new myarray<int>(10000);
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(1);
		start = clock(); //time is in seconds
		arr3->mergeSort(0, arr3->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>mergesort 10000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(2);
		start = clock(); //time is in seconds
		arr3->mergeSort(0, arr3->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>mergesort 10000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(3);
		start = clock(); //time is in seconds
		arr3->mergeSort(0, arr3->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>mergesort 10000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(4);
		start = clock(); //time is in seconds
		arr3->mergeSort(0, arr3->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr3;
	//#################################################

	//#################################################
	//Case 1
	cout << "100000 series" << endl;
	file << "\n#>mergesort 100000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr4 = new myarray<int>(100000);
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(1);
		start = clock(); //time is in seconds
		arr4->mergeSort(0, arr4->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>mergesort 100000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(2);
		start = clock(); //time is in seconds
		arr4->mergeSort(0, arr4->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>mergesort 100000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(3);
		start = clock(); //time is in seconds
		arr4->mergeSort(0, arr4->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>mergesort 100000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(4);
		start = clock(); //time is in seconds
		arr4->mergeSort(0, arr4->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr4;
	//#################################################
	
	//#################################################
	//Case 1
	cout << "1000000 series" << endl;
	file << "\n#>mergesort 1000000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr5 = new myarray<int>(1000000);
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(1);
		start = clock(); //time is in seconds
		arr5->mergeSort(0, arr5->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>mergesort 1000000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(2);
		start = clock(); //time is in seconds
		arr5->mergeSort(0, arr5->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>mergesort 1000000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(3);
		start = clock(); //time is in seconds
		arr5->mergeSort(0, arr5->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>mergesort 1000000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(4);
		start = clock(); //time is in seconds
		arr5->mergeSort(0, arr5->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr5;
	//#################################################

	file << "\n#>end";
	file.close();
}

void quickSortTest()
{
	ofstream file;
	file.open("graphing/input/quickSort.txt");
	clock_t start;
	double duration;

	//#################################################
	//Case 1
	cout << "10 series" << endl;
	file << "\n#>quicksort 10 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr1 = new myarray<int>(10);
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(1);
		start = clock(); //time is in seconds
		arr1->quickSort(0, arr1->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>quicksort 10 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(2);
		start = clock(); //time is in seconds
		arr1->quickSort(0, arr1->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>quicksort 10 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(3);
		start = clock(); //time is in seconds
		arr1->quickSort(0, arr1->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>quicksort 10 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr1->initialize(4);
		start = clock(); //time is in seconds
		arr1->quickSort(0, arr1->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr1;
	//#################################################

	//#################################################
	//Case 1
	cout << "1000 series" << endl;
	file << "\n#>quicksort 1000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr2 = new myarray<int>(1000);
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(1);
		start = clock(); //time is in seconds
		arr2->quickSort(0, arr2->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>quicksort 1000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(2);
		start = clock(); //time is in seconds
		arr2->quickSort(0, arr2->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>quicksort 1000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(3);
		start = clock(); //time is in seconds
		arr2->quickSort(0, arr2->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>quicksort 1000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr2->initialize(4);
		start = clock(); //time is in seconds
		arr2->quickSort(0, arr2->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr2;
	//#################################################

	//#################################################
	//Case 1
	cout << "10000 series" << endl;
	file << "\n#>quicksort 10000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr3 = new myarray<int>(10000);
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(1);
		start = clock(); //time is in seconds
		arr3->quickSort(0, arr3->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>quicksort 10000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(2);
		start = clock(); //time is in seconds
		arr3->quickSort(0, arr3->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>quicksort 10000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(3);
		start = clock(); //time is in seconds
		arr3->quickSort(0, arr3->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>quicksort 10000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr3->initialize(4);
		start = clock(); //time is in seconds
		arr3->quickSort(0, arr3->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr3;
	//#################################################

	//#################################################
	//Case 1
	cout << "100000 series" << endl;
	file << "\n#>quicksort 100000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr4 = new myarray<int>(100000);
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(1);
		start = clock(); //time is in seconds
		arr4->quickSort(0, arr4->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>quicksort 100000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(2);
		start = clock(); //time is in seconds
		arr4->quickSort(0, arr4->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>quicksort 100000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(3);
		start = clock(); //time is in seconds
		arr4->quickSort(0, arr4->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>quicksort 100000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr4->initialize(4);
		start = clock(); //time is in seconds
		arr4->quickSort(0, arr4->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr4;
	//#################################################
	
	//#################################################
	//Case 1
	cout << "1000000 series" << endl;
	file << "\n#>quicksort 1000000 case 1\n";
	cout << "Starting case 1" << endl;
	myarray<int> *arr5 = new myarray<int>(1000000);
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(1);
		start = clock(); //time is in seconds
		arr5->quickSort(0, arr5->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}	

	//Case 2
	file << "\n#>quicksort 1000000 case 2\n";
	cout << "Starting case 2" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(2);
		start = clock(); //time is in seconds
		arr5->quickSort(0, arr5->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 3
	file << "\n#>quicksort 1000000 case 3\n";
	cout << "Starting case 3" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(3);
		start = clock(); //time is in seconds
		arr5->quickSort(0, arr5->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}

	//Case 4
	file << "\n#>quicksort 1000000 case 4\n";
	cout << "Starting case 4" << endl;
	for(int i = 0; i < 100; i++)
	{
		arr5->initialize(4);
		start = clock(); //time is in seconds
		arr5->quickSort(0, arr5->getSize());
		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		file << duration << ",";
	}
	delete arr5;
	//#################################################

	file << "\n#>end";
	file.close();
}