#include <iostream>
#include <vector>
#include "header.h"

using namespace std;

int main()
{
	vector<int> v = {2,4,6,2,1,6,8,3,9,5}; //simple test vector

	vectormergesort(v, 0, v.size()-1);
	cout << verifySorted(v) << endl; //will print one if the vector is sorted



	return 0;
}