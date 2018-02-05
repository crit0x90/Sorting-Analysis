#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;

class myarray {
public:
	myarray();		//defult constructor
	myarray(int num); //copy constructor
	~myarray();		//default destructor

	int sizeOfArray;   //size of the array
	int *arr;		   //pointer to the array

	void printArray(); //prints the array
	void prepend(int); //adds element to the front 
	void append(int);  //adds element to the end
	void delFront();   //deletes element at front
	void delBack();    //deletes element at end
	void reverseArr(); //reverses the order of array
	//void writeToFile(char*); //copies the array to a file
	int  getSize();  //returns the size of the array
	int  sigma();    //sums all of the elements in the array
	//int* checkOdd(); //returns the odd elements of the array
	//int* operator+(const array&) const; //overload of + operator to 
										//support concatenation of arrays
protected:
private:
};

#endif