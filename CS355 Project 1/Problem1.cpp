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

void Problem1::createArray(){
	static int arr1[100][100];
	static int arr2[100][100];

}
void Problem1::createHeap(){
	int **arr1 = new int*[100];
	int **arr2 = new int*[100];

	for (int i = 0; i < 100; i++){
		arr1[i] = new int[100];
		arr2[i] = new int[100];
	}

	heapClean(arr1, arr2);
}

void Problem1::createFubarHeap(){
	int **arr1 = new int*[100];
	int **arr2 = new int*[100];

	for (int i = 0; i < 100; i++){
		arr1[i] = new int[100];
		arr2[i] = new int[100];
	}
}

void Problem1::heapClean(int **arr1,int **arr2){
	for (int i = 0; i < 100; ++i) {
		delete[] arr1[i];
		delete[] arr2[i];
	}
	delete[] arr1;
	delete[] arr2;
}

void Problem1::createStack(){
	int stackArray1[100][100];
	int stackArray2[100][100];


}
void Problem1::startTime() {
	start = clock();
}

void Problem1::stopTime(){
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
}

double Problem1::getTime(){
	return duration;
}
void Problem1::clearTime(){
	duration = -1;
}
void Problem1::runProblem1(){
	int numRuns = getInput();
	Problem1 problem;
	cout << "Running static Array..." << endl;
	problem.startTime();
	for (int i = 1; i < numRuns; i++){
		problem.createArray();
	}
	problem.stopTime();
	double time = problem.getTime();
	cout << "static declarations took " << time << endl;
	problem.clearTime();
	cout << "Running Stack Array..." << endl;
	problem.startTime();
	for (int i = 1; i < numRuns; i++){
		problem.createStack();
	}
	problem.stopTime();
	 time = problem.getTime();
	cout << "stack declarations took " << time << endl;
	problem.clearTime();
	cout << "Running Heap Array..." << endl;
	problem.startTime();
	for (int i = 1; i < numRuns; i++){
		problem.createHeap();
	}
	problem.stopTime();
	 time = problem.getTime();
	cout << "Heap declarations took " << time << endl;
	problem.clearTime();
	cout << "Running Heap Array, no garbage collection (20,000 passes)..." << endl;
	problem.startTime();
	for (int i = 1; i < 20000; i++){
		problem.createFubarHeap();
	}
	problem.stopTime();
	time = problem.getTime();
	cout << "Heap declarations took " << time << endl;
	problem.clearTime();
}
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