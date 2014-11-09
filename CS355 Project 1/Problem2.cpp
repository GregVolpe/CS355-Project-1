#include "Problem2.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Problem2::Problem2()
{

}


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

void Problem2::heapClean(int **arr1, int **arr2){
	for (int i = 0; i < 100; ++i) {
		delete[] arr1[i];
		delete[] arr2[i];
	}
	delete[] arr1;
	delete[] arr2;
}

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
void Problem2::startTime() {
	start = clock();
}

void Problem2::stopTime(){
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
}

double Problem2::getTime(){
	return duration;
}
void Problem2::clearTime(){
	duration = -1;
}
void Problem2::runProblem1(){
	Problem2 problem;

}

Problem2::~Problem2()
{
}
