#include <iostream>
#include <vector>
#include "../header.h"

using namespace std;

// swaps two elements in a given vector
void swap(vector<int>& v, int i, int j)
{
	int x = v.at(i);
	v.at(i) = v.at(j);
	v.at(j) = x;
}

int partition(vector<int>& v, int left, int right)
{
	int pivot = v.at(right);
	int leftindx = (left-1);
	//sort the subarray in place
	for(int i = left; i <= right-1; i++)
	{
		if(v.at(i) <= pivot)
		{
			leftindx++;
			swap(v, leftindx, i);
		}
	}
	swap(v, leftindx+1, right);
	return (leftindx+1);
}

void vectorquicksort(vector<int>& v, int left, int right)
{
	if(right - left <= 0)
	{
		return;
	}
	else
	{
		int part = partition(v, left, right);
		vectorquicksort(v, left, part-1);
		vectorquicksort(v, part+1, right);
	}
}