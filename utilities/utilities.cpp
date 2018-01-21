#include <iostream>
#include <vector>
#include "../header.h"

using namespace std;

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