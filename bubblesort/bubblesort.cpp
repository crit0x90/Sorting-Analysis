#include <iostream>
#include <vector>
#include "../header.h"

using namespace std;

void vectorbubblesort(vector<int>& v)
{
	for(int i = 0; i < v.size(); i++)
	{
		for(int j = 1; j < v.size(); j++)
		{
			if(v.at(j) < v.at(j-1))
			{
				int temp = j-1;
				swap(v, j, temp);
			}
		}
	}
}