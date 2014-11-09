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
	void startTime();
	void stopTime();
	double getTime();
	void clearTime();
	void runProblem1();


private:
	void heapClean(int**,int**);
	int parentArray1[100][100];
	int parentArray2[100][100];
	double duration;
	clock_t start;

};

