#include <iostream>
#include <vector>
#include "../header.h"

using namespace std;

void vectorselectionsort(vector<int>& v)
{
	int min;
	int j;
	for(int i = 0; i < v.size()-1; i++)
	{
		min = i;
		for(j = i+1; j < v.size(); j++)
		{
			if(v.at(min) > v.at(j))
			{
				min = j;
			}
		}
		swap(v, min, i);
	}
}