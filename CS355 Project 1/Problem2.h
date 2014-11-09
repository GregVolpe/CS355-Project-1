#pragma once
#include <time.h>
class Problem2
{
public:
	Problem2();
	~Problem2();

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
	void heapClean(int**, int**);
	int parentArray1[100][100];
	int parentArray2[100][100];
	double duration;
	clock_t start;

};

