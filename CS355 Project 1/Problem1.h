/*
Greg Volpe
CS 355
Dr. Ganchev
November 9, 2014
Assignment 1 
Problem 1 Header
*/

#pragma once
#include <time.h>

class Problem1
{
public:
	Problem1();
	~Problem1();

	void createArray();

	void createStack();

	void createHeap();

	void createFubarHeap();
	void startTime();
	void stopTime();
	double getTime();
	void clearTime();
	void runProblem1();


private:
	int getInput();
	void heapClean(int**,int**);
	int parentArray1[100][100];
	int parentArray2[100][100];
	double duration;
	clock_t start;

};

