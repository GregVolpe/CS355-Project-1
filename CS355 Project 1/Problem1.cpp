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
	int arr1[100][100];
	int arr2[100][100];

}
void Problem1::createHeap(){
	int **arr1 = new int*[100];
	int **arr2 = new int*[100];

	for (int i = 0; i < 100; i++){
		arr1[i] = new int[100];
		arr2[i] = new int[100];
		arr1[i] = { 0 };
		arr2[i] = { 0 };
		cout << "Creating elem " << i << endl;
	}

	heapClean(arr1, arr2);
}

void Problem1::heapClean(int **arr1,int **arr2){
	for (int i = 0; i < 100; ++i) {
		delete[] arr1[i];
		delete[] arr2[i];
		cout << "deleting elem " << i << endl;
	}
	delete[] arr1;
	delete[] arr2;
}

void Problem1::createStack(){
	int *stackArray = new int[100];


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
	Problem1 problem;
	problem.startTime();
	for (int i = 1; i < 100000; i++){
		problem.createArray();
	}
	problem.stopTime();
	double time = problem.getTime();
	cout << "declarations took " << time << endl;
	problem.clearTime();
}
