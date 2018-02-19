#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;

template <typename T>
class myarray {
public:
	//constructors
	myarray();		//defult constructor
	myarray(int num); //copy constructor; creates an array of n rand ints
	~myarray();		//default destructor

	//data members
	int sizeOfArray;   //size of the array
	T *arr;		   //pointer to the array

	//array functions
	void printArray(); //prints the array
	void prepend(T); //adds element to the front
	void append(T);  //adds element to the end
	void delFront();   //deletes element at front
	void delBack();    //deletes element at end
	void reverseArr(); //reverses the order of array
	int  getSize();  //returns the size of the array 
	void initialize(int); //initializes the array based on the code

	//Sorting functions
	void bubbleSort(); 		//bubblesort implementation
	void insertionSort();  	//insertionsort implementation
	void selectionSort();	//selectionsort implementation
	void merge(int left, int middle, int right); //merge step
	void mergeSort(int left, int right); //mergesort implementation
	int  partition(int left, int right); //qsort partition
	void quickSort(int left, int right); //qsort implementation

	//utility functions
	void swap(int i, int j); //swaps two elements at the given indexes
	
protected:
private:
};

//testing functions
void bubbleSortTest();
void insertionSortTest();
void selectionSortTest();
void mergeSortTest();
void quickSortTest();

#include "array_imp.tcc"

#endif