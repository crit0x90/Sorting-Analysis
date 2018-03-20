#include <iostream>
#include <fstream>
#include "array.h"
using namespace std;

//This file contains all of the test cases for quick sort

void quickSortTest(int type, int length)
{
	ofstream file;
	file.open("graphing/input/quickSort.txt", ios::app);
	clock_t start;
	double duration;
	myarray<int> *arr = nullptr;
	switch(length) 
	{
		//#################################################
		//Case 1 - length 10
		case 1:
		{
			switch(type)
			{	
				case 1:
				{
					arr = new myarray<int>(10);
					file << "\n#>quicksort 10 case 1\n";
					cout << "Starting case 1" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(1);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;	
				}

				case 2:
				{
					arr = new myarray<int>(10);
					file << "\n#>quicksort 10 case 2\n";
					cout << "Starting case 2" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(2);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}

				case 3:
				{
					arr = new myarray<int>(10);
					file << "\n#>quicksort 10 case 3\n";
					cout << "Starting case 3" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(3);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}

				case 4:
				{
					arr = new myarray<int>(10);
					file << "\n#>quicksort 10 case 4\n";
					cout << "Starting case 4" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(4);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}
			}
			break;
		}
		//#################################################

		//#################################################
		//Case 2 - length 1000
		case 2:
		{
			switch(type)
			{
				case 1:
				{
					arr = new myarray<int>(1000);
					file << "\n#>quicksort 1000 case 1\n";
					cout << "Starting case 1" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(1);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}

				case 2:
				{	
					arr = new myarray<int>(1000);
					file << "\n#>quicksort 1000 case 2\n";
					cout << "Starting case 2" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(2);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}

				case 3:
				{
					arr = new myarray<int>(1000);
					file << "\n#>quicksort 1000 case 3\n";
					cout << "Starting case 3" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(3);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}	
					delete arr;
					break;
				}

				case 4:
				{
					arr = new myarray<int>(1000);
					file << "\n#>quicksort 1000 case 4\n";
					cout << "Starting case 4" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(4);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}
			}	
			break;	
		}
		//#################################################
		
		//#################################################
		//Case 3 - length 10000
		case 3:
		{
			switch(type)
			{
				case 1:
				{
					arr = new myarray<int>(10000);
					file << "\n#>quicksort 10000 case 1\n";
					cout << "Starting case 1" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(1);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;	
				}

				case 2:
				{
					arr = new myarray<int>(10000);
					file << "\n#>quicksort 10000 case 2\n";
					cout << "Starting case 2" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(2);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}

				case 3:
				{
					arr = new myarray<int>(10000);
					file << "\n#>quicksort 10000 case 3\n";
					cout << "Starting case 3" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(3);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}

				case 4:
				{
					arr = new myarray<int>(10000);
					file << "\n#>quicksort 10000 case 4\n";
					cout << "Starting case 4" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(4);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}
			}
			break;
		}
		//#################################################

		//#################################################
		//Case 4 - length 100000
		case 4:
		{	
			switch(type)
			{
				case 1:
				{
					arr = new myarray<int>(100000);
					file << "\n#>quicksort 100000 case 1\n";
					cout << "Starting case 1" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(1);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;	
				}

				case 2:
				{
					arr = new myarray<int>(100000);
					file << "\n#>quicksort 100000 case 2\n";
					cout << "Starting case 2" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(2);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}

				case 3:
				{
					arr = new myarray<int>(100000);
					file << "\n#>quicksort 100000 case 3\n";
					cout << "Starting case 3" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(3);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;						
				}

				case 4:
				{
					arr = new myarray<int>(100000);
					file << "\n#>quicksort 100000 case 4\n";
					cout << "Starting case 4" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(4);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}
			}
			break;	
		}
		//#################################################
		
		//#################################################
		//Case 5 - length 1000000
		case 5:
		{
			switch(type)
			{
				case 1:
				{
					arr = new myarray<int>(1000000);
					file << "\n#>quicksort 1000000 case 1\n";
					cout << "Starting case 1" << endl;
					myarray<int> *arr = new myarray<int>(1000000);
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(1);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}

				case 2:
				{
					arr = new myarray<int>(1000000);
					file << "\n#>quicksort 1000000 case 2\n";
					cout << "Starting case 2" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(2);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}

				case 3:
				{
					arr = new myarray<int>(1000000);
					file << "\n#>quicksort 1000000 case 3\n";
					cout << "Starting case 3" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(3);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}

				case 4:
				{			
					arr = new myarray<int>(1000000);	
					file << "\n#>quicksort 1000000 case 4\n";
					cout << "Starting case 4" << endl;
					for(int i = 0; i < 100; i++)
					{
						arr->initialize(4);
						start = clock(); //time is in seconds
						arr->quickSort(0, arr->getSize());
						duration = (clock() - start) / (double)CLOCKS_PER_SEC;
						file << duration << ",";
					}
					delete arr;
					break;
				}
			}
			break;	
		}
		//#################################################
	}
	file.close();
}