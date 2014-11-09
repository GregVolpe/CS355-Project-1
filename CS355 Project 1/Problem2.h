/*
Greg Volpe
CS 355
Dr. Ganchev
November 9, 2014
Assignment 1
Problem 2 Header
*/

#pragma once
#include <time.h>
class Problem2
{
public:
	Problem2();
	~Problem2();

	void createArray(int numRuns);

	void createStack(int numRuns);

	void createHeap(int numRuns);

	void createFubarHeap(int numRuns);
	void startTime();
	void stopTime();
	double getTime();
	void clearTime();
	void runProblem();


private:
	int getInput();
	void heapClean(int**, int**);
	void initializeClassArrays();
	double duration;
	clock_t start;

};

