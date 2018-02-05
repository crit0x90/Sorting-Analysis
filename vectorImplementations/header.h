#ifndef PLAYER_H //tells the preprocessor not to redefine things or complain about redefinition errors
#define PLAYER_H
#include <vector>

using namespace std;

////////////////////////////////////////////////
//Sorting Functions
////////////////////////////////////////////////

void vectormergesort(vector<int>& v, int left, int right);

void vectorinsertionsort(vector<int>& v);

//call with vectorquicksort(v, 0, v.size()-1)
void vectorquicksort(vector<int>& v, int low, int high);

void vectorbubblesort(vector<int>& v);

void vectorselectionsort(vector<int>& v);

////////////////////////////////////////////////



////////////////////////////////////////////////
//Utility Functions
////////////////////////////////////////////////

void swap(vector<int>& v, int i, int j);

void printVector(vector<int>& v);

bool verifySorted(vector<int>& v);

vector<int> createRandomVector(int numElts);

////////////////////////////////////////////////

#endif