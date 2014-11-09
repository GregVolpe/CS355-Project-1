#include "Problem4.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Problem4::Problem4()
{
	initializeArray();
	NUMROWS = NUMCOLS = 100;
	tblpntr = &arrayOne;
}
void Problem4::initializeArray(){
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			arrayOne[i][j] = 20 + rand() % 100;
		}
	}

}

void Problem4::subscripting(int row, int col){
	cout << "array[" << row << "][" << col << "] = " << arrayOne[row][col] << endl;
}

void Problem4::pointerMap(int row, int col){
	cout << "array[" << row << "][" << col << "] = " << *(*(*tblpntr + row) + col) << endl;
}

void Problem4::startTime() {
	start = clock();
}

double Problem4::stopTime(){
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	return getTime();
}

double Problem4::getTime(){
	return duration;
}
void Problem4::clearTime(){
	duration = -1;
}

void Problem4::runProblem4(){
	double duration1, duration2 = 0;
	Problem4 prob4;
	getInput();
	prob4.startTime();
	for (int a = 0; a < numTimesToRun; a++){
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 100; j++){
				prob4.subscripting(i, j);
			}
		}
	}
	duration1 = prob4.stopTime();

	prob4.clearTime();

	prob4.startTime();
	for (int a = 0; a < numTimesToRun; a++){
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 100; j++){
				prob4.pointerMap(i, j);
			}
		}
	}
	duration2 = prob4.stopTime();

	cout << "The subscripting access of all elements took " << duration1 << " seconds." << endl << "the pointer mapping access of all elements took " << duration2 << " seconds" << endl;
}

void Problem4::getInput(){
	cout << "Enter number of times to run each array.  (NOTE: Anything over 2 times will take a while.)" << endl;
	int num;
	cin >> num;
	while (cin.fail() | num < 1){
		cin.clear();
		cin.ignore();
		cout << "bad input, try again." << endl;
		cin >> num;
	}
	numTimesToRun = num;
}


Problem4::~Problem4()
{
}
