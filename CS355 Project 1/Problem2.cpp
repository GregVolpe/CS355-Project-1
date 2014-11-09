/*
Greg Volpe
CS 355
Dr. Ganchev
November 9, 2014
Assignment 1
Problem 2 cpp
*/

#include "Problem2.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Problem2::Problem2()
{

}

/*
The following function will create two arrays, fill the first with random numbers up to 100 and multiply the first matrix by itself and store in the second matrix
*/
void Problem2::createArray(int numRuns){
	static int arr1[100][100] = { 0 };
	static int arr2[100][100];

	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			arr2[i][j] = rand() % 100;
		}
	}
	int counter = 2;
	int count=0;
	startTime();
	for (int d = 0; d < numRuns; d++){
		//cout << "Pass # " << d << endl;
		for (int a = 0; a < 100; a++)
		{
			for (int b = 0; b < 100; b++)
			{
				for (int c = 0; c < 100; c++)
				{
					arr1[a][b] = arr1[a][b] + arr2[a][c] * arr2[c][b];
				}
			}
		}
	}
		stopTime();
		cout <<"The static declaration took "<< getTime()<<endl;
		clearTime();
}
/*
The following function will create two arrays on the HEAP, fill the first with random numbers up to 100 and multiply the first matrix by itself and store in the second matrix
it will then call the clean heap function to deallocate the memory to prevent leakage and dangling pointers
*/
void Problem2::createHeap(int numRuns){
	int **arr1 = new int*[100];
	int **arr2 = new int*[100];

	for (int i = 0; i < 100; i++){
		arr1[i] = new int[100];
		arr2[i] = new int[100];
	}
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			arr1[i][j] = 0;
			arr2[i][j] = rand() % 100;
		}
	}
	clearTime();
	startTime();
	for (int d = 0; d < numRuns; d++){
		//cout << "Pass # " << d << endl;
			for (int a = 0; a < 100; a++)
			{
				for (int b = 0; b < 100; b++)
				{
					for (int c = 0; c < 100; c++)
					{
						arr1[a][b] = arr1[a][b] + arr2[a][c] * arr2[c][b];
					}
				}
			}
		}
	stopTime();
	heapClean(arr1, arr2);
	cout <<"The Heap took: "<< getTime() << endl;
}

/*
The following function will create two arrays, fill the first with random numbers up to 100 and multiply the first matrix by itself and store in the second matrix
but will NOT clean up the heap after itself.
*/
void Problem2::createFubarHeap(int numRuns){
	int **arr1 = new int*[100];
	int **arr2 = new int*[100];

	for (int i = 0; i < 100; i++){
		arr1[i] = new int[100];
		arr2[i] = new int[100];
	}
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			arr1[i][j] = 0;
			arr2[i][j] = rand() % 100;
		}
	}
	clearTime();
	startTime();
	for (int d = 0; d < numRuns; d++){
		//cout << "Pass # " << d << endl;
		for (int a = 0; a < 100; a++)
		{
			for (int b = 0; b < 100; b++)
			{
				for (int c = 0; c < 100; c++)
				{
					arr1[a][b] = arr1[a][b] + arr2[a][c] * arr2[c][b];
				}
			}
		}
	}
	stopTime();
	cout << "The Fubar Heap took: " << getTime() << endl;
}
/*
The following function will deallocate memory used by two, two dimensional arrays of size 100 x 100
*/
void Problem2::heapClean(int **arr1, int **arr2){
	for (int i = 0; i < 100; ++i) {
		delete[] arr1[i];
		delete[] arr2[i];
	}
	delete[] arr1;
	delete[] arr2;
}
/*
The following function will create two arrays on the STACK, fill the first with random numbers up to 100 and multiply the first matrix by itself and store in the second matrix
*/
void Problem2::createStack(int numRuns){
	int arr1[100][100] = { 0 };
	int arr2[100][100];
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			arr1[i][j] = 0;
			arr2[i][j] = rand() % 100;
		}
	}
	clearTime();
	startTime();
	for (int d = 0; d < numRuns; d++){
		//cout << "Pass # " << d << endl;
		for (int a = 0; a < 100; a++)
		{
			for (int b = 0; b < 100; b++)
			{
				for (int c = 0; c < 100; c++)
				{
					arr1[a][b] = arr1[a][b] + arr2[a][c] * arr2[c][b];
				}
			}
		}
	}
	stopTime();
	cout << "The stack took: " << getTime() << endl;

}
/*
Simple function used to start the class clock
*/
void Problem2::startTime() {
	start = clock();
}
/*
Simple function used to stop the class clock and calculate the duration since it was started
*/
void Problem2::stopTime(){
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
}
/*
Simple function used to return the duration from the class
*/
double Problem2::getTime(){
	return duration;
}
/*
Simple function used to clear the duration from the class variable
*/
void Problem2::clearTime(){
	duration = -1;
}
/*
Function used to perform all operations requested in problem 2
*/
void Problem2::runProblem(){
	int numRuns = this->getInput();
	cout << "multiplying the static arrays" << endl;
	this->createArray(numRuns);
	cout << "multiplying the stack arrays" << endl;
	this->createStack(numRuns);
	cout << "multiplying the heap arrays" << endl;
	this->createHeap(numRuns);
	cout << "multiplying the heap arrays with no garbage collection" << endl;
	this->createFubarHeap(numRuns);
}
/*
Simple function used to retrieve input from the user.
*/
int Problem2::getInput(){
	cout << "Enter number of times to run each array." << endl;
	int num;
	cin >> num;
	while (cin.fail() | num < 1){
		cin.clear();
		cin.ignore();
		cout << "bad input, try again." << endl;
		cin >> num;
	}
	return num;
}


Problem2::~Problem2()
{
}
