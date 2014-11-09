#pragma once
#include <time.h>
class Problem4
{
public:
	Problem4();
	~Problem4();

	void subscripting(int,int);
	void pointerMap(int, int);
	void startTime();
	double stopTime();
	double getTime();
	void clearTime();
	void runProblem4();
	void getInput();


private:
	void initializeArray();
	int arrayOne[100][100];
	int NUMROWS, NUMCOLS;
	int((*tblpntr)[100])[100];
	double duration;
	clock_t start;
	int numTimesToRun;
};

