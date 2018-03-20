#include <iostream>
#include "array.h"

using namespace std;

//This file contains the implementations of all of the
//functions associated with the array with the exception
//of the testing functions

//default constructor
template <typename T>
myarray<T>::myarray()
{}

//copy constructor
template <typename T>
myarray<T>::myarray(int s)
{
	sizeOfArray = s;
	arr = new T [s];
	
	for(int i = 0; i < sizeOfArray; i++)
	{
		arr[i] = rand() % 100;
	}
}

//default destructor
template <typename T>
myarray<T>::~myarray()
{}

//prints the contents of the array
template <typename T>
void myarray<T>::printArray()
{
	for(int i = 0; i < sizeOfArray; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//this function is used to populate the array
//with elements in the configuration corresponding
//to the code it recieves
template <typename T>
void myarray<T>::initialize(int code)
{
	switch(code)
	{
		//sorted
		case 1: 
			for(int i = 0; i < sizeOfArray; i++)
			{
				arr[i] = rand() % 100;
			}
			mergeSort(0, sizeOfArray-1);
			break;
		//random
		case 2: 
			for(int i = 0; i < sizeOfArray; i++)
			{
				arr[i] = rand() % 100;
			}
			break;
		//sorted in reverse
		case 3:
			for(int i = 0; i < sizeOfArray; i++)
			{
				arr[i] = rand() % 100;
			}
			mergeSort(0, sizeOfArray-1);
			reverseArr();
			break;
		//10% shuffle
		case 4:
			//create array
			for(int i = 0; i < sizeOfArray; i++)
			{
				arr[i] = rand() % 100;
			}
			//sort array
			mergeSort(0, sizeOfArray-1);

			//shuffle at 10%
			for(int i = 0; i < sizeOfArray * 0.1; i++)
			{
				int randomIndex = rand() % sizeOfArray;
				arr[randomIndex] = rand() % 100;
			}
			break;
	}
}

//inserts element at the beginning of the array
template <typename T> 
void myarray<T>::prepend(T x)
{
	sizeOfArray++;
	T *old = arr;
	arr = new T[sizeOfArray];
	//copy into new container
	for(int i = 1; i < sizeOfArray; i++)
	{
		arr[i] = old[i-1];
	}
	arr[0] = x;
	delete old;
}

//inserts element at the end of the array
template <typename T>
void myarray<T>::append(T x)
{
	sizeOfArray++;
	T *old = arr;
	arr = new T[sizeOfArray];
	//copy into new container
	for(int i = 0; i < sizeOfArray-1; i++)
	{
		arr[i] = old[i];
	}
	arr[sizeOfArray-1] = x;
	delete old;
}

//deletes the first element in the array
template <typename T>
void myarray<T>::delFront()
{
	T *old = arr;
	arr = new T[sizeOfArray-1];
	//copy into new container
	for(int i = 1; i < sizeOfArray; i++)
	{
		arr[i-1] = old[i];
	}
	sizeOfArray--;
	delete old;
}

//deletes the last element in the array
template <typename T>
void myarray<T>::delBack()
{
	T *old = arr;
	sizeOfArray--;
	arr = new T[sizeOfArray];
	//copy into new container
	for(int i = 0; i < sizeOfArray; i++)
	{
		arr[i] = old[i];
	}
	delete old;
}

//reverses the order of the array
template<typename T>
void myarray<T>::reverseArr()
{
	int left = 0;
	int right = sizeOfArray-1;
	int temp;
	while(left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

template<typename T>
int myarray<T>::getSize()
{
	return sizeOfArray;
}

//helper function used to swap two elements
//at indexes i and j
template <typename T>
void myarray<T>::swap(int i, int j)
{
	T x = arr[i];
	arr[i] = arr[j];
	arr[j] = x;
}

template <typename T>
void myarray<T>::bubbleSort()
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


template <typename T>
void myarray<T>::insertionSort()
{
	T key = 0;
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

template <typename T>
void myarray<T>::selectionSort()
{
	int min; //min elt for current pass
	int j; //counter
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

//merge helper function for mergesort
template <typename T>
void myarray<T>::merge(int left, int middle, int right)
{
	//number of elements for each subarray
	int l1 = middle - left + 1; //end of left portion
	int l2 = right - middle; //end of right portion

	T sub1[l1]; //subarray 1
	T sub2[l2]; //subarray 2

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

//mergesort main function
//call with 0, size-1
template <typename T>
void myarray<T>::mergeSort(int left , int right)
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

//partition function for quicksort
template <typename T>
int myarray<T>::partition(int left, int right)
{
	T pivot = arr[right];
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

//call with 0, size-1
//quicksort main function
template <typename T>
void myarray<T>::quickSort(int left, int right)
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