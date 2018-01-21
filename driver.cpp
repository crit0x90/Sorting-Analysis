#include <iostream>
#include <vector>
#include <time.h>
#include "header.h"

using namespace std;

int main()
{
	srand(time(NULL));
	
	vector<int> v = createRandomVector(10);

	printVector(v);
	cout << endl;

	printVector(v);
	cout << endl << verifySorted(v) << endl; //will print one if the vector is sorted

	return 0;
}