/*
Greg Volpe
CS 355
Dr. Ganchev
November 9, 2014
Assignment 1
Problem 1 cpp
*/

#include "Problem1.h"
#include <string>
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;


Problem1::Problem1()
{
	int parentArray2 = { 0 };
	int parentArray1 = { 0 };
}


Problem1::~Problem1()
{
}
/*
Simple function used to declare two static arrays of size 100x100
*/
void Problem1::createArray(){
	static int arr1[100][100];
	static int arr2[100][100];

}
/*
Simple function used to declare two arrays of size 100x100 on the heap and will deallocate memory on exit
*/
void Problem1::createHeap(){
	int **arr1 = new int*[100];
	int **arr2 = new int*[100];

	for (int i = 0; i < 100; i++){
		arr1[i] = new int[100];
		arr2[i] = new int[100];
	}

	heapClean(arr1, arr2);
}
/*
Simple function used to declare two arrays of size 100x100 on the heap, but will not deallocate the memeory on exit
*/
void Problem1::createFubarHeap(){
	int **arr1 = new int*[100];
	int **arr2 = new int*[100];

	for (int i = 0; i < 100; i++){
		arr1[i] = new int[100];
		arr2[i] = new int[100];
	}
}
/*
Simple function used to deallocate the memory of two heap arrays
*/
void Problem1::heapClean(int **arr1,int **arr2){
	for (int i = 0; i < 100; ++i) {
		delete[] arr1[i];
		delete[] arr2[i];
	}
	delete[] arr1;
	delete[] arr2;
}
/*
Simple function used to declare two arrays on the stack
*/
void Problem1::createStack(){
	int stackArray1[100][100];
	int stackArray2[100][100];


}
/*
Simple function used to start the class clock
*/
void Problem1::startTime() {
	start = clock();
}
/*
Simple function used to stop the class clock and calculate duration
*/
void Problem1::stopTime(){
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
}
/*
Simple function used to get the duration from the class clock
*/
double Problem1::getTime(){
	return duration;
}
/*
Simple function used to clear the duration on the class clock
*/
void Problem1::clearTime(){
	duration = -1;
}
/*
Simple function used to perform all operations of problem 1
*/
void Problem1::runProblem1(){
	int numRuns = getInput();
	cout << "Running static Array..." << endl;
	this->startTime();
	for (int i = 1; i < numRuns; i++){
		this->createArray();
	}
	this->stopTime();
	double time = this->getTime();
	cout << "static declarations took " << time << endl;
	this->clearTime();
	cout << "Running Stack Array..." << endl;
	this->startTime();
	for (int i = 1; i < numRuns; i++){
		this->createStack();
	}
	this->stopTime();
	 time = this->getTime();
	cout << "stack declarations took " << time << endl;
	this->clearTime();
	cout << "Running Heap Array..." << endl;
	this->startTime();
	for (int i = 1; i < numRuns; i++){
		this->createHeap();
	}
	this->stopTime();
	time = this->getTime();
	cout << "Heap declarations took " << time << endl;
	this->clearTime();

	cout << "Would you like to run the heap array without garbage collection? (could cause program to crash).\n1.yes\n2.no" << endl;
	int number;
	cin >> number;
	if (number == 1){
		cout << "Running Heap Array, no garbage collection (15,000 passes)..." << endl;
		this->startTime();
		for (int i = 1; i < 15000; i++){
			//cout << "Pass # " << i << endl;
			this->createFubarHeap();
		}
		this->stopTime();
		time = this->getTime();
		cout << "Heap declarations took " << time << endl;
		this->clearTime();
	}
}
/*
Simple function used to get inputs from the user
*/
int Problem1::getInput(){
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
