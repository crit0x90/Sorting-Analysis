#ifndef PLAYER_H //helps the preprocessor not redefine things or complain about redefinition errors
#define PLAYER_H
#include <vector>

using namespace std;

////////////////////////////////////////////////
//Sorting Functions
////////////////////////////////////////////////

void vectormergesort(vector<int>& v, int left, int right);

void vectorinsertionsort(vector<int>& v);

void vectorquicksort(vector<int>& v, int low, int high);



////////////////////////////////////////////////



////////////////////////////////////////////////
//Utility Functions
////////////////////////////////////////////////

void printVector(vector<int>& v);

bool verifySorted(vector<int>& v);

vector<int> createRandomVector(int numElts);

////////////////////////////////////////////////

#endif