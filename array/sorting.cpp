#include "array.h"
#include <iostream>

using namespace std;

void myarray::bubbleSort()
{
	for(int i = 0; i < sizeOfArray; i++)
	{
		for(int j = 1; j < sizeOfArray; j++)
		{
			if(arr[j] < arr[j-1])
			{
				int temp = j-1;
				swap(j, temp);
			}
		}
	}
}

void myarray::insertionSort()
{
	int key = 0;
	int i   = 0;
	for(int j = 1; j < sizeOfArray; j++)
	{
		key = arr[j];
		//insert arr[j] into the sorted sequence v.at(1..j-1)
		i = j-1;
		//since we are starting at index 0 rather than 1 we must not end
		//the while loop until i < 0 (this is slightly different than the
		//psuedocode in the book)
		while(i >= 0 && arr[i] > key)
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i+1] = key;
	}
}

void myarray::selectionSort()
{
	int min;
	int j;
	for(int i = 0; i < sizeOfArray-1; i++)
	{
		min = i;
		for(j = i+1; j < sizeOfArray; j++)
		{
			if(arr[min] > arr[j])
			{
				min = j;
			}
		}
		swap(min, i);
	}
}

void myarray::merge(int left, int middle, int right)
{
	//number of elements for each subarray
	int l1 = middle - left + 1; //end of left portion
	int l2 = right - middle; //end of right portion

	int sub1[l1]; //subarray 1
	int sub2[l2]; //subarray 2

	for (int i = 0; i < l1; i++)
	{
		//copy left portion of array to merge
		sub1[i] = arr[left+i];
	}
	for (int i = 0; i < l2; i++)
	{
		//copy right portion of array to merge
		sub2[i] = arr[middle + 1 + i];
	}

	int i = 0; //start index for first array
	int j = 0; //start index for second array
	int k = left; //start index for the merged array
	//copy elements while neither array has been exhausted
	while(i < l1 && j < l2)
	{
		if(sub1[i] <= sub2[j])
		{
			arr[k] = sub1[i];
			i++;
		}
		else
		{
			arr[k] = sub2[j];
			j++;
		}
		k++;
	}

	//copy any leftovers for sub1
	if (i < l1)
	{
		for(i = i; i < l1; i++)
		{
			arr[k] = sub1[i];
			k++;
		}
	}

	//copy any leftovers for sub2
	if (j < l2)
	{
		for(j = j; j < l2; j++)
		{
			arr[k] = sub2[j];
			k++;
		}
	}
}

void myarray::mergeSort(int left , int right)
{
	int middle = 0;
	
	if(right > left)
	{
		middle = (left+right)/2;
		mergeSort(left, middle);
		mergeSort(middle+1, right);
		merge(left, middle, right);
	}
}

int myarray::partition(int left, int right)
{
	int pivot = arr[right];
	int leftindex = (left-1);
	//sort the subarray in place
	for(int i = left; i <= right-1; i++)
	{
		if(arr[i] <= pivot)
		{
			leftindex++;
			swap(leftindex, i);
		}
	}
	swap(leftindex+1, right);
	return (leftindex+1);
}

void myarray::quickSort(int left, int right)
{
	if(right - left <= 0)
	{
		return;
	}
	else
	{
		int part = partition(left, right);
		quickSort(left, part-1);
		quickSort(part+1, right);
	}
}