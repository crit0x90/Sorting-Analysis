#include <iostream>
#include <vector>
#include <time.h>
#include "../header.h"

using namespace std;

// swaps two elements in a given vector
void swap(vector<int>& v, int i, int j)
{
	int x = v.at(i);
	v.at(i) = v.at(j);
	v.at(j) = x;
}

void printVector(vector<int>& v)
{
	for(int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
}

bool verifySorted(vector<int>& v)
{
	bool flag = true;

	for(int i = 1; i < v.size(); i++)
	{
		if(v.at(i) < v.at(i-1))
		{
			flag = false;
		}
	}

	return flag;
}

//creates a vector of size numElts and fills it with random elements
vector<int> createRandomVector(int numElts)
{
	vector<int> v;

	for(int i = 0; i < numElts; i++)
	{
		v.push_back(rand()%10);
	}
	return v;
}