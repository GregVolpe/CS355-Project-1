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
	void runProblem1();


private:
	void heapClean(int**, int**);
	void initializeClassArrays();
	double duration;
	clock_t start;

};

