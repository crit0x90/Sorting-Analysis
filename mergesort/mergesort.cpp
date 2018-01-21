#include <vector>
#include "../header.h"

using namespace std;

void vectormerge(vector<int> &v, int left, int middle, int right)
{
	//number of elements for each subarray
	int l1 = middle - left + 1; //end of left portion
	int l2 = right - middle; //end of right portion

	int sub1[l1]; //subarray 1
	int sub2[l2]; //subarray 2

	for (int i = 0; i < l1; i++)
	{
		//copy left portion of array to merge
		sub1[i] = v.at(left+i);
	}
	for (int i = 0; i < l2; i++)
	{
		//copy right portion of array to merge
		sub2[i] = v.at(middle + 1 + i);
	}

	int i = 0; //start index for first array
	int j = 0; //start index for second array
	int k = left; //start index for the merged array
	//copy elements while neither array has been exhausted
	while(i < l1 && j < l2)
	{
		if(sub1[i] <= sub2[j])
		{
			v.at(k) = sub1[i];
			i++;
		}
		else
		{
			v.at(k) = sub2[j];
			j++;
		}
		k++;
	}

	//copy any leftovers for sub1
	if (i < l1)
	{
		for(i = i; i < l1; i++)
		{
			v.at(k) = sub1[i];
			k++;
		}
	}

	//copy any leftovers for sub2
	if (j < l2)
	{
		for(j = j; j < l2; j++)
		{
			v.at(k) = sub2[j];
			k++;
		}
	}
}

void vectormergesort(vector<int>& v, int left, int right)
{
	int middle = 0;
	
	if(right > left)
	{
		middle = (left+right)/2;
		vectormergesort(v, left, middle);
		vectormergesort(v, middle+1, right);
		vectormerge(v, left, middle, right);
	}
}
