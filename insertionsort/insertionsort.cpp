#include "../header.h"
#include <vector>

using namespace std;

void vectorinsertionsort(vector<int>& v)
{
	int key = 0;
	int i   = 0;
	for(int j = 1; j < v.size(); j++)
	{
		key = v.at(j);
		//insert v.at(j) into the sorted sequence v.at(1..j-1)
		i = j-1;
		//since we are starting at index 0 rather than 1 we must not end
		//the while loop until i < 0 (this is slightly different than the
		//psuedocode in the book)
		while(i >= 0 && v.at(i) > key)
		{
			v.at(i + 1) = v.at(i);
			i--;
		}
		v.at(i+1) = key;
	}
}