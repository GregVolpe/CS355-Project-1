#include "Problem2.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Problem2::Problem2()
{

}


void Problem2::createArray(){
	static int arr1[100][100] = { 0 };
	static int arr2[100][100];

	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			arr2[i][j] = rand() % 100;
		}
	}
	for (int a = 0; a < 100;a++)
	{
		for (int b = 0; b < 100;b++)
		{
			for (int c = 0; c < 100;c++)
			{
				arr1[a][b] = arr1[a][b] + arr2[a][c] * arr2[c][b];
			}
		}
	}
}
void Problem2::createHeap(){
	int **arr1 = new int*[100];
	int **arr2 = new int*[100];

	for (int i = 0; i < 100; i++){
		arr1[i] = new int[100];
		arr2[i] = new int[100];
	}

	heapClean(arr1, arr2);
}

void Problem2::createFubarHeap(){
	int **arr1 = new int*[100];
	int **arr2 = new int*[100];

	for (int i = 0; i < 100; i++){
		arr1[i] = new int[100];
		arr2[i] = new int[100];
	}
}

void Problem2::heapClean(int **arr1, int **arr2){
	for (int i = 0; i < 100; ++i) {
		delete[] arr1[i];
		delete[] arr2[i];
	}
	delete[] arr1;
	delete[] arr2;
}

void Problem2::createStack(){
	int stackArray1[100][100];
	int stackArray2[100][100];


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
	problem.startTime();
	for (int i = 1; i < 150000; i++){
		problem.createArray();
	}
	problem.stopTime();
	double time = problem.getTime();
	cout << "static declarations took " << time << endl;
	problem.clearTime();

	problem.startTime();
	for (int i = 1; i < 150000; i++){
		problem.createStack();
	}
	problem.stopTime();
	time = problem.getTime();
	cout << "stack declarations took " << time << endl;
	problem.clearTime();

	problem.startTime();
	for (int i = 1; i < 150000; i++){
		problem.createHeap();
	}
	problem.stopTime();
	time = problem.getTime();
	cout << "Heap declarations took " << time << endl;
	problem.clearTime();

	problem.startTime();
	for (int i = 1; i < 150000; i++){
		problem.createFubarHeap();
	}
	problem.stopTime();
	time = problem.getTime();
	cout << "Heap declarations took " << time << endl;
	problem.clearTime();
}



Problem2::~Problem2()
{
}
